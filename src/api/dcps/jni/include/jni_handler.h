/*
 *                         OpenSplice DDS
 *
 *   This software and documentation are Copyright 2006 to 2011 PrismTech
 *   Limited and its licensees. All rights reserved. See file:
 *
 *                     $OSPL_HOME/LICENSE 
 *
 *   for full copyright notice and license terms. 
 *
 */

/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_opensplice_dds_dcps_jni_DCPSJNIHandler */

#ifndef _Included_org_opensplice_dds_dcps_jni_DCPSJNIHandler
#define _Included_org_opensplice_dds_dcps_jni_DCPSJNIHandler
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_opensplice_dds_dcps_jni_DCPSJNIHandler
 * Method:    jniGetParticipantFactoryInstance
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_opensplice_dds_dcps_jni_DCPSJNIHandler_jniGetParticipantFactoryInstance
  (JNIEnv *, jobject);

/*
 * Class:     org_opensplice_dds_dcps_jni_DCPSJNIHandler
 * Method:    jniDeleteParticipantFactoryInstance
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_opensplice_dds_dcps_jni_DCPSJNIHandler_jniDeleteParticipantFactoryInstance
  (JNIEnv *, jobject);

/*
 * Class:     org_opensplice_dds_dcps_jni_DCPSJNIHandler
 * Method:    jniCreateParticipant
 * Signature: (Lorg/opensplice/dds/dcps/DomainParticipantFactory;JLorg/opensplice/dds/dcps/policy/DomainParticipantQos;Lorg/opensplice/dds/dcps/DomainParticipantListener;)Lorg/opensplice/dds/dcps/DomainParticipant;
 */
JNIEXPORT jobject JNICALL Java_org_opensplice_dds_dcps_jni_DCPSJNIHandler_jniCreateParticipant
  (JNIEnv *, jobject, jobject, jlong, jobject, jobject);

/*
 * Class:     org_opensplice_dds_dcps_jni_DCPSJNIHandler
 * Method:    jniDeleteParticipant
 * Signature: (Lorg/opensplice/dds/dcps/DomainParticipant;)I
 */
JNIEXPORT jint JNICALL Java_org_opensplice_dds_dcps_jni_DCPSJNIHandler_jniDeleteParticipant
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_opensplice_dds_dcps_jni_DCPSJNIHandler
 * Method:    jniCreatePublisher
 * Signature: (Lorg/opensplice/dds/dcps/DomainParticipant;Lorg/opensplice/dds/dcps/policy/PublisherQos;Lorg/opensplice/dds/dcps/PublisherListener;)Lorg/opensplice/dds/dcps/Publisher;
 */
JNIEXPORT jobject JNICALL Java_org_opensplice_dds_dcps_jni_DCPSJNIHandler_jniCreatePublisher
  (JNIEnv *, jobject, jobject, jobject, jobject);

/*
 * Class:     org_opensplice_dds_dcps_jni_DCPSJNIHandler
 * Method:    jniDeletePublisher
 * Signature: (Lorg/opensplice/dds/dcps/Publisher;)I
 */
JNIEXPORT jint JNICALL Java_org_opensplice_dds_dcps_jni_DCPSJNIHandler_jniDeletePublisher
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_opensplice_dds_dcps_jni_DCPSJNIHandler
 * Method:    jniCreateSubscriber
 * Signature: (Lorg/opensplice/dds/dcps/DomainParticipant;Lorg/opensplice/dds/dcps/policy/SubscriberQos;Lorg/opensplice/dds/dcps/SubscriberListener;)Lorg/opensplice/dds/dcps/Subscriber;
 */
JNIEXPORT jobject JNICALL Java_org_opensplice_dds_dcps_jni_DCPSJNIHandler_jniCreateSubscriber
  (JNIEnv *, jobject, jobject, jobject, jobject);

/*
 * Class:     org_opensplice_dds_dcps_jni_DCPSJNIHandler
 * Method:    jniDeleteSubscriber
 * Signature: (Lorg/opensplice/dds/dcps/Subscriber;)I
 */
JNIEXPORT jint JNICALL Java_org_opensplice_dds_dcps_jni_DCPSJNIHandler_jniDeleteSubscriber
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_opensplice_dds_dcps_jni_DCPSJNIHandler
 * Method:    jniCreateTopic
 * Signature: (Lorg/opensplice/dds/dcps/DomainParticipant;Ljava/lang/String;Ljava/lang/String;Lorg/opensplice/dds/dcps/policy/TopicQos;Lorg/opensplice/dds/dcps/TopicListener;)Lorg/opensplice/dds/dcps/Topic;
 */
