/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_rkapp_JNICaller */

#ifndef _Included_com_rkapp_JNICaller
#define _Included_com_rkapp_JNICaller
#ifdef __cplusplus
extern "C" {
#endif


typedef struct {

	// Cached JNI references.
	JavaVM* mJavaVM;
	jobject mStoreFront;
	jobject mColor;
	// Classes.
	jclass ClassStore;
	jclass ClassColor;
	// Methods.
	jmethodID MethodOnAlertInt;
	jmethodID MethodOnAlertString;
	jmethodID MethodOnAlertColor;
	jmethodID MethodColorEquals;
	// Thread variables.
	pthread_t mThread;
	int32_t mState;
} StoreWatcher;

/*
 * Class:     com_rkapp_JNICaller
 * Method:    init
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_rkapp_JNICaller_init
  (JNIEnv *, jobject);

/*
 * Class:     com_rkapp_JNICaller
 * Method:    keyEvent
 * Signature: (IIILandroid/view/KeyEvent;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_rkapp_JNICaller_keyEvent
  (JNIEnv *, jobject, jint, jint, jint, jobject);

/*
 * Class:     com_rkapp_JNICaller
 * Method:    cleanup
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_rkapp_JNICaller_cleanup
  (JNIEnv *, jobject);

/*
 * Class:     com_rkapp_JNICaller
 * Method:    openSync
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_rkapp_JNICaller_openSync
  (JNIEnv *, jobject);

/*
 * Class:     com_rkapp_JNICaller
 * Method:    turnLedRed
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_rkapp_JNICaller_turnLedRed
  (JNIEnv *, jobject);

/*
 * Class:     com_rkapp_JNICaller
 * Method:    turnLedGreen
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_rkapp_JNICaller_turnLedGreen
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
