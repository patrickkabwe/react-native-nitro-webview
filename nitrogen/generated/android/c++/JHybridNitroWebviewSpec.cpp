///
/// JHybridNitroWebviewSpec.cpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

#include "JHybridNitroWebviewSpec.hpp"



#include <string>
#include <optional>
#include <functional>
#include "JFunc_void.hpp"

namespace margelo::nitro::nitrowebview {

  jni::local_ref<JHybridNitroWebviewSpec::jhybriddata> JHybridNitroWebviewSpec::initHybrid(jni::alias_ref<jhybridobject> jThis) {
    return makeCxxInstance(jThis);
  }

  void JHybridNitroWebviewSpec::registerNatives() {
    registerHybrid({
      makeNativeMethod("initHybrid", JHybridNitroWebviewSpec::initHybrid),
    });
  }

  size_t JHybridNitroWebviewSpec::getExternalMemorySize() noexcept {
    static const auto method = javaClassStatic()->getMethod<jlong()>("getMemorySize");
    return method(_javaPart);
  }

  // Properties
  std::string JHybridNitroWebviewSpec::getSourceUrl() {
    static const auto method = javaClassStatic()->getMethod<jni::local_ref<jni::JString>()>("getSourceUrl");
    auto __result = method(_javaPart);
    return __result->toStdString();
  }
  void JHybridNitroWebviewSpec::setSourceUrl(const std::string& sourceUrl) {
    static const auto method = javaClassStatic()->getMethod<void(jni::alias_ref<jni::JString> /* sourceUrl */)>("setSourceUrl");
    method(_javaPart, jni::make_jstring(sourceUrl));
  }
  std::optional<std::function<void()>> JHybridNitroWebviewSpec::getOnScriptLoaded() {
    static const auto method = javaClassStatic()->getMethod<jni::local_ref<JFunc_void::javaobject>()>("getOnScriptLoaded_cxx");
    auto __result = method(_javaPart);
    return __result != nullptr ? std::make_optional([&]() -> std::function<void()> {
      if (__result->isInstanceOf(JFunc_void_cxx::javaClassStatic())) [[likely]] {
        auto downcast = jni::static_ref_cast<JFunc_void_cxx::javaobject>(__result);
        return downcast->cthis()->getFunction();
      } else {
        auto __resultRef = jni::make_global(__result);
        return [__resultRef]() -> void {
          return __resultRef->invoke();
        };
      }
    }()) : std::nullopt;
  }
  void JHybridNitroWebviewSpec::setOnScriptLoaded(const std::optional<std::function<void()>>& onScriptLoaded) {
    static const auto method = javaClassStatic()->getMethod<void(jni::alias_ref<JFunc_void::javaobject> /* onScriptLoaded */)>("setOnScriptLoaded_cxx");
    method(_javaPart, onScriptLoaded.has_value() ? JFunc_void_cxx::fromCpp(onScriptLoaded.value()) : nullptr);
  }

  // Methods
  

} // namespace margelo::nitro::nitrowebview
