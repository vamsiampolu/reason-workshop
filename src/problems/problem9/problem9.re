module Problem9Text = {
  module Component = {
    include ReactRe.Component;
    type props = {
      onClick: unit => unit,
      color: string
    };
    let name = "Problem9Text";
    let render _ => {
      let style =
        ReactDOMRe.Style.make
          /* place the appropriate styles here */
          ();

      <div style />;
    };
  };

  include ReactRe.CreateComponent Component;

  let createElement ::color ::onClick => wrapProps {color, onClick};
};

module Problem9 = {
  include ReactRe.Component.Stateful;
  type props = unit;
  type state = {
    color: string
  };
  let name = "Problem9";
  let getInitialState = fun _ => {
    {color: "black"};
  };
  let render {state, updater} => {
    <div>
      <Problem9Text
        color=state.color
        onClick=(updater (fun _ _ => None))
      />
    </div>
  }
};

include ReactRe.CreateComponent Problem9;

let createElement = wrapProps ();
