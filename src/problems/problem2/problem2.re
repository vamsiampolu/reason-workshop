let style =
  ReactDOMRe.Style.make
    display::"block"
    width::"50px"
    height::"50px"
    border::"1px solid black"
    background::"grey"
    /* place the appropriate styles here */
    ();
let component = ReasonReact.statelessComponent "Problem2";
let make _children => {
  ...component,
  render: fun _self => {
    <div style />;
  }
};
