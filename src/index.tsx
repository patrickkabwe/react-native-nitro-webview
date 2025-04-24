import React from 'react'
import type { StyleProp, ViewStyle } from 'react-native'
import { NitroWebview } from './nitro-webview'
import type { NitroWebviewProps } from './views/nitro-webview.nitro'

export default function WebView(
  props: NitroWebviewProps & { style: StyleProp<ViewStyle> }
) {
  return (
    <NitroWebview
      {...props}
      onScriptLoaded={{
        f: props.onScriptLoaded,
      }}
    />
  )
}
