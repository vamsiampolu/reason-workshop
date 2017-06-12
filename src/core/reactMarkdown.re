external reactMarkdown : ReactRe.reactClass = "react-markdown" [@@bs.module];

let createElement source::(source: string) =>
  ReactRe.wrapPropsShamelessly reactMarkdown {"source": source};
