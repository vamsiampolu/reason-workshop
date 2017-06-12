let src = {|
# Problem 3 - Handling Events

## Requirements
* render a 50x50 px square with a black border
* when the square is clicked, the program should log "clicked" to the JavaScript console
* when the square is hovered, the program should log "hovered" to the JavaScript console

## Instructions

In this problem we begin to _react_ to external stimuli. Namely, we handle three events, onClick, onMouseEnter and onMouseLeave. These are standard DOM events that get fired when the relevant action occurs in the browser. The browser will attach our functions to the elements that are rendered, and call them when an action occurs.

For reference, the logging function to use is `Js.log : 'a => unit`.

We use the builtin method `handler` to construct the event handlers. `handler` has a signature that boils down to

```reason
(componentBag props state instanceVars => event => unit) => event => unit
```

This means that the `handler` helper provides the current props, state and any instanceVars of the component to the defined event handler, as weel as the event that took place and expects the defined event handler to return a unit value.

React event handlers take two arguments. The first is a record with the shape
```reason
{
  props, /* the arguments passed into the component function at the latest render */
  state, /* the current computed state for the component */
  instanceVars /* any instance variables that don't have an affect on rendering */
}
```

the second argument is the event itself, which is a synthetic event drawn from `ReactEventRe`. Events in React are synthetic wrappers around the native browser event. You can extract the type you need by calling `ReactEventRe.<EventType>._type` and passing in the event. `type` is a reserved word in reason, so we prefix it with an underscore and the compiler magically transforms this into `type` in the actual call.

```reason
ReactEventRe.Mouse._type event
```

This is an idiomatic pattern in reason, where a module will define a type, and then define the operations that extract and change the data bound by that type. When you need to affect a type, it's a safe bet that the function you're looking for is stored in the module that the type is defined in.

By combining the handler function and the new Js.log function, write a clickHandler that logs every time it's clicked. Also, write a hoverHandler than can differentiate between when a hover begins and ends, and logs different messages in each case.
|};
