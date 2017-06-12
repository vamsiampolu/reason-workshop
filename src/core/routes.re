open ReactRouter;

let containerStyle =
  ReactDOMRe.Style.make
    display::"flex"
    flexDirection::"row"
    height::"100vh"
    minHeight::"100vh"
    width::"100vw"
    maxWidth::"100vw"
    ();

let navStyle =
  ReactDOMRe.Style.make
    display::"flex"
    flexDirection::"column"
    height::"100%"
    minHeight::"100vh"
    minWidth::"20%"
    padding::"5px"
    overflow::"scroll"
    ();

let appStyle = ReactDOMRe.Style.make height::"100%" width::"100%" ();

let createProblemView description problem _ => <ProblemView description problem />;

let links = [
  ("/", ReactRe.stringToElement "Home"),
  ("/problems/1", ReactRe.stringToElement "Problem 1"),
  ("/problems/2", ReactRe.stringToElement "Problem 2"),
  ("/problems/3", ReactRe.stringToElement "Problem 3"),
  ("/problems/4", ReactRe.stringToElement "Problem 4"),
  ("/problems/5", ReactRe.stringToElement "Problem 5"),
  ("/problems/6", ReactRe.stringToElement "Problem 6"),
  ("/problems/7", ReactRe.stringToElement "Problem 7"),
  ("/problems/8", ReactRe.stringToElement "Problem 8"),
  ("/problems/9", ReactRe.stringToElement "Problem 9"),
  ("/problems/10", ReactRe.stringToElement "Problem 10"),
];

type problem = {link: string, description: string, problem: unit => ReactRe.reactElement};

let problems = [
  {link: "/", description: Problem1Description.src, problem: fun _ => <Problem1 />},
  {link: "/problems/1", description: Problem1Description.src, problem: fun _ => <Problem1 />},
  {link: "/problems/2", description: Problem2Description.src, problem: fun _ => <Problem2 />},
  {link: "/problems/3", description: Problem3Description.src, problem: fun _ => <Problem3 />},
  {link: "/problems/4", description: Problem4Description.src, problem: fun _ => <Problem4 />},
  {link: "/problems/5", description: Problem5Description.src, problem: fun _ => <Problem5 />},
  {link: "/problems/6", description: Problem6Description.src, problem: fun _ => <Problem6 />},
  {link: "/problems/7", description: Problem7Description.src, problem: fun _ => <Problem7 />},
  {link: "/problems/8", description: Problem8Description.src, problem: fun _ => <Problem8 />},
  {link: "/problems/9", description: Problem9Description.src, problem: fun _ => <Problem9 />},
  {link: "/problems/10", description: Problem10Description.src, problem: fun _ => <Problem10 />},
];

module Routes = {
  include ReactRe.Component;
  type props = unit;
  let name = "Routes";
  let render _ =>
    <div className="pure-g" style=containerStyle>
      <div className="pure-u-1-8" style=(ReactDOMRe.Style.make background::"#f5f2f0" ())>
        <ul
          style=(ReactDOMRe.Style.make lineHeight::"1.4" listStyle::"none" paddingLeft::"15px" ())>
          (
            ReactRe.listToElement (
              List.map
                (fun a => <li key=(fst a)> <NavLink _to=(fst a)> (snd a) </NavLink> </li>) links
            )
          )
        </ul>
      </div>
      <div className="pure-u-7-8">
        (
          ReactRe.listToElement (
            List.map
              (
                fun a =>
                  <Route
                    key=a.link
                    path=a.link
                    component=(createProblemView a.description a.problem)
                    exact=true
                  />
              )
              problems
          )
        )
      </div>
    </div>;
};

include ReactRe.CreateComponent Routes;

let createElement = wrapProps ();
