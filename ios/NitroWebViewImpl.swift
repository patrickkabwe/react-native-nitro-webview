//
//  NitroWebViewImpl.swift
//  Pods
//
//  Created by Patrick Kabwe on 24/04/2025.
//

class NitroWebViewImpl {
    weak var webview: NitroWebView?
        
    init(webview: NitroWebView?) {
        self.webview = webview
    }
    
    func load(with url: String) {
        webview?.loadWebView(with: url)
    }
}
