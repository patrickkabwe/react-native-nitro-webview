///
/// NitroWebview-Swift-Cxx-Umbrella.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

#pragma once

// Forward declarations of C++ defined types
// Forward declaration of `HybridNitroWebviewSpec` to properly resolve imports.
namespace margelo::nitro::nitrowebview { class HybridNitroWebviewSpec; }

// Include C++ defined types
#include "HybridNitroWebviewSpec.hpp"
#include <functional>
#include <memory>
#include <optional>
#include <string>

// C++ helpers for Swift
#include "NitroWebview-Swift-Cxx-Bridge.hpp"

// Common C++ types used in Swift
#include <NitroModules/ArrayBufferHolder.hpp>
#include <NitroModules/AnyMapUtils.hpp>
#include <NitroModules/RuntimeError.hpp>
#include <NitroModules/DateToChronoDate.hpp>

// Forward declarations of Swift defined types
// Forward declaration of `HybridNitroWebviewSpec_cxx` to properly resolve imports.
namespace NitroWebview { class HybridNitroWebviewSpec_cxx; }

// Include Swift defined types
#if __has_include("NitroWebview-Swift.h")
// This header is generated by Xcode/Swift on every app build.
// If it cannot be found, make sure the Swift module's name (= podspec name) is actually "NitroWebview".
#include "NitroWebview-Swift.h"
// Same as above, but used when building with frameworks (`use_frameworks`)
#elif __has_include(<NitroWebview/NitroWebview-Swift.h>)
#include <NitroWebview/NitroWebview-Swift.h>
#else
#error NitroWebview's autogenerated Swift header cannot be found! Make sure the Swift module's name (= podspec name) is actually "NitroWebview", and try building the app first.
#endif
