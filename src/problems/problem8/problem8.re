module Problem8Inner = {
  module Component = {
    include ReactRe.Component;
    type props = unit;
    let name = "Problem8";
    let render _ => <div />;
  };
  include ReactRe.CreateComponent Component;
  let createElement = wrapProps ();
};

module Problem8 = {
  include ReactRe.Component;
  type props = unit;
  let name = "Problem8";
  let render _ => <div> <Problem8Inner /> </div>;
};

include ReactRe.CreateComponent Problem8;

let createElement = wrapProps ();
