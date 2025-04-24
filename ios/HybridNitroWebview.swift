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
                nitroWebViewImpl = NitroWebViewImpl(webview: view as? NitroWebView)
                nitroWebViewImpl?.load(with: sourceUrl)
                nitroWebViewImpl?.webview?.delegate = self
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
