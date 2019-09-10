[@bs.module "@chakra-ui/core"] [@react.component]
external make:
  (
    ~children: React.element,
    ~isTruncated: bool=?,
    ~as_: [@bs.string] [ | `h1 | `h2 | `h3 | `h4 | `h5 | `h6]=?,
    ~size: [@bs.string] [ | [@bs.as "2xl"] `xxl | `xl | `lg | `md | `sm | `xs]
             =?
  ) =>
  React.element =
  "Heading";