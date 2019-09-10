[@bs.module "@chakra-ui/core"] [@react.component]
external make:
  (
    ~id: string,
    ~value: bool=?,
    ~isChecked: bool=?,
    ~isDisabled: bool=?,
    ~isInvalid: bool=?,
    ~defaultIsChecked: bool=?,
    ~onChange: unit => unit=?,
    ~size: string=?,
    ~color: string=?
  ) =>
  React.element =
  "Switch";

let makeProps =
    (
      ~size: option(BsChakra_Types.size)=?,
      ~color: option(BsChakra_Types.color)=?,
    ) =>
  makeProps(
    ~size=?size->Belt.Option.map(v => BsChakra_Types.sizeToJs(v)),
    ~color=?color->Belt.Option.map(v => BsChakra_Types.colorToJs(v)),
  );