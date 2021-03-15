// Licensed to the Apache Software Foundation (ASF) under one
// or more contributor license agreements.  See the NOTICE file
// distributed with this work for additional information
// regarding copyright ownership.  The ASF licenses this file
// to you under the Apache License, Version 2.0 (the
// "License"); you may not use this file except in compliance
// with the License.  You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing,
// software distributed under the License is distributed on an
// "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied.  See the License for the
// specific language governing permissions and limitations
// under the License.

/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_intel_ape_ParquetReaderJNI */

#ifndef _Included_com_intel_ape_ParquetReaderJNI
#define _Included_com_intel_ape_ParquetReaderJNI
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_intel_ape_ParquetReaderJNI
 * Method:    init
 * Signature: (Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;IIZ)J
 */
JNIEXPORT jlong JNICALL Java_com_intel_ape_ParquetReaderJNI_init(JNIEnv*, jclass, jstring,
                                                                 jstring, jint, jstring,
                                                                 jint, jint, jboolean);

/*
 * Class:     com_intel_ape_ParquetReaderJNI
 * Method:    readBatch
 * Signature: (JI[J[J)I
 */
JNIEXPORT jint JNICALL Java_com_intel_ape_ParquetReaderJNI_readBatch(JNIEnv*, jclass,
                                                                     jlong, jint,
                                                                     jlongArray,
                                                                     jlongArray);

/*
 * Class:     com_intel_ape_ParquetReaderJNI
 * Method:    hasNext
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_intel_ape_ParquetReaderJNI_hasNext(JNIEnv*, jclass,
                                                                       jlong);

/*
 * Class:     com_intel_ape_ParquetReaderJNI
 * Method:    skipNextRowGroup
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_intel_ape_ParquetReaderJNI_skipNextRowGroup(JNIEnv*,
                                                                                jclass,
                                                                                jlong);

/*
 * Class:     com_intel_ape_ParquetReaderJNI
 * Method:    close
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_intel_ape_ParquetReaderJNI_close(JNIEnv*, jclass, jlong);

/*
 * Class:     com_intel_ape_ParquetReaderJNI
 * Method:    setFilterStr
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_intel_ape_ParquetReaderJNI_setFilterStr(JNIEnv*, jclass,
                                                                        jlong, jstring);

/*
 * Class:     com_intel_ape_ParquetReaderJNI
 * Method:    setAggStr
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_intel_ape_ParquetReaderJNI_setAggStr(JNIEnv*, jclass,
                                                                     jlong, jstring);

/*
 * Class:     com_intel_ape_ParquetReaderJNI
 * Method:    setPlasmaCacheRedis
 * Signature: (JLjava/lang/String;ILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_intel_ape_ParquetReaderJNI_setPlasmaCacheRedis(
    JNIEnv*, jclass, jlong, jstring, jint, jstring);

#ifdef __cplusplus
}
#endif
#endif
