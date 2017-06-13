let style =
  ReactDOMRe.Style.make
    /* place the appropriate styles here */
    ();
let component = ReasonReact.statelessComponent "Problem2";
let make _children => {
  ...component,
  render: fun () _self => {
    <div style />;
  }
};
