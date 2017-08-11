let normalStyle = ReactDOMRe.Style.make ();

let clickedStyle = ReactDOMRe.Style.make ();

let hoveredStyle = ReactDOMRe.Style.make ();

let boxStyle = ReactDOMRe.Style.make width::"50px" height::"50px" border::"1px black solid" ();

type state = {hovered: bool, clicked: bool};

let handleClick _event {ReasonReact.state}  => {
  /* change this function to return the existing state
     with the clicked prop set to true. you can use the object spread operator
     { ...state, foo: bar } */
     let nextState = { ...state, clicked: true};
     ReasonReact.Update nextState;
  };

let handleHover _event {ReasonReact.state} => {
  /* change this function to return the existing state
     with the hovered prop set to true. you can use the object spread operator
     { ...state, foo: bar } */
     let nextState = { ...state, hovered: true};
    ReasonReact.Update nextState;
  };

let switchStyle state =>
  switch (state.clicked, state.hovered) {
     |(true,false) => ReactDOMRe.Style.make backgroundColor::"green" ()
     |(true,true) => ReactDOMRe.Style.make backgroundColor::"green" ()
     |(false,true) => ReactDOMRe.Style.make backgroundColor::"blue" ()
     |( false, false) => ReactDOMRe.Style.make ()
  | _ => normalStyle
  };

let component = ReasonReact.statefulComponent "Problem4";
let make _children => {
  ...component,
  initialState: fun () => {hovered: false, clicked: false},
  render: fun {state, update} => {
    let style = switchStyle state;

    <div
      style=(ReactDOMRe.Style.combine boxStyle style)
      onClick=(update handleClick)
      onMouseEnter=(update handleHover)
      onMouseLeave=(update handleHover)
    />
  }
};
