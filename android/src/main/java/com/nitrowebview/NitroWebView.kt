package com.nitrowebview

import android.content.Context
import android.util.AttributeSet
import android.view.ViewGroup.LayoutParams
import android.webkit.WebResourceError
import android.webkit.WebResourceRequest
import android.webkit.WebView
import android.webkit.WebViewClient

enum class OnPageFinishState {
    Error,
    Success
}

interface WebViewListener {
    fun onPageFinished(state: OnPageFinishState)
}

class NitroWebView: WebView {
    var listener: WebViewListener? = null

    constructor(context: Context) : super(context) {
        setupView()
    }

    constructor(context: Context, attrs: AttributeSet?) : super(context, attrs) {
        setupView()
    }

    constructor(context: Context, attrs: AttributeSet?, defStyleAttr: Int) : super(context, attrs, defStyleAttr) {
        setupView()
    }

    private fun setupView() {
        this.layoutParams = LayoutParams(LayoutParams.MATCH_PARENT, LayoutParams.MATCH_PARENT)
        this.webViewClient = object : WebViewClient() {
            override fun onPageFinished(view: WebView, url: String) {
                super.onPageFinished(view, url)
                listener?.onPageFinished(OnPageFinishState.Success)
            }

            override fun onReceivedError(
                view: WebView?,
                request: WebResourceRequest?,
                error: WebResourceError?
            ) {
                super.onReceivedError(view, request, error)
                listener?.onPageFinished(OnPageFinishState.Error)
            }
        }
    }
}
