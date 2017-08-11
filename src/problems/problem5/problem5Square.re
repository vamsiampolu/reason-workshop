 /* let width = string; */

let styleCreator width => {
  ReactDOMRe.Style.make
    display::"inline-block"
    width::width
    height::"50px"
    border::"1px solid black"
    marginRight::"5px"
    ();
};

let component = ReasonReact.statelessComponent "Problem5";
let make ::width _children => {
  ...component,
  render: fun _self => {
    let style = styleCreator width;
      <div style />;
    }
};
