import { getHostComponent, type HybridRef } from 'react-native-nitro-modules'
import NitroWebviewConfig from '../nitrogen/generated/shared/json/NitroWebviewConfig.json'
import type {
  NitroWebviewProps,
  NitroWebviewMethods,
} from './views/nitro-webview.nitro'


export const NitroWebview = getHostComponent<NitroWebviewProps, NitroWebviewMethods>(
  'NitroWebview',
  () => NitroWebviewConfig
)

export type NitroWebviewRef = HybridRef<NitroWebviewProps, NitroWebviewMethods>
