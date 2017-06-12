let src = {|
# Problem 1 - Making Things Appear

## Requirements
* Make the text "ReasonML" appear in the pane to the right

## Instructions

Welcome to the Reason workshop. This screen displays the workshop. As you complete a problem in the workshop, you can click the following link in the navigation on the left. This pane will give you the instructions on how to complete the problem. As you update the solution file, it will be rendered in the pane to the right.

If at any time you're stuck or unsure how something works, check if it's covered in the related koan section at the top of the description. If it isn't, check with your neighbours or ask one of the instructors for assistance :)

If you open the file `src/problems/problem1/problem1.re` in your editor, you'll come face to face with your first React component using reason bindings. We're going to see a lot of these as we build up this application, so I'll explain a little bit of what you're looking at.

```reason
/* declares a local module inside the file */
module Problem1 = {
  /*
  requires Problem1 to implement:
    * let name : string;
    * type props : 'a;
    * let render = fun componentBag => ReactRe.createElement;
  */
  include ReactRe.Component;

  /* this component takes no props */
  type props = unit;

  /* its name should be displayed as "Problem 1" */
  let name  "Problem 1"

  /* render must return a ReactRe.reactElement, usually in the form of JSX */
  let render (_:componentBagRecord) => {
    <div />
  };
};

/*
require that this file include a function named createElement,
using the inner module Problem1 as it's type
this exposes a function `wrapProps` that takes an instance of the props the inner module declares
*/
include ReactRe.CreateComponent Problem1;

/* create a function `createElement` that takes no props, and calls wrapProps with unit */
let createElement = wrapProps ();
```

We'll touch on modules, records and everything else as we go through this workshop. For now, let's begin by getting some text to render on the screen. Open the file: src/problem1/problem1.re and edit the file so that the render method returns some JSX that will print "ReasonML". Bear in mind that you can't embed a string inside reason's JSX, and must instead make a call to ReactRe.stringToElement like below:

```reason
<div>
  (ReactRe.stringToElement "a string to render")
</div>
```
|};
