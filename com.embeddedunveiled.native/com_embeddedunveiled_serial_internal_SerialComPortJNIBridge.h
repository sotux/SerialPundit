/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_embeddedunveiled_serial_internal_SerialComPortJNIBridge */

#ifndef _Included_com_embeddedunveiled_serial_internal_SerialComPortJNIBridge
#define _Included_com_embeddedunveiled_serial_internal_SerialComPortJNIBridge
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_embeddedunveiled_serial_internal_SerialComPortJNIBridge
 * Method:    initNativeLib
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_embeddedunveiled_serial_internal_SerialComPortJNIBridge_initNativeLib
  (JNIEnv *, jobject);

/*
 * Class:     com_embeddedunveiled_serial_internal_SerialComPortJNIBridge
 * Method:    getNativeLibraryVersion
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_embeddedunveiled_serial_internal_SerialComPortJNIBridge_getNativeLibraryVersion
  (JNIEnv *, jobject);

/*
 * Class:     com_embeddedunveiled_serial_internal_SerialComPortJNIBridge
 * Method:    listAvailableComPorts
 * Signature: ()[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_com_embeddedunveiled_serial_internal_SerialComPortJNIBridge_listAvailableComPorts
  (JNIEnv *, jobject);

/*
 * Class:     com_embeddedunveiled_serial_internal_SerialComPortJNIBridge
 * Method:    setUpDataLooperThread
 * Signature: (JLcom/embeddedunveiled/serial/internal/SerialComLooper;)I
 */
JNIEXPORT jint JNICALL Java_com_embeddedunveiled_serial_internal_SerialComPortJNIBridge_setUpDataLooperThread
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     com_embeddedunveiled_serial_internal_SerialComPortJNIBridge
 * Method:    setUpEventLooperThread
 * Signature: (JLcom/embeddedunveiled/serial/internal/SerialComLooper;)I
 */
JNIEXPORT jint JNICALL Java_com_embeddedunveiled_serial_internal_SerialComPortJNIBridge_setUpEventLooperThread
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     com_embeddedunveiled_serial_internal_SerialComPortJNIBridge
 * Method:    destroyDataLooperThread
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_embeddedunveiled_serial_internal_SerialComPortJNIBridge_destroyDataLooperThread
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_embeddedunveiled_serial_internal_SerialComPortJNIBridge
 * Method:    destroyEventLooperThread
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_embeddedunveiled_serial_internal_SerialComPortJNIBridge_destroyEventLooperThread
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_embeddedunveiled_serial_internal_SerialComPortJNIBridge
 * Method:    pauseListeningEvents
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_embeddedunveiled_serial_internal_SerialComPortJNIBridge_pauseListeningEvents
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_embeddedunveiled_serial_internal_SerialComPortJNIBridge
 * Method:    resumeListeningEvents
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_embeddedunveiled_serial_internal_SerialComPortJNIBridge_resumeListeningEvents
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_embeddedunveiled_serial_internal_SerialComPortJNIBridge
 * Method:    openComPort
 * Signature: (Ljava/lang/String;ZZZ)J
 */
JNIEXPORT jlong JNICALL Java_com_embeddedunveiled_serial_internal_SerialComPortJNIBridge_openComPort
  (JNIEnv *, jobject, jstring, jboolean, jboolean, jboolean);

/*
 * Class:     com_embeddedunveiled_serial_internal_SerialComPortJNIBridge
 * Method:    closeComPort
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_embeddedunveiled_serial_internal_SerialComPortJNIBridge_closeComPort
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_embeddedunveiled_serial_internal_SerialComPortJNIBridge
 * Method:    readBytes
 * Signature: (JI)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_embeddedunveiled_serial_internal_SerialComPortJNIBridge_readBytes
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     com_embeddedunveiled_serial_internal_SerialComPortJNIBridge
 * Method:    readBytesBlocking
 * Signature: (JI)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_embeddedunveiled_serial_internal_SerialComPortJNIBridge_readBytesBlocking
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     com_embeddedunveiled_serial_internal_SerialComPortJNIBridge
 * Method:    readBytesDirect
 * Signature: (JLjava/nio/ByteBuffer;II)I
 */
JNIEXPORT jint JNICALL Java_com_embeddedunveiled_serial_internal_SerialComPortJNIBridge_readBytesDirect
  (JNIEnv *, jobject, jlong, jobject, jint, jint);

/*
 * Class:     com_embeddedunveiled_serial_internal_SerialComPortJNIBridge
 * Method:    writeBytes
 * Signature: (J[BI)I
 */
JNIEXPORT jint JNICALL Java_com_embeddedunveiled_serial_internal_SerialComPortJNIBridge_writeBytes
  (JNIEnv *, jobject, jlong, jbyteArray, jint);

/*
 * Class:     com_embeddedunveiled_serial_internal_SerialComPortJNIBridge
 * Method:    writeBytesDirect
 * Signature: (JLjava/nio/ByteBuffer;II)I
 */
JNIEXPORT jint JNICALL Java_com_embeddedunveiled_serial_internal_SerialComPortJNIBridge_writeBytesDirect
  (JNIEnv *, jobject, jlong, jobject, jint, jint);

/*
 * Class:     com_embeddedunveiled_serial_internal_SerialComPortJNIBridge
 * Method:    setRTS
 * Signature: (JZ)I
 */
JNIEXPORT jint JNICALL Java_com_embeddedunveiled_serial_internal_SerialComPortJNIBridge_setRTS
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     com_embeddedunveiled_serial_internal_SerialComPortJNIBridge
 * Method:    setDTR
 * Signature: (JZ)I
 */
JNIEXPORT jint JNICALL Java_com_embeddedunveiled_serial_internal_SerialComPortJNIBridge_setDTR
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     com_embeddedunveiled_serial_internal_SerialComPortJNIBridge
 * Method:    getLinesStatus
 * Signature: (J)[I
 */
JNIEXPORT jintArray JNICALL Java_com_embeddedunveiled_serial_internal_SerialComPortJNIBridge_getLinesStatus
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_embeddedunveiled_serial_internal_SerialComPortJNIBridge
 * Method:    getInterruptCount
 * Signature: (J)[I
 */
JNIEXPORT jintArray JNICALL Java_com_embeddedunveiled_serial_internal_SerialComPortJNIBridge_getInterruptCount
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_embeddedunveiled_serial_internal_SerialComPortJNIBridge
 * Method:    sendBreak
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_embeddedunveiled_serial_internal_SerialComPortJNIBridge_sendBreak
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     com_embeddedunveiled_serial_internal_SerialComPortJNIBridge
 * Method:    getByteCount
 * Signature: (J)[I
 */
JNIEXPORT jintArray JNICALL Java_com_embeddedunveiled_serial_internal_SerialComPortJNIBridge_getByteCount
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_embeddedunveiled_serial_internal_SerialComPortJNIBridge
 * Method:    clearPortIOBuffers
 * Signature: (JZZ)I
 */
JNIEXPORT jint JNICALL Java_com_embeddedunveiled_serial_internal_SerialComPortJNIBridge_clearPortIOBuffers
  (JNIEnv *, jobject, jlong, jboolean, jboolean);

/*
 * Class:     com_embeddedunveiled_serial_internal_SerialComPortJNIBridge
 * Method:    registerHotPlugEventListener
 * Signature: (Lcom/embeddedunveiled/serial/ISerialComHotPlugListener;II)I
 */
JNIEXPORT jint JNICALL Java_com_embeddedunveiled_serial_internal_SerialComPortJNIBridge_registerHotPlugEventListener
  (JNIEnv *, jobject, jobject, jint, jint);

/*
 * Class:     com_embeddedunveiled_serial_internal_SerialComPortJNIBridge
 * Method:    unregisterHotPlugEventListener
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_embeddedunveiled_serial_internal_SerialComPortJNIBridge_unregisterHotPlugEventListener
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_embeddedunveiled_serial_internal_SerialComPortJNIBridge
 * Method:    configureComPortData
 * Signature: (JIIIII)I
 */
JNIEXPORT jint JNICALL Java_com_embeddedunveiled_serial_internal_SerialComPortJNIBridge_configureComPortData
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint, jint);

/*
 * Class:     com_embeddedunveiled_serial_internal_SerialComPortJNIBridge
 * Method:    configureComPortControl
 * Signature: (JICCZZ)I
 */
JNIEXPORT jint JNICALL Java_com_embeddedunveiled_serial_internal_SerialComPortJNIBridge_configureComPortControl
  (JNIEnv *, jobject, jlong, jint, jchar, jchar, jboolean, jboolean);

/*
 * Class:     com_embeddedunveiled_serial_internal_SerialComPortJNIBridge
 * Method:    getCurrentConfigurationU
 * Signature: (J)[I
 */
JNIEXPORT jintArray JNICALL Java_com_embeddedunveiled_serial_internal_SerialComPortJNIBridge_getCurrentConfigurationU
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_embeddedunveiled_serial_internal_SerialComPortJNIBridge
 * Method:    getCurrentConfigurationW
 * Signature: (J)[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_com_embeddedunveiled_serial_internal_SerialComPortJNIBridge_getCurrentConfigurationW
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_embeddedunveiled_serial_internal_SerialComPortJNIBridge
 * Method:    fineTuneRead
 * Signature: (JIIIII)I
 */
JNIEXPORT jint JNICALL Java_com_embeddedunveiled_serial_internal_SerialComPortJNIBridge_fineTuneRead
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint, jint);

/*
 * Class:     com_embeddedunveiled_serial_internal_SerialComPortJNIBridge
 * Method:    ioctlExecuteOperation
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_com_embeddedunveiled_serial_internal_SerialComPortJNIBridge_ioctlExecuteOperation
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_embeddedunveiled_serial_internal_SerialComPortJNIBridge
 * Method:    ioctlSetValue
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_com_embeddedunveiled_serial_internal_SerialComPortJNIBridge_ioctlSetValue
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_embeddedunveiled_serial_internal_SerialComPortJNIBridge
 * Method:    ioctlGetValue
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_com_embeddedunveiled_serial_internal_SerialComPortJNIBridge_ioctlGetValue
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_embeddedunveiled_serial_internal_SerialComPortJNIBridge
 * Method:    ioctlSetValueIntArray
 * Signature: (JJ[I)J
 */
JNIEXPORT jlong JNICALL Java_com_embeddedunveiled_serial_internal_SerialComPortJNIBridge_ioctlSetValueIntArray
  (JNIEnv *, jobject, jlong, jlong, jintArray);

/*
 * Class:     com_embeddedunveiled_serial_internal_SerialComPortJNIBridge
 * Method:    ioctlSetValueCharArray
 * Signature: (JJ[B)J
 */
JNIEXPORT jlong JNICALL Java_com_embeddedunveiled_serial_internal_SerialComPortJNIBridge_ioctlSetValueCharArray
  (JNIEnv *, jobject, jlong, jlong, jbyteArray);

/*
 * Class:     com_embeddedunveiled_serial_internal_SerialComPortJNIBridge
 * Method:    listUSBdevicesWithInfo
 * Signature: (I)[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_com_embeddedunveiled_serial_internal_SerialComPortJNIBridge_listUSBdevicesWithInfo
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_embeddedunveiled_serial_internal_SerialComPortJNIBridge
 * Method:    listComPortFromUSBAttributes
 * Signature: (IILjava/lang/String;)[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_com_embeddedunveiled_serial_internal_SerialComPortJNIBridge_listComPortFromUSBAttributes
  (JNIEnv *, jobject, jint, jint, jstring);

/*
 * Class:     com_embeddedunveiled_serial_internal_SerialComPortJNIBridge
 * Method:    isUSBDevConnected
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_embeddedunveiled_serial_internal_SerialComPortJNIBridge_isUSBDevConnected
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_embeddedunveiled_serial_internal_SerialComPortJNIBridge
 * Method:    rescanUSBDevicesHW
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_embeddedunveiled_serial_internal_SerialComPortJNIBridge_rescanUSBDevicesHW
  (JNIEnv *, jobject);

/*
 * Class:     com_embeddedunveiled_serial_internal_SerialComPortJNIBridge
 * Method:    listBluetoothAdaptorsWithInfo
 * Signature: ()[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_com_embeddedunveiled_serial_internal_SerialComPortJNIBridge_listBluetoothAdaptorsWithInfo
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
