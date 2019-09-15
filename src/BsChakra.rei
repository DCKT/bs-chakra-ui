type theme;
[@bs.module "@chakra-ui/core"] external theme: theme = "theme";

module ThemeProvider: {
  [@bs.module "@chakra-ui/core"] [@react.component]
  external make: (~theme: theme, ~children: React.element) => React.element =
    "ThemeProvider";
};

module CSSReset: {
  [@bs.module "@chakra-ui/core"] [@react.component]
  external make: unit => React.element = "CSSReset";
};

module Accordion = BsChakra__Accordion;
module AccordionHeader = BsChakra__AccordionHeader;
module AccordionItem = BsChakra__AccordionItem;
module AccordionPanel = BsChakra__AccordionPanel;
module AccordionIcon = BsChakra__AccordionIcon;
module Button = BsChakra__Button;
module Switch = BsChakra__Switch;
module Stack = BsChakra__Stack;
module FormLabel = BsChakra__FormLabel;
module Box = BsChakra__Box;
module CircularProgress = BsChakra__CircularProgress;
module CircularProgressLabel = BsChakra__CircularProgressLabel;
module Heading = BsChakra__Heading;
module Spinner = BsChakra__Spinner;
module Flex = BsChakra__Flex;
module Input = BsChakra__Input;
module InputGroup = BsChakra__InputGroup;
module InputLeftElement = BsChakra__InputLeftElement;
module InputRightElement = BsChakra__InputRightElement;
module Text = BsChakra__Text;
module FormControl = BsChakra__FormControl;
module FormHelperText = BsChakra__FormHelperText;
module FormErrorMessage = BsChakra__FormErrorMessage;
module Alert = BsChakra__Alert;
module AlertTitle = BsChakra__AlertTitle;
module AlertDescription = BsChakra__AlertDescription;
module AlertIcon = BsChakra__AlertIcon;
module Link = BsChakra__Link;
module Avatar = BsChakra__Avatar;
module AvatarBadge = BsChakra__AvatarBadge;
module AvatarGroup = BsChakra__AvatarGroup;
module NumberInput = BsChakra__NumberInput;
module Image = BsChakra__Image;
module Types = BsChakra__Types;