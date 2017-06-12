module Problem6 = {
  include ReactRe.Component;
  type props = unit;
  let name = "Problem6";
  let render _ =>
    /* replace this with a call to <Square /> */
    <div />;
};

include ReactRe.CreateComponent Problem6;

let createElement = wrapProps ();
