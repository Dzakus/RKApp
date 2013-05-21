/*
 * Copyright (C) 2009 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */
#include <string.h>			//������������ ���� ����������� ���������� ����� ��, ���������� ������� ��� ������ � ����-���������������� ��������
#include <stdio.h>			//���������� ����������� ��������, ��������� � ���������� ������� � �����, ������������ ��� ��������� �������� ������������ ����� � ������.
#include <stdlib.h>			//�������� � ���� �������, ������������ ���������� ������, �������� �������� ���������� ���������, �������������� ����� � ������
#include <fcntl.h>			//define the following requests and arguments for use by the functions fcntl() and open().
#include <jni.h>			//���������� ��� ����������� ��� ������ JNI ��������.
#include <android/log.h>	//log
#include <errno.h>			//���������� ���������� ������� ��� ������������� ������ ����� �� ���
#include <libusb.h>			//������������ ���� ���������� libusb
#include <pthread.h>  		//POSIX Threads, ���������� ������.
#include <math.h>			//�������������� ����������
#include <libfreenect.h>	//������������ ���� ���������� libfreenect
#include <assert.h>			//� ������� ����������� ������ ������������� ����� � assert().
							//������ ������ ��������� ����������, ������� ����� �������������� ��� �������� ��������� ���������� ����������.



#define DEVICE_DESC_LENGTH		18
#define  LOG_TAG    "rkapp"
#define  LOGD(...)  __android_log_print(ANDROID_LOG_DEBUG,LOG_TAG,__VA_ARGS__)

//extern struct libusb_context *usbi_context;

jstring
Java_com_rkapp_RKAppActivity_stringFromJNI( JNIEnv* env,
                                                  jobject thiz )
{
    return (*env)->NewStringUTF(env, "Hello from JNI !");
}

void
Java_com_rkapp_RKAppActivity_openUsb( JNIEnv* env,
                                                  jobject thiz,
                                                  jint fd )
{
	libusb_context *usbi_context;
	int r = libusb_init(&usbi_context); //initialize a usb library session
	if(r < 0) {
		LOGD("Init Error %d", r); //there was an error
					return;
		}

	LOGD("got r: %d from fd %d", r, fd);


	return;
}
