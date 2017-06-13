external browserRouter : ReactRe.reactClass = "BrowserRouter" [@@bs.module "react-router-dom"];

external navLink : ReactRe.reactClass = "NavLink" [@@bs.module "react-router-dom"];

external route : ReactRe.reactClass = "Route" [@@bs.module "react-router-dom"];

type rrfn = Js.t {. _match : Js.t {. url : string}};

module Route = {
  let make exact::(exact: bool) path::(path: string) component::(component: 'a) children =>
    ReasonReact.wrapJsForReason
      reactClass::route
      props::{"exact": Js.Boolean.to_js_boolean exact, "path": path, "component": component}
      children;
};

module NavLink = {
  let make _to::(_to: string) children =>
    ReasonReact.wrapJsForReason
      reactClass::navLink
      props::{"to": _to}
      children;
};

module BrowserRouter = {
  let make = ReasonReact.wrapJsForReason
    reactClass::browserRouter
    props::(Js.Obj.empty ());
};
