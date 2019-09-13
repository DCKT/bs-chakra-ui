open BsChakra_Types;

[@bs.module "@chakra-ui/core"] [@react.component]
external make:
  (
    ~children: React.element,
    ~bg: 'bg=?,
    ~color: 'color=?,
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
    ~opacity: float=?,
    ~boxShadow: string=?,
    ~width: 'wid=?,
    ~height: 'hei=?,
    ~maxWidth: 'maxW=?,
    ~maxHeight: 'maxH=?,
    ~_as: string=?
  ) =>
  React.element =
  "Box";

let makeProps =
    (
      ~bg: option(color)=?,
      ~color: option(color)=?,
      ~margin: option(responsiveValue(int))=?,
      ~marginTop: option(responsiveValue(int))=?,
      ~marginBottom: option(responsiveValue(int))=?,
      ~marginLeft: option(responsiveValue(int))=?,
      ~marginRight: option(responsiveValue(int))=?,
      ~padding: option(responsiveValue(int))=?,
      ~paddingTop: option(responsiveValue(int))=?,
      ~paddingBottom: option(responsiveValue(int))=?,
      ~paddingLeft: option(responsiveValue(int))=?,
      ~paddingRight: option(responsiveValue(int))=?,
      ~px: option(responsiveValue(int))=?,
      ~py: option(responsiveValue(int))=?,
      ~maxWidth: option(responsiveValue(string))=?,
      ~maxHeight: option(responsiveValue(string))=?,
      ~width: option(responsiveValue(string))=?,
      ~height: option(responsiveValue(string))=?,
      ~boxShadow: option(shadowProps)=?,
    ) =>
  makeProps(
    ~bg=?bg->mapToColor,
    ~color=?color->mapToColor,
    ~boxShadow=?
      boxShadow
      ->Belt.Option.map(key =>
          switch (key) {
          | Theme(value) => shadowToJs(value)
          | Custom(value) => value
          }
        ),
    ~margin=?margin->extractProps(v => v),
    ~marginTop=?marginTop->extractProps(v => v),
    ~marginBottom=?marginBottom->extractProps(v => v),
    ~marginLeft=?marginLeft->extractProps(v => v),
    ~marginRight=?marginRight->extractProps(v => v),
    ~padding=?padding->extractProps(v => v),
    ~paddingTop=?paddingTop->extractProps(v => v),
    ~paddingBottom=?paddingBottom->extractProps(v => v),
    ~paddingLeft=?paddingLeft->extractProps(v => v),
    ~paddingRight=?paddingRight->extractProps(v => v),
    ~px=?px->extractProps(v => v),
    ~py=?py->extractProps(v => v),
    ~maxHeight=?maxHeight->extractProps(v => v),
    ~maxWidth=?maxWidth->extractProps(v => v),
    ~height=?height->extractProps(v => v),
    ~width=?width->extractProps(v => v),
  );