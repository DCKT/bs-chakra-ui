open BsChakra_Types;

[@bs.module "@chakra-ui/core"] [@react.component]
external make:
  (
    ~placeholder: string=?,
    ~id: string=?,
    ~roundedLeft: string=?,
    ~rounded: string=?,
    ~isRequired: bool=?,
    ~isFullWidth: bool=?,
    ~isReadOnly: bool=?,
    ~isInvalid: bool=?,
    ~isDisabled: bool=?,
    ~variant: [@bs.string] [ | `outline | `unstyled | `flushed | `filled]=?,
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
    ~type_: [@bs.string] [
              | `text
              | `phone
              | `password
              | `number
              | `date
              | `checkbox
              | `radio
              | `email
            ]
  ) =>
  React.element =
  "Input";

let makeProps =
    (
      ~focusBorderColor: option(color)=?,
      ~margin: option((marginPaddingProps('a), 'a))=?,
      ~marginTop: option((marginPaddingProps('a), 'a))=?,
      ~marginBottom: option((marginPaddingProps('a), 'a))=?,
      ~marginLeft: option((marginPaddingProps('a), 'a))=?,
      ~marginRight: option((marginPaddingProps('a), 'a))=?,
      ~padding: option((marginPaddingProps('a), 'a))=?,
      ~paddingTop: option((marginPaddingProps('a), 'a))=?,
      ~paddingBottom: option((marginPaddingProps('a), 'a))=?,
      ~paddingLeft: option((marginPaddingProps('a), 'a))=?,
      ~paddingRight: option((marginPaddingProps('a), 'a))=?,
      ~px: option((marginPaddingProps('a), 'a))=?,
      ~py: option((marginPaddingProps('a), 'a))=?,
    ) =>
  makeProps(
    ~focusBorderColor=?focusBorderColor->mapToColor,
    ~margin=?margin->getValue,
    ~marginTop=?marginTop->getValue,
    ~marginBottom=?marginBottom->getValue,
    ~marginLeft=?marginLeft->getValue,
    ~marginRight=?marginRight->getValue,
    ~padding=?padding->getValue,
    ~paddingTop=?paddingTop->getValue,
    ~paddingBottom=?paddingBottom->getValue,
    ~paddingLeft=?paddingLeft->getValue,
    ~paddingRight=?paddingRight->getValue,
    ~px=?px->getValue,
    ~py=?py->getValue,
  );