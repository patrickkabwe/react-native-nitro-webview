///
/// JHybridNitroWebviewStateUpdater.cpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

#include "JHybridNitroWebviewStateUpdater.hpp"
#include "views/HybridNitroWebviewComponent.hpp"
#include <NitroModules/NitroDefines.hpp>
#include <NitroModules/JNISharedPtr.hpp>

namespace margelo::nitro::nitrowebview::views {

using namespace facebook;
using ConcreteStateData = react::ConcreteState<HybridNitroWebviewState>;

void JHybridNitroWebviewStateUpdater::updateViewProps(jni::alias_ref<jni::JClass> /* class */,
                                           jni::alias_ref<JHybridNitroWebviewSpec::javaobject> javaView,
                                           jni::alias_ref<JStateWrapper::javaobject> stateWrapperInterface) {
  JHybridNitroWebviewSpec* view = javaView->cthis();
  
  // Get concrete StateWrapperImpl from passed StateWrapper interface object
  jobject rawStateWrapper = stateWrapperInterface.get();
  if (!stateWrapperInterface->isInstanceOf(react::StateWrapperImpl::javaClassStatic())) {
      throw std::runtime_error("StateWrapper is not a StateWrapperImpl");
  }
  auto stateWrapper = jni::alias_ref<react::StateWrapperImpl::javaobject>{
            static_cast<react::StateWrapperImpl::javaobject>(rawStateWrapper)};

  std::shared_ptr<const react::State> state = stateWrapper->cthis()->getState();
  auto concreteState = std::dynamic_pointer_cast<const ConcreteStateData>(state);
  const HybridNitroWebviewState& data = concreteState->getData();
  const std::optional<HybridNitroWebviewProps>& maybeProps = data.getProps();
  if (!maybeProps.has_value()) {
    // Props aren't set yet!
    throw std::runtime_error("HybridNitroWebviewState's data doesn't contain any props!");
  }
  const HybridNitroWebviewProps& props = maybeProps.value();
  if (props.sourceUrl.isDirty) {
    view->setSourceUrl(props.sourceUrl.value);
    // TODO: Set isDirty = false
  }
  if (props.onScriptLoaded.isDirty) {
    view->setOnScriptLoaded(props.onScriptLoaded.value);
    // TODO: Set isDirty = false
  }

  // Update hybridRef if it changed
  if (props.hybridRef.isDirty) {
    // hybridRef changed - call it with new this
    const auto& maybeFunc = props.hybridRef.value;
    if (maybeFunc.has_value()) {
      auto shared = JNISharedPtr::make_shared_from_jni<JHybridNitroWebviewSpec>(jni::make_global(javaView));
      maybeFunc.value()(shared);
    }
    // TODO: Set isDirty = false
  }
}

} // namespace margelo::nitro::nitrowebview::views