JNIEXPORT jobject JNICALL Java_org_opensplice_dds_dcps_jni_DCPSJNIHandler_jniCreateTopic
  (JNIEnv *, jobject, jobject, jstring, jstring, jobject, jobject);

/*
 * Class:     org_opensplice_dds_dcps_jni_DCPSJNIHandler
 * Method:    jniDeleteTopic
 * Signature: (Lorg/opensplice/dds/dcps/Topic;)I
 */
JNIEXPORT jint JNICALL Java_org_opensplice_dds_dcps_jni_DCPSJNIHandler_jniDeleteTopic
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_opensplice_dds_dcps_jni_DCPSJNIHandler
 * Method:    jniCreateDataWriter
 * Signature: (Lorg/opensplice/dds/dcps/Publisher;Lorg/opensplice/dds/dcps/Topic;Lorg/opensplice/dds/dcps/policy/DataWriterQos;Lorg/opensplice/dds/dcps/DataWriterListener;)Lorg/opensplice/dds/dcps/DataWriter;
 */
JNIEXPORT jobject JNICALL Java_org_opensplice_dds_dcps_jni_DCPSJNIHandler_jniCreateDataWriter
  (JNIEnv *, jobject, jobject, jobject, jobject, jobject);

/*
 * Class:     org_opensplice_dds_dcps_jni_DCPSJNIHandler
 * Method:    jniDeleteDataWriter
 * Signature: (Lorg/opensplice/dds/dcps/DataWriter;)I
 */
JNIEXPORT jint JNICALL Java_org_opensplice_dds_dcps_jni_DCPSJNIHandler_jniDeleteDataWriter
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_opensplice_dds_dcps_jni_DCPSJNIHandler
 * Method:    jniCreateDataReader
 * Signature: (Lorg/opensplice/dds/dcps/Subscriber;Lorg/opensplice/dds/dcps/TopicDescription;Lorg/opensplice/dds/dcps/policy/DataReaderQos;Lorg/opensplice/dds/dcps/DataReaderListener;)Lorg/opensplice/dds/dcps/DataReader;
 */
JNIEXPORT jobject JNICALL Java_org_opensplice_dds_dcps_jni_DCPSJNIHandler_jniCreateDataReader
  (JNIEnv *, jobject, jobject, jobject, jobject, jobject);

/*
 * Class:     org_opensplice_dds_dcps_jni_DCPSJNIHandler
 * Method:    jniDeleteDataReader
 * Signature: (Lorg/opensplice/dds/dcps/DataReader;)I
 */
JNIEXPORT jint JNICALL Java_org_opensplice_dds_dcps_jni_DCPSJNIHandler_jniDeleteDataReader
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_opensplice_dds_dcps_jni_DCPSJNIHandler
 * Method:    jniDeleteParticipantEntities
 * Signature: (Lorg/opensplice/dds/dcps/DomainParticipant;)I
 */
JNIEXPORT jint JNICALL Java_org_opensplice_dds_dcps_jni_DCPSJNIHandler_jniDeleteParticipantEntities
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_opensplice_dds_dcps_jni_DCPSJNIHandler
 * Method:    jniReaderRead
 * Signature: (Lorg/opensplice/dds/dcps/DataReader;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_opensplice_dds_dcps_jni_DCPSJNIHandler_jniReaderRead
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_opensplice_dds_dcps_jni_DCPSJNIHandler
 * Method:    jniReaderTake
 * Signature: (Lorg/opensplice/dds/dcps/DataReader;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_opensplice_dds_dcps_jni_DCPSJNIHandler_jniReaderTake
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_opensplice_dds_dcps_jni_DCPSJNIHandler
 * Method:    jniWriterWrite
 * Signature: (Lorg/opensplice/dds/dcps/DataWriter;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_opensplice_dds_dcps_jni_DCPSJNIHandler_jniWriterWrite
  (JNIEnv *, jobject, jobject, jstring);

/*
 * Class:     org_opensplice_dds_dcps_jni_DCPSJNIHandler
 * Method:    jniCreateQueryCondition
 * Signature: (Lorg/opensplice/dds/dcps/DataReader;Ljava/lang/String;[Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_opensplice_dds_dcps_jni_DCPSJNIHandler_jniCreateQueryCondition
  (JNIEnv *, jobject, jobject, jstring, jobjectArray);

#ifdef __cplusplus
}
#endif
#endif
