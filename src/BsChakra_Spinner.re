open BsChakra_Types;

module Spinner = {
  [@bs.module "@chakra-ui/core"] [@react.component]
  external make:
    (
      ~children: React.element,
      ~color: 'a=?,
      ~label: string=?,
      ~size: [@bs.string] [ | `xs | `sm | `md | `lg | `xl]=?
    ) =>
    React.element =
    "Spinner";

  let makeProps = (~color: option(color)=?) => {
    makeProps(~color=?color->mapToColor);
  };
};