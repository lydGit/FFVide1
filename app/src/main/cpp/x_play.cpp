//
// Created by lyd on 2019/6/10 0010.
//
#include <jni.h>
#include "log/Utils.h"
#include <string.h>

extern "C" {
#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
#include <libavcodec/jni.h>
#include <libswscale/swscale.h>
#include <libswresample/swresample.h>
}

extern "C"
JNIEXPORT void JNICALL
Java_com_lyd_ffvide1_IHandler_play(JNIEnv *env, jobject instance, jstring url_, jobject surface) {
    const char *url = env->GetStringUTFChars(url_, 0);

    Utils::logE("我是Tag", "我是msg");
    //初始化解封装
    av_register_all();
    //初始化网络
    avformat_network_init();
    //注册了和编解码器有关的组件：硬件加速器，解码器，编码器，Parser，Bitstream Filter
    avcodec_register_all();
    //打开文件
    AVFormatContext *mContext = NULL;
    //char path[] = "/sdcard/video.flv";
    //打开输入流并读取头文件信息
    int re = avformat_open_input(&mContext, url, 0, 0);
    if (re != 0) {
        Utils::logE("lyd", " avformat_find_stream_info 失败");
    }
    Utils::logE("lyd", join"duration = " + mContext->duration + "nb_streams = " + mContext->nb_streams);
    env->ReleaseStringUTFChars(url_, url);
}