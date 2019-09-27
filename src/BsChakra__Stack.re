open BsChakra__Types;

[@bs.module "@chakra-ui/core"] [@react.component]
external make:
  (
    ~isInline: bool=?,
    ~align: 'align=?,
    ~justify: 'justify=?,
    ~spacing: int=?,
    ~children: React.element,
    ~margin: 'margin=?,
    ~marginTop: 'marginTop=?,
    ~marginBottom: 'marginBottom=?,
    ~marginLeft: 'marginLeft=?,
    ~marginRight: 'marginRight=?,
    ~position: [@bs.string] [ | `relative | `static | `absolute]=?
  ) =>
  React.element =
  "Stack";

let makeProps =
    (
      ~align: option(responsiveValue(flexAlignment))=?,
      ~justify: option(responsiveValue(flexAlignment))=?,
      ~margin: option(responsiveValue(marginProps))=?,
      ~marginTop: option(responsiveValue(marginProps))=?,
      ~marginBottom: option(responsiveValue(marginProps))=?,
      ~marginLeft: option(responsiveValue(marginProps))=?,
      ~marginRight: option(responsiveValue(marginProps))=?,
    ) =>
  makeProps(
    ~align=?align->extractProps(flexAlignmentToJs),
    ~justify=?justify->extractProps(flexAlignmentToJs),
    ~margin=?margin->extractMarginProps,
    ~marginTop=?marginTop->extractMarginProps,
    ~marginBottom=?marginBottom->extractMarginProps,
    ~marginLeft=?marginLeft->extractMarginProps,
    ~marginRight=?marginRight->extractMarginProps,
  );