# bs-chakra-ui 🚧

Bucklescript bindings for [chakra-ui](https://chakra-ui.com).

**Important note**, chakra-ui use the styled system but in order to avoid props bindings overhead, I decided to mainly use `<Box />` when I need to create space, etc.

## Install

```
yarn add @dck/bs-chakra-ui
```

Add it to `bs-dependencies` in your `bsconfig.json` :

```json
{
  "bs-dependencies": ["@dck/bs-chakra-ui"]
}
```

## Example

```reason
open BsChakra;

module App = {
  [@react.component]
  let make = () => {
    let (isChecked, setChecked) = React.useState(() => false);

    <ThemeProvider theme>
      <CSSReset />
      <Text fontSize={Responsive([|`center, `right, `left|])}>
        "Hello responsive"->React.string
      </Text>
      <Stack isInline=true align=`center spacing=2>
        <FormLabel htmlFor="toggle">
          <Text fontSize={Value(`center)}>
            "Toggle"->React.string
          </Text>
        </FormLabel>
        <Switch
          id="toggle"
          size=`lg
          isChecked
          onChange={_ => setChecked(v => !v)}
        />
      </Stack>
    </ThemeProvider>
  };
};
```

### Todo

* [ ] Accordion
* [ ] Alert
* [ ] AspectRatioBox
* [ ] Avatar
* [ ] Badge
* [ ] Box 🚧
* [ ] Breadcrumb
* [ ] Button 🚧
* [ ] Checkbox
* [x] CircularProgress
* [ ] CloseButton
* [ ] Code
* [ ] Collapse
* [ ] ControlBox
* [ ] Drawer
* [ ] Editable
* [*] Flex
* [x] FormControl
* [x] FormHelperText
* [x] FormErrorMessage
* [ ] Heading
* [ ] Icon
* [ ] IconButton
* [x] Input
* [ ] Link
* [ ] List
* [ ] Menu
* [ ] NumberInput
* [ ] Popover
* [ ] Progress
* [ ] PseudoBox
* [ ] Radio
* [ ] Slider
* [x] Spinner
* [ ] Stat
* [x] Stack
* [x] Switch
* [ ] Tabs
* [ ] Tag
* [ ] Textarea
* [x] Text
* [ ] Toast
* [ ] Tooltip
* [ ] useClipboard
* [ ] useDisclosure
* [ ] useTheme
