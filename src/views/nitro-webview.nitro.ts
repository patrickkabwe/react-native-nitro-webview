import type {
  HybridView,
  HybridViewProps,
  HybridViewMethods,
} from 'react-native-nitro-modules'

export interface NitroWebviewProps extends HybridViewProps {
   sourceUrl: string
   onScriptLoaded?: () => void
}

export interface NitroWebviewMethods extends HybridViewMethods {}

export type NitroWebview = HybridView<NitroWebviewProps, NitroWebviewMethods, { ios: 'swift', android: 'kotlin' }>