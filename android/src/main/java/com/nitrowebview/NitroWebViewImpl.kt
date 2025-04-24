package com.nitrowebview


class NitroWebViewImpl(val webView: NitroWebView) {
    fun load(url: String) {
        webView.loadUrl(url)
    }
}
