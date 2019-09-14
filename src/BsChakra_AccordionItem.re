[@bs.module "@chakra-ui/core"] [@react.component]
external make:
  (
    ~children: React.element,
    ~isOpen: bool=?,
    ~isDisabled: bool=?,
    ~id: string=?,
    ~onChange: array(int) => unit=?
  ) =>
  React.element =
  "AccordionItem";