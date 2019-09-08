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
      <Stack isInline=true align=`center spacing=2>
        <FormLabel htmlFor="toggle">
          "Toggle"->React.string
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

- [ ] Accordion
- [ ] Alert
- [ ] AspectRatioBox
- [ ] Avatar
- [ ] Badge
- [ ] Box 🚧
- [ ] Breadcrumb
- [ ] Button 🚧
- [ ] Checkbox
- [x] CircualProgress
- [ ] CloseButton
- [ ] Code
- [ ] Collapse
- [ ] ControlBox
- [ ] Drawer
- [ ] Editable
- [ ] Flex
- [ ] FormControl
- [ ] Heading
- [ ] Icon
- [ ] IconButton
- [ ] Input
- [ ] Link
- [ ] List
- [ ] Menu
- [ ] NumberInput
- [ ] Popover
- [ ] Progress
- [ ] PseudoBox
- [ ] Radio
- [ ] Slider
- [x] Spinner
- [ ] Stat
- [x] Stack
- [x] Switch
- [ ] Tabs
- [ ] Tag
- [ ] Textarea
- [ ] Toast
- [ ] Tooltip
- [ ] useClipboard
- [ ] useDisclosure
- [ ] useTheme
