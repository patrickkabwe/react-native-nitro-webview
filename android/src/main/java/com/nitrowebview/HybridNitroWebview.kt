package com.nitrowebview

import androidx.annotation.Keep
import com.facebook.proguard.annotations.DoNotStrip
import com.facebook.react.uimanager.ThemedReactContext
import com.margelo.nitro.nitrowebview.HybridNitroWebviewSpec

@Keep
@DoNotStrip
class HybridNitroWebview(val context: ThemedReactContext): HybridNitroWebviewSpec(), WebViewListener  {
    // View
    // TODO: fix edge-to-edge
    override val view: NitroWebView = NitroWebView(context)
    lateinit var webViewImpl: NitroWebViewImpl

    // Props
    override var sourceUrl: String
        get() = ""
        set(value) {
            webViewImpl = NitroWebViewImpl(view)
            webViewImpl.webView.listener = this
            webViewImpl.load(value)
        }

    override var onScriptLoaded: (() -> Unit)? = null

    override fun onPageFinished(state: OnPageFinishState) {
        if (state == OnPageFinishState.Success){
            onScriptLoaded?.invoke()
        }
    }
}
