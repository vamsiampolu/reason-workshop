external hot : bool = "module.hot" [@@bs.val];

external accept : string => (unit => unit) => unit = "module.hot.accept" [@@bs.val];

external appContainer : ReasonReact.reactClass = "AppContainer" [@@bs.module "react-hot-loader"];

module AppContainer = {
  let make children =>
    ReasonReact.wrapJsForReason
      reactClass::appContainer
      props::(Js.Obj.empty ())
      children;
};

open ReactRouter;

let render c =>
  ReactDOMRe.renderToElementWithClassName
    <AppContainer> <BrowserRouter> (c ()) </BrowserRouter> </AppContainer> "app";

render (fun _ => <Routes />);

external highlightAll : unit => unit = "Prism.highlightAll" [@@bs.val];

if hot {
  /* accept "./routes.js" (fun _ => render (fun _ => <Routes />)); */
  accept "./routes.js" (fun _ => {
    render (fun _ => <Routes />);
    highlightAll ();
  });
};
