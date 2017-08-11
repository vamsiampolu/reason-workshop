let component = ReasonReact.statelessComponent "Problem1";
/* define a function which is the same as extends React.Component */
let make _children => {
  ...component,
  render: fun _self => {
    <div
    /* OCAML is strongly typed cannot interpolate string to element automatically by type coercion, needs stringToElement */
      /* use the ReasonReact.stringToElement function here to make this component render "ReasonML"  */
      /* reason ships with JSX support, similar to React's */
    >
      (ReasonReact.stringToElement "ReasonML")
    </div>
  }
};
