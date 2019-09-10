open BsChakra_Types;

[@bs.module "@chakra-ui/core"] [@react.component]
external make:
  (
    ~children: React.element,
    ~variantColor: string=?,
    ~size: string=?,
    ~variant: [@bs.string] [ | `solid | `ghost | `outline | `link]=?,
    ~leftIcon: string=?,
    ~rightIcon: string=?,
    ~isLoading: bool=?,
    ~isDisabled: bool=?,
    ~loadingText: string=?
  ) =>
  React.element =
  "Button";

let makeProps =
    (~size: option(size)=?, ~variantColor: option(variantColor)=?) =>
  makeProps(
    ~size=?size->mapToSize,
    ~variantColor=?variantColor->mapToVariantColor,
  );