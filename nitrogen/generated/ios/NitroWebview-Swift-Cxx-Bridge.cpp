///
/// NitroWebview-Swift-Cxx-Bridge.cpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

#include "NitroWebview-Swift-Cxx-Bridge.hpp"

// Include C++ implementation defined types
#include "HybridNitroWebviewSpecSwift.hpp"
#include "NitroWebview-Swift-Cxx-Umbrella.hpp"

namespace margelo::nitro::nitrowebview::bridge::swift {

  // pragma MARK: std::function<void()>
  Func_void create_Func_void(void* _Nonnull swiftClosureWrapper) {
    auto swiftClosure = NitroWebview::Func_void::fromUnsafe(swiftClosureWrapper);
    return [swiftClosure = std::move(swiftClosure)]() mutable -> void {
      swiftClosure.call();
    };
  }
  
  // pragma MARK: std::shared_ptr<margelo::nitro::nitrowebview::HybridNitroWebviewSpec>
  std::shared_ptr<margelo::nitro::nitrowebview::HybridNitroWebviewSpec> create_std__shared_ptr_margelo__nitro__nitrowebview__HybridNitroWebviewSpec_(void* _Nonnull swiftUnsafePointer) {
    NitroWebview::HybridNitroWebviewSpec_cxx swiftPart = NitroWebview::HybridNitroWebviewSpec_cxx::fromUnsafe(swiftUnsafePointer);
    return std::make_shared<margelo::nitro::nitrowebview::HybridNitroWebviewSpecSwift>(swiftPart);
  }
  void* _Nonnull get_std__shared_ptr_margelo__nitro__nitrowebview__HybridNitroWebviewSpec_(std__shared_ptr_margelo__nitro__nitrowebview__HybridNitroWebviewSpec_ cppType) {
    std::shared_ptr<margelo::nitro::nitrowebview::HybridNitroWebviewSpecSwift> swiftWrapper = std::dynamic_pointer_cast<margelo::nitro::nitrowebview::HybridNitroWebviewSpecSwift>(cppType);
  #ifdef NITRO_DEBUG
    if (swiftWrapper == nullptr) [[unlikely]] {
      throw std::runtime_error("Class \"HybridNitroWebviewSpec\" is not implemented in Swift!");
    }
  #endif
    NitroWebview::HybridNitroWebviewSpec_cxx& swiftPart = swiftWrapper->getSwiftPart();
    return swiftPart.toUnsafe();
  }

} // namespace margelo::nitro::nitrowebview::bridge::swift
