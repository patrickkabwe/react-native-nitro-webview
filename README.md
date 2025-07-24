# react-native-nitro-webview

A React Native WebView component built with NitroModules for high performance and edge-to-edge display support.

## Features

- High-performance WebView implementation using NitroModules
- Edge-to-edge display support for immersive experiences
- Cross-platform compatibility (iOS and Android)
- TypeScript support
- Modern React Native architecture

## Installation

```bash
npm install react-native-nitro-webview
```

## Usage

### Basic Usage

```tsx
import React from 'react';
import { StyleSheet, View } from 'react-native';
import WebView from 'react-native-nitro-webview';

function App() {
  return (
    <View style={styles.container}>
      <WebView
        style={styles.webview}
        sourceUrl="https://example.com"
        onScriptLoaded={() => {
          console.log('WebView loaded successfully');
        }}
      />
    </View>
  );
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
  },
  webview: {
    flex: 1,
    width: '100%',
    height: '100%',
  },
});
```

### Edge-to-Edge Display

The WebView component supports edge-to-edge display out of the box. To enable this feature:

1. **Android**: The component automatically handles system insets and extends content behind the status bar and navigation bar.

2. **iOS**: The WebView respects safe areas and extends to the edges of the screen.

3. **Styling**: Remove any container styling that constrains the WebView to allow it to extend to the edges:

```tsx
const styles = StyleSheet.create({
  container: {
    flex: 1,
    // Don't add justifyContent or alignItems here
    // to allow edge-to-edge display
  },
  webview: {
    flex: 1,
    width: '100%',
    height: '100%',
  },
});
```

## Props

| Prop | Type | Required | Description |
|------|------|----------|-------------|
| `sourceUrl` | `string` | Yes | The URL to load in the WebView |
| `onScriptLoaded` | `() => void` | No | Callback fired when the WebView finishes loading |
| `style` | `StyleProp<ViewStyle>` | No | Style for the WebView container |

## Platform-Specific Setup

### Android

The Android implementation automatically handles:
- System bar insets for edge-to-edge display
- Transparent status and navigation bars
- Proper content padding to avoid system UI overlap

### iOS

The iOS implementation:
- Respects safe area insets
- Extends content to screen edges
- Handles device-specific layouts (notches, home indicators)

## Example

See the `example/` directory for a complete working example demonstrating edge-to-edge WebView usage.

## License

MIT
