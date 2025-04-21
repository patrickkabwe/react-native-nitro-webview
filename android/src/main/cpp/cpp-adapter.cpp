#include <jni.h>
#include "NitroWebviewOnLoad.hpp"

JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM* vm, void*) {
  return margelo::nitro::nitrowebview::initialize(vm);
}
