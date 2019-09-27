open BsChakra__Types;

[@bs.module "@chakra-ui/core"] [@react.component]
external make:
  (
    ~children: React.element,
    ~boxShadow: 'boxShadow=?,
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
    ~direction: 'direction=?,
    ~width: 'wid=?,
    ~height: 'hei=?,
    ~maxWidth: 'maxW=?,
    ~maxHeight: 'maxH=?,
    ~flex: 'maxH=?,
    ~wrap: 'wrap=?,
    ~align: 'align=?,
    ~justify: 'justify=?
  ) =>
  React.element =
  "Flex";

let makeProps =
    (
      ~bg: option(color)=?,
      ~color: option(color)=?,
      ~margin: option(responsiveValue(marginProps))=?,
      ~marginTop: option(responsiveValue(marginProps))=?,
      ~marginBottom: option(responsiveValue(marginProps))=?,
      ~marginLeft: option(responsiveValue(marginProps))=?,
      ~marginRight: option(responsiveValue(marginProps))=?,
      ~padding: option(responsiveValue(marginProps))=?,
      ~paddingTop: option(responsiveValue(marginProps))=?,
      ~paddingBottom: option(responsiveValue(marginProps))=?,
      ~paddingLeft: option(responsiveValue(marginProps))=?,
      ~paddingRight: option(responsiveValue(marginProps))=?,
      ~px: option(responsiveValue(marginProps))=?,
      ~py: option(responsiveValue(marginProps))=?,
      ~maxWidth: option(responsiveValue(string))=?,
      ~maxHeight: option(responsiveValue(string))=?,
      ~width: option(responsiveValue(string))=?,
      ~height: option(responsiveValue(string))=?,
      ~flex: option(responsiveValue(string))=?,
      ~align: option(responsiveValue(flexAlignment))=?,
      ~justify: option(responsiveValue(flexAlignment))=?,
      ~direction: option(responsiveValue(flexDirection))=?,
      ~wrap: option(responsiveValue(flexWrap))=?,
      ~boxShadow: option(responsiveValue(shadowProps))=?,
    ) =>
  makeProps(
    ~bg=?bg->mapToColor,
    ~color=?color->mapToColor,
    ~margin=?margin->extractMarginProps,
    ~marginTop=?marginTop->extractMarginProps,
    ~marginBottom=?marginBottom->extractMarginProps,
    ~marginLeft=?marginLeft->extractMarginProps,
    ~marginRight=?marginRight->extractMarginProps,
    ~padding=?padding->extractMarginProps,
    ~paddingTop=?paddingTop->extractMarginProps,
    ~paddingBottom=?paddingBottom->extractMarginProps,
    ~paddingLeft=?paddingLeft->extractMarginProps,
    ~paddingRight=?paddingRight->extractMarginProps,
    ~px=?px->extractMarginProps,
    ~py=?py->extractMarginProps,
    ~maxHeight=?maxHeight->extractProps(v => v),
    ~maxWidth=?maxWidth->extractProps(v => v),
    ~height=?height->extractProps(v => v),
    ~width=?width->extractProps(v => v),
    ~flex=?flex->extractProps(v => v),
    ~align=?align->extractProps(flexAlignmentToJs),
    ~justify=?justify->extractProps(flexAlignmentToJs),
    ~direction=?direction->extractProps(flexDirectionToJs),
    ~wrap=?wrap->extractProps(flexWrapToJs),
    ~boxShadow=?
      boxShadow->Belt.Option.map(p =>
        switch (p) {
        | All(v) =>
          returnHack(
            switch (v) {
            | Theme(value) => shadowToJs(value)
            | Custom(value) => value
            },
          )
        | Responsive(v) =>
          returnHack(
            v->Belt.Array.map(value =>
              switch (value) {
              | Theme(value) => shadowToJs(value)
              | Custom(value) => value
              }
            ),
          )
        }
      ),
  );