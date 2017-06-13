module Route = {
  external route : ReactRe.reactClass = "Route" [@@bs.module "react-router-dom"];

  let make exact::(exact: bool) path::(path: string) component::(component: 'a => ReasonReact.reactElement) children =>
    ReasonReact.wrapJsForReason
      reactClass::route
      props::{"exact": Js.Boolean.to_js_boolean exact, "path": path, "component": component}
      children;
};

module NavLink = {
  external navLink : ReactRe.reactClass = "NavLink" [@@bs.module "react-router-dom"];

  let make _to::(_to: string) children =>
    ReasonReact.wrapJsForReason
      reactClass::navLink
      props::{"to": _to}
      children;
};

module BrowserRouter = {
  external browserRouter : ReactRe.reactClass = "BrowserRouter" [@@bs.module "react-router-dom"];

  let make children => ReasonReact.wrapJsForReason
    reactClass::browserRouter
    props::(Js.Obj.empty ())
    children;
};

module ServerRouter = {
  external staticRouter : ReactRe.reactClass = "StaticRouter" [@@bs.module "react-router"];

  let make context::(context: Js.Json.t) location::(location: Js.Json.t) children =>
    ReasonReact.wrapJsForReason
      reactClass::staticRouter
      props::{"context": context, "location": location}
      children;
};
