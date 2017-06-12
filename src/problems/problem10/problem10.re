let style =
  ReactDOMRe.Style.make
    /* place the appropriate styles here */
    ();

module Problem10 = {
  include ReactRe.Component;
  type props = unit;
  let name = "Problem10";
  let render _ => <div style />;
};

include ReactRe.CreateComponent Problem10;

let createElement = wrapProps ();
