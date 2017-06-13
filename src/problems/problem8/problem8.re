module Problem8Inner = {
  let component = ReasonReact.statelessComponent "Problem8Inner";
  let make _children => {
    ...component,
    render: fun () _self => {
      <div> (ReasonReact.stringToElement "Problem 8 Inner Component") </div>
    }
  }
};

let component = ReasonReact.statelessComponent "Problem8";
let make _children => {
  ...component,
  render: fun () _self => {
    <div> <Problem8Inner /> </div>;
  }
}
