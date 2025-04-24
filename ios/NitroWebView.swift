//
//  NitroWebView.swift
//  Pods
//
//  Created by Patrick Kabwe on 24/04/2025.
//

import WebKit


protocol NitroWebViewProtocol: AnyObject {
    func didFinishNavigation(success: Bool)
}

class NitroWebView : UIView {
    var delegate: NitroWebViewProtocol?
    private weak var webview: WKWebView?
    
    override init(frame: CGRect){
        super.init(frame: frame)
        setupWebView()
    }
    
    required init?(coder: NSCoder) {
        super.init(coder: coder)
        setupWebView()
    }
    
    func setupWebView() {
        webview = WKWebView()
        webview?.navigationDelegate  = self
        guard let webview = webview else { return }
        addSubview(webview)
    }
    
    func loadWebView(with url: String) {
        if let url = URL(string: url) {
            let request = URLRequest(url: url)
            if let webview = webview {
                webview.load(request)
            }
  
        } else {
            delegate?.didFinishNavigation(success: false)
        }
    }
    
    func cleanup() {
        webview?.navigationDelegate = nil
        webview?.stopLoading()
        webview?.removeFromSuperview()
    }

    override func layoutSubviews() {
        super.layoutSubviews()
        webview?.frame = bounds
    }
    
    deinit {
        cleanup()
    }
}

extension NitroWebView : WKNavigationDelegate {
    func webView(_ webView: WKWebView, didFinish navigation: WKNavigation!) {
        delegate?.didFinishNavigation(success: true)
    }
}
