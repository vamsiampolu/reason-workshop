external querySelector : string => option Dom.element = "window.document.querySelector" [@@bs.val];

external highlight : unit => unit = "window.Prism.highlightAll" [@@bs.val];

let paneStyle = ReactDOMRe.Style.make maxHeight::"100vh" overflow::"auto" padding::"25px" ();

module ProblemView = {
  include ReactRe.Component;
  type props = {description: string, problem: unit => ReactRe.reactElement};
  let name = "ProblemView";
  let componentDidMount _ => {
    let _ = highlight ();
    None
  };
  let render {props} =>
    <div className="pure-g">
      <div style=paneStyle className="pure-u-1-2">
        <ReactMarkdown source=props.description />
      </div>
      <div style=paneStyle className="pure-u-1-2"> (props.problem ()) </div>
    </div>;
};

include ReactRe.CreateComponent ProblemView;

let createElement ::description ::problem => wrapProps {description, problem};
