type theme;

[@bs.module "@chakra-ui/core"] external theme: theme = "theme";

module ThemeProvider = {
  [@bs.module "@chakra-ui/core"] [@react.component]
  external make: (~theme: theme, ~children: React.element) => React.element =
    "ThemeProvider";
};

module CSSReset = {
  [@bs.module "@chakra-ui/core"] [@react.component]
  external make: unit => React.element = "CSSReset";
};

module Accordion = BsChakra_Accordion;
module Button = BsChakra_Button;
module Switch = BsChakra_Switch;
module Stack = BsChakra_Stack;
module FormLabel = BsChakra_FormLabel;
module Box = BsChakra_Box;
module CircularProgress = BsChakra_CircularProgress;
module CircularProgressLabel = BsChakra_CircularProgressLabel;
module Heading = BsChakra_Heading;
module Spinner = BsChakra_Spinner;
module Flex = BsChakra_Flex;
module Input = BsChakra_Input;
module InputGroup = BsChakra_InputGroup;
module InputLeftElement = BsChakra_InputLeftElement;
module InputRightElement = BsChakra_InputRightElement;