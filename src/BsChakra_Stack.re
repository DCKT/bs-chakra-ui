[@bs.module "@chakra-ui/core"] [@react.component]
external make:
  (
    ~isInline: bool=?,
    ~align: string=?,
    ~spacing: int=?,
    ~children: React.element
  ) =>
  React.element =
  "Stack";

let makeProps = (~align: option(BsChakra_Types.align)=?) =>
  makeProps(
    ~align=?align->Belt.Option.map(v => BsChakra_Types.alignToJs(v)),
  );