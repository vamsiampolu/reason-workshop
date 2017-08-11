let boxStyle = ReactDOMRe.Style.make width::"50px" height::"50px" border::"1px black solid" ();

let component = ReasonReact.statelessComponent "Problem3";
let make _children => {
  ...component,
  render: fun {handle} => {
    let handleClick event _ => {

      /* change this function to log "clicked" to the JS console */
      let eventName = ReactEventRe.Mouse._type event;
      Js.log eventName;
    };

    let handleHover event _ => {
        /*
          change this function to log "hover began"
          when the event is a mouseover event  and
          "hover ended" when the event is a mouseleave event
        */
      let eventName = ReactEventRe.Mouse._type event;
      Js.log eventName;
    };

    <div
      style=boxStyle
      onClick=(handle handleClick)
      onMouseEnter=(handle handleHover)
      onMouseLeave=(handle handleHover)
    />
  }
};
