type compiler;

external webpack : Js.Json.t => compiler = "webpack" [@@bs.module];

external devMiddleware : compiler => Js.Json.t => 'a = "webpack-dev-middleware" [@@bs.module];

module WebpackStats = {
  type t;
  external getFromLocals : 'a => t = "webpackStats" [@@bs.get];
  external toJson : t => Js.Json.t = "toJson" [@@bs.send];
  external assetsByChunkName : Js.Json.t => Js.Json.t = "assetsByChunkName" [@@bs.get];
  let getAssetsByChunkName locals => getFromLocals locals |> toJson |> assetsByChunkName;
};
