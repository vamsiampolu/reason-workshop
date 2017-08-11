let component = ReasonReact.statelessComponent "Problem5";

/*
let style = ReactDOMRe.Style.make 
  
();
*/

let make _children => {
  ...component,
  render: fun _self => {
    <div>
      <Problem5Square width="75px" />
      <Problem5Square width="150px" />
    </div>;
  }
};
