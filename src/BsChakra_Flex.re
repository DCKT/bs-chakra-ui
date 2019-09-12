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
    ~direction: [@bs.string] [ | `row | `column]=?,
    ~w: string=?,
    ~h: string=?,
    ~wrap: [@bs.string] [
             | `wrap
             | `nowrap
             | `unset
             | [@bs.as "wrap-reverse"] `wrapReverse
           ]
             =?,
    ~align: [@bs.string] [
              | [@bs.as "flex-start"] `flexStart
              | `center
              | [@bs.as "flex-end"] `flexEnd
            ]
              =?,
    ~justify: [@bs.string] [
                | [@bs.as "flex-start"] `flexStart
                | `center
                | [@bs.as "flex-end"] `flexEnd
                | [@bs.as "space-around"] `spaceAround
                | [@bs.as "space-between"] `spaceBetween
              ]
                =?
  ) =>
  React.element =
  "Flex";

let makeProps =
    (
      ~bg: option(color)=?,
      ~color: option(color)=?,
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