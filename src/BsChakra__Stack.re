open BsChakra__Types;

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

let makeProps = (~align: option(align)=?) =>
  makeProps(~align=?align->Belt.Option.map(v => alignToJs(v)));