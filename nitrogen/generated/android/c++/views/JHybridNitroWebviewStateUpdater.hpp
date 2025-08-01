///
/// JHybridNitroWebviewStateUpdater.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

#pragma once

#include <fbjni/fbjni.h>
#include <react/fabric/StateWrapperImpl.h>
#include <react/fabric/CoreComponentsRegistry.h>
#include <react/renderer/core/ConcreteComponentDescriptor.h>
#include <NitroModules/NitroDefines.hpp>
#include <NitroModules/JStateWrapper.hpp>
#include "JHybridNitroWebviewSpec.hpp"
#include "views/HybridNitroWebviewComponent.hpp"

namespace margelo::nitro::nitrowebview::views {

using namespace facebook;

class JHybridNitroWebviewStateUpdater: public jni::JavaClass<JHybridNitroWebviewStateUpdater> {
public:
  static constexpr auto kJavaDescriptor = "Lcom/margelo/nitro/nitrowebview/views/HybridNitroWebviewStateUpdater;";

public:
  static void updateViewProps(jni::alias_ref<jni::JClass> /* class */,
                              jni::alias_ref<JHybridNitroWebviewSpec::javaobject> view,
                              jni::alias_ref<JStateWrapper::javaobject> stateWrapperInterface);

public:
  static void registerNatives() {
    // Register JNI calls
    javaClassStatic()->registerNatives({
      makeNativeMethod("updateViewProps", JHybridNitroWebviewStateUpdater::updateViewProps),
    });
    // Register React Native view component descriptor
    auto provider = react::concreteComponentDescriptorProvider<HybridNitroWebviewComponentDescriptor>();
    auto providerRegistry = react::CoreComponentsRegistry::sharedProviderRegistry();
    providerRegistry->add(provider);
  }
};

} // namespace margelo::nitro::nitrowebview::views
