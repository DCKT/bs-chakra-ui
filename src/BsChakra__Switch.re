open BsChakra__Types;

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

let makeProps = (~size: option(size)=?, ~color: option(color)=?) =>
  makeProps(
    ~size=?size->Belt.Option.map(v => sizeToJs(v)),
    ~color=?color->Belt.Option.map(v => colorToJs(v)),
  );