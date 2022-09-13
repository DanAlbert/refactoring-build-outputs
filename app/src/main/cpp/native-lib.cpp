#include <jni.h>
#include <string>

const int app = 0;

extern "C" JNIEXPORT jstring JNICALL
Java_com_android_ndk_refactoringbuildoutputs_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++2";
    return env->NewStringUTF(hello.c_str());
}