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

include BsChakra_Accordion;
include BsChakra_Button;
include BsChakra_Switch;
include BsChakra_Stack;
include BsChakra_Form;
include BsChakra_Box;
include BsChakra_CircularProgress;
include BsChakra_Heading;
include BsChakra_Spinner;