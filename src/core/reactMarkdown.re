external reactMarkdown : ReasonReact.reactClass = "react-markdown" [@@bs.module];

let make source::(source: string) children =>
  ReasonReact.wrapJsForReason reactClass::reactMarkdown props::{"source": source} children;
