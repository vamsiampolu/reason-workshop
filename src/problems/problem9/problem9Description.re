let src = {|
# Problem 9 - Pushing State Skyward

## Requirements
* Make the text "ReasonML" appear in the pane to the right
* Make clicking the text flash different colors

## Instructions

A common pattern in react is not to use setState in every component, but rather to push the state in the application up as far as it makes sense to. In order to allow otherwise pure components to affect this state, the state encapsulating component will expose some mutating callbacks to their children allowing state to be updated, co-ordinating that change to all of its children.contents

Using this technique, make the Problem9Text module change color when clicked, based on the state stored in the Problem9 module.
|};
