module Accordion = {
  [@bs.module "@chakra-ui/core"] [@react.component]
  external make:
    (
      ~children: React.element,
      ~defaultIndex: array(int)=?,
      ~allowMultiple: bool=?,
      ~allowToggle: bool=?,
      ~onChange: array(int) => unit=?
    ) =>
    React.element =
    "Accordion";
};

module AccordionItem = {
  [@bs.module "@chakra-ui/core"] [@react.component]
  external make:
    (~children: React.element, ~isOpen: bool=?, ~isDisabled: bool=?) =>
    React.element =
    "AccordionItem";
};
module AccordionHeader = {
  [@bs.module "@chakra-ui/core"] [@react.component]
  external make: (~children: React.element) => React.element =
    "AccordionHeader";
};
module AccordionPanel = {
  [@bs.module "@chakra-ui/core"] [@react.component]
  external make: (~children: React.element) => React.element =
    "AccordionPanel";
};