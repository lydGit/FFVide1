package com.lyd.ffvide1;

/**
 * @author lyd
 * @date 2019/6/10 0010 20:10
 * @desription
 */
public class IHandler {

    static {
        System.loadLibrary("x_play");
    }


    /**
     * 播放视频
     * @param url     文件路径
     * @param surface Surface
     */
    public native void play(String url, Object surface);
}
