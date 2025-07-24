//
//  HybridNitroWebview.swift
//  Pods
//
//  Created by Patrick Kabwe on 24/04/2025.
//

import UIKit

class HybridNitroWebview : HybridNitroWebviewSpec {
    // UIView
    lazy var view: UIView = NitroWebView()
    
    private(set) var nitroWebViewImpl: NitroWebViewImpl?
    
    override init() {
        super.init()
    }
    
    // Props
    var onScriptLoaded: (() -> Void)?
    
    var sourceUrl: String = "" {
        didSet {
            if !sourceUrl.isEmpty {
                if nitroWebViewImpl == nil, let webview = view as? NitroWebView {
                    nitroWebViewImpl = NitroWebViewImpl(webview: webview)
                    nitroWebViewImpl?.webview?.delegate = self
                }
                nitroWebViewImpl?.load(with: sourceUrl)
            }
        }
    }
}


extension HybridNitroWebview: NitroWebViewProtocol {
    func didFinishNavigation(success: Bool) {
        if success {
            onScriptLoaded?()
        }
    }
}
