type shape =
  | Square
  | Circle;

module Shape = {
  module type Shapeable = {
    let style: ReactDOMRe.Style.t;
  };
  module type Shape = {let render: string => ReasonReact.reactElement;};
  module Make (S: Shapeable) :Shape => {
    include S;
    let render _ => <div style=S.style />;
  };
};

module Circle = Shape.Make {
  let style = ReactDOMRe.Style.make
    width::"50px"
    height::"50px"
    border::"1px solid black"
    borderRadius::"50% 50%"
    ();
};

module Square = Shape.Make {
  let style = ReactDOMRe.Style.make
    display::"inline-block"
    width::"50px"
    height::"50px"
    border::"1px solid black"
    marginRight::"5px"
    ();
};


/*
use the Shape.Make functor to create two new modules:
  Square
  Circle
and replace the switch statement in Problem7 to render the correct shapes.
 */

type state = {shape};
let component = ReasonReact.statefulComponent "Problem4";
let make _children => {
  ...component,
  initialState: fun () => {shape: Circle},
  render: fun {state, update} => {
    let handleClick shape _event _self => ReasonReact.Update {shape: shape};
    <div>
      <div>
        <button onClick=(update @@ handleClick Circle)>
          (ReasonReact.stringToElement "show circle")
        </button>
        <button onClick=(update @@ handleClick Square)>
          (ReasonReact.stringToElement "show square")
        </button>
      </div>
      (
        switch state.shape {
        | Circle => <div> (Circle.render "Circle") </div>
        | Square => <div> (Square.render "Square") </div>
        }
      )
    </div>
  }
}
