module Square = {
  type styleCreator = string => ReactDOMRe.style;

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
  /* why no need to type make */
  let make ::width _children => {
    ...component,
      render: fun _self => {
        let style = styleCreator width;
        <div style />;
      }
  };
};

let component = ReasonReact.statelessComponent "Problem6";
let make _children => {
  ...component,
  render: fun _self => {
    /* replace this with a call to <Square /> */
    <div>
      <Square width="75px" />
      <Square width="150px" />
    </div>;
  }
}
