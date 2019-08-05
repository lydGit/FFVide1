package com.lyd.ffvide1;

import android.content.Context;
import android.opengl.GLSurfaceView;
import android.util.AttributeSet;
import android.view.SurfaceHolder;

/**
 * @author lyd
 * @date 2019/6/6 0006 18:06
 * @desription
 */
public class XPlay extends GLSurfaceView implements Runnable, SurfaceHolder.Callback {

    private IHandler iHandler;

    public XPlay(Context context, AttributeSet attrs) {
        super(context, attrs);
        iHandler = new IHandler();
    }

    @Override
    public void run() {
//        Open("/sdcard/1080.mp4", getHolder().getSurface());
        iHandler.play("/sdcard/1080.mp4",getHolder().getSurface());
    }

    @Override
    public void surfaceCreated(SurfaceHolder holder) {
        new Thread(this).start();
    }

    @Override
    public void surfaceChanged(SurfaceHolder holder, int format, int w, int h) {
    }

    @Override
    public void surfaceDestroyed(SurfaceHolder holder) {
        super.surfaceDestroyed(holder);
    }

    public native void Open(String url, Object surface);

}
