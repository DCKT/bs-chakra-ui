open BsChakra__Types;

[@bs.module "@chakra-ui/core"] [@react.component]
external make:
  (
    ~isInline: bool=?,
    ~align: 'align=?,
    ~justify: 'justify=?,
    ~spacing: int=?,
    ~children: React.element
  ) =>
  React.element =
  "Stack";

let makeProps =
    (
      ~align: option(responsiveValue(flexAlignment))=?,
      ~justify: option(responsiveValue(flexAlignment))=?,
    ) =>
  makeProps(
    ~align=?align->extractProps(flexAlignmentToJs),
    ~justify=?justify->extractProps(flexAlignmentToJs),
  );