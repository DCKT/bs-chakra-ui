# bs-chakra-ui 🚧

Bucklescript bindings for [chakra-ui](https://chakra-ui.com)

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
