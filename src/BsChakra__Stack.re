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
      ~margin: option(responsiveValue(spaceProps))=?,
      ~marginTop: option(responsiveValue(spaceProps))=?,
      ~marginBottom: option(responsiveValue(spaceProps))=?,
      ~marginLeft: option(responsiveValue(spaceProps))=?,
      ~marginRight: option(responsiveValue(spaceProps))=?,
    ) =>
  makeProps(
    ~align=?align->extractProps(flexAlignmentToJs),
    ~justify=?justify->extractProps(flexAlignmentToJs),
    ~margin=?margin->extractSpaceProps,
    ~marginTop=?marginTop->extractSpaceProps,
    ~marginBottom=?marginBottom->extractSpaceProps,
    ~marginLeft=?marginLeft->extractSpaceProps,
    ~marginRight=?marginRight->extractSpaceProps,
  );