///
/// HybridNitroWebviewSpecSwift.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

#pragma once

#include "HybridNitroWebviewSpec.hpp"

// Forward declaration of `HybridNitroWebviewSpec_cxx` to properly resolve imports.
namespace NitroWebview { class HybridNitroWebviewSpec_cxx; }



#include <string>
#include <optional>
#include <functional>

#include "NitroWebview-Swift-Cxx-Umbrella.hpp"

namespace margelo::nitro::nitrowebview {

  /**
   * The C++ part of HybridNitroWebviewSpec_cxx.swift.
   *
   * HybridNitroWebviewSpecSwift (C++) accesses HybridNitroWebviewSpec_cxx (Swift), and might
   * contain some additional bridging code for C++ <> Swift interop.
   *
   * Since this obviously introduces an overhead, I hope at some point in
   * the future, HybridNitroWebviewSpec_cxx can directly inherit from the C++ class HybridNitroWebviewSpec
   * to simplify the whole structure and memory management.
   */
  class HybridNitroWebviewSpecSwift: public virtual HybridNitroWebviewSpec {
  public:
    // Constructor from a Swift instance
    explicit HybridNitroWebviewSpecSwift(const NitroWebview::HybridNitroWebviewSpec_cxx& swiftPart):
      HybridObject(HybridNitroWebviewSpec::TAG),
      _swiftPart(swiftPart) { }

  public:
    // Get the Swift part
    inline NitroWebview::HybridNitroWebviewSpec_cxx& getSwiftPart() noexcept {
      return _swiftPart;
    }

  public:
    // Get memory pressure
    inline size_t getExternalMemorySize() noexcept override {
      return _swiftPart.getMemorySize();
    }

  public:
    // Properties
    inline std::string getSourceUrl() noexcept override {
      auto __result = _swiftPart.getSourceUrl();
      return __result;
    }
    inline void setSourceUrl(const std::string& sourceUrl) noexcept override {
      _swiftPart.setSourceUrl(sourceUrl);
    }
    inline std::optional<std::function<void()>> getOnScriptLoaded() noexcept override {
      auto __result = _swiftPart.getOnScriptLoaded();
      return __result;
    }
    inline void setOnScriptLoaded(const std::optional<std::function<void()>>& onScriptLoaded) noexcept override {
      _swiftPart.setOnScriptLoaded(onScriptLoaded);
    }

  public:
    // Methods
    

  private:
    NitroWebview::HybridNitroWebviewSpec_cxx _swiftPart;
  };

} // namespace margelo::nitro::nitrowebview
