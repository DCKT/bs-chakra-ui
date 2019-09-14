open BsChakra_Types;

[@bs.module "@chakra-ui/core"] [@react.component]
external make:
  (
    ~href: string,
    ~isExternal: bool=?,
    ~isDisabled: bool=?,
    ~onClick: 'a => unit=?,
    ~children: React.element,
    ~textAlign: 'textalign=?,
    ~fontWeight: [@bs.string] [ | `normal | `bold | `medium]=?,
    ~font: 'f=?,
    ~letterSpacing: 'letter=?,
    ~lineHeight: 'b=?,
    ~fontSize: 'a=?
  ) =>
  React.element =
  "Link";

let makeProps =
    (
      ~fontSize: option(responsiveValue(fontSize))=?,
      ~lineHeight: option(responsiveValue(lineHeight))=?,
      ~font: option(responsiveValue(font))=?,
      ~letterSpacing: option(responsiveValue(letterSpacing))=?,
      ~textAlign: option(responsiveValue(textAlign))=?,
    ) =>
  makeProps(
    ~fontSize=?fontSize->extractProps(fontSizeToJs),
    ~lineHeight=?lineHeight->extractProps(lineHeightToJs),
    ~font=?font->extractProps(fontToJs),
    ~letterSpacing=?letterSpacing->extractProps(letterSpacingToJs),
    ~textAlign=?textAlign->extractProps(textAlignToJs),
  );