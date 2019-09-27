open BsChakra__Types;

[@bs.module "@chakra-ui/core"] [@react.component]
external make:
  (
    ~placeholder: string=?,
    ~id: string=?,
    ~onChange: 'a => unit=?,
    ~onBlur: 'a => unit=?,
    ~onFocus: 'a => unit=?,
    ~value: string=?,
    ~rounded: string=?,
    ~isRequired: bool=?,
    ~isFullWidth: bool=?,
    ~isReadOnly: bool=?,
    ~isInvalid: bool=?,
    ~isDisabled: bool=?,
    ~variant: [@bs.string] [ | `outline | `unstyled | `flushed | `filled]=?,
    ~resize: [@bs.string] [ | `vertical | `horizontal | `none]=?,
    ~focusBorderColor: 'focusBorderColor=?,
    ~margin: 'margin=?,
    ~marginTop: 'marginTop=?,
    ~marginBottom: 'marginBottom=?,
    ~marginLeft: 'marginLeft=?,
    ~marginRight: 'marginRight=?,
    ~padding: 'padding=?,
    ~paddingTop: 'pTop=?,
    ~paddingBottom: 'pBot=?,
    ~paddingLeft: 'pLef=?,
    ~paddingRight: 'pRig=?,
    ~px: 'px=?,
    ~py: 'py=?,
    ~size: [@bs.string] [ | `sm | `md | `lg]=?,
    ~children: React.element
  ) =>
  React.element =
  "Select";

let makeProps =
    (
      ~focusBorderColor: option(color)=?,
      ~margin: option(responsiveValue(marginProps))=?,
      ~marginTop: option(responsiveValue(marginProps))=?,
      ~marginBottom: option(responsiveValue(marginProps))=?,
      ~marginLeft: option(responsiveValue(marginProps))=?,
      ~marginRight: option(responsiveValue(marginProps))=?,
      ~padding: option(responsiveValue(int))=?,
      ~paddingTop: option(responsiveValue(int))=?,
      ~paddingBottom: option(responsiveValue(int))=?,
      ~paddingLeft: option(responsiveValue(int))=?,
      ~paddingRight: option(responsiveValue(int))=?,
      ~px: option(responsiveValue(int))=?,
      ~py: option(responsiveValue(int))=?,
    ) =>
  makeProps(
    ~focusBorderColor=?focusBorderColor->mapToColor,
    ~margin=?margin->extractMarginProps,
    ~marginTop=?marginTop->extractMarginProps,
    ~marginBottom=?marginBottom->extractMarginProps,
    ~marginLeft=?marginLeft->extractMarginProps,
    ~marginRight=?marginRight->extractMarginProps,
    ~padding=?padding->extractProps(v => v),
    ~paddingTop=?paddingTop->extractProps(v => v),
    ~paddingBottom=?paddingBottom->extractProps(v => v),
    ~paddingLeft=?paddingLeft->extractProps(v => v),
    ~paddingRight=?paddingRight->extractProps(v => v),
    ~px=?px->extractProps(v => v),
    ~py=?py->extractProps(v => v),
  );