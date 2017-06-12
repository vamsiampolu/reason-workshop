let style =
  ReactDOMRe.Style.make
    /* place the appropriate styles here */
    ();

module Problem2 = {
  include ReactRe.Component;
  type props = unit;
  let name = "Problem2";
  let render _ => <div style />;
};

include ReactRe.CreateComponent Problem2;

let createElement = wrapProps ();
