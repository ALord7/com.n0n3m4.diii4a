/*
 Copyright (C) 2012 n0n3m4

 This file contains some code from kwaak3:
 Copyright (C) 2010 Roderick Colenbrander

 This file is part of Q3E.

 Q3E is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 2 of the License, or
 (at your option) any later version.

 Q3E is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with Q3E.  If not, see <http://www.gnu.org/licenses/>.
 */

package com.n0n3m4.q3e;

import android.content.Context;
import android.content.SharedPreferences;
import android.graphics.PixelFormat;
import android.os.Build;
import android.preference.PreferenceManager;
import android.util.Log;
import android.view.Surface;
import android.view.SurfaceHolder;
import android.view.SurfaceView;

import com.n0n3m4.q3e.event.Q3EQuitEvent;
import com.n0n3m4.q3e.karin.KLog;
import com.n0n3m4.q3e.karin.KOnceRunnable;

import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;

class Q3EView extends SurfaceView implements SurfaceHolder.Callback
{
    private boolean mInit = false;

	public Q3EView(Context context)
    {
		super(context);

        getHolder().setFormat(Q3EMain.gameHelper.GetPixelFormat());

        getHolder().addCallback(this);

        getHolder().setKeepScreenOn(true);
		setFocusable(false);
		setFocusableInTouchMode(false);
	}
    
    public void PushUIEvent(Runnable event)
    {
        post(event);
    }

    @Override
    public void surfaceCreated(SurfaceHolder holder) {
        if(mInit)
        {
            Surface surface = getHolder().getSurface();
            Q3EJNI.SetSurface(surface);
            Q3E.surface = surface;
        }
    }

    @Override
    public void surfaceChanged(SurfaceHolder holder, int format, int w, int h) {
        if(!mInit)
        {
            KLog.i(Q3EGlobals.CONST_Q3E_LOG_TAG, "Game view: %d x %d", w, h);
            mInit = Q3EMain.gameHelper.Start(holder.getSurface(), w, h);

            getHolder().setFixedSize(w, h);
            Q3E.activity.SetupGameViewSize(getWidth(), getHeight(), true);
        }
    }

    @Override
    public void surfaceDestroyed(SurfaceHolder holder)
    {
        if(mInit)
        {
            Q3EJNI.SetSurface(null);
            Q3E.surface = null;
        }
		/*
        super.surfaceDestroyed(holder);*/
    }
}
