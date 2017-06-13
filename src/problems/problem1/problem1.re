let component = ReasonReact.statelessComponent "Problem1";
let make _children => {
  ...component,
  render: fun () _self => {
    <div
      /* use the ReactRe.stringToElement function here to make this component render "ReasonML"  */
      /* reason ships with JSX support, similar to React's */
    />;
  }
};
