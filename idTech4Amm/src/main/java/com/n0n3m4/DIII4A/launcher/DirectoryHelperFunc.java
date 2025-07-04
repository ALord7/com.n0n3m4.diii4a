package com.n0n3m4.DIII4A.launcher;

import android.app.AlertDialog;
import android.content.DialogInterface;
import android.content.SharedPreferences;
import android.os.Bundle;
import android.preference.PreferenceManager;

import com.karin.idTech4Amm.R;
import com.karin.idTech4Amm.lib.ContextUtility;
import com.karin.idTech4Amm.misc.TextHelper;
import com.karin.idTech4Amm.sys.Game;
import com.karin.idTech4Amm.sys.GameManager;
import com.n0n3m4.DIII4A.GameLauncher;
import com.n0n3m4.q3e.Q3EInterface;
import com.n0n3m4.q3e.Q3EPreference;
import com.n0n3m4.q3e.Q3EUtils;
import com.n0n3m4.q3e.karin.KStr;

public final class DirectoryHelperFunc extends GameLauncherFunc
{
    public DirectoryHelperFunc(GameLauncher gameLauncher)
    {
        super(gameLauncher);
    }

    public void Reset()
    {
    }

    public void Start(Bundle data)
    {
        super.Start(data);
        Reset();

        run();
    }

    public void run()
    {
        AlertDialog.Builder builder = ContextUtility.CreateMessageDialogBuilder(m_gameLauncher, Tr(R.string.current_game_data_path), GetHelperText());
        builder.setNeutralButton(R.string.create_folders, new DialogInterface.OnClickListener() {
            @Override
            public void onClick(DialogInterface dialog, int which) {
                Callback();
            }
        });
        builder.create().show();
    }

    public CharSequence GetHelperText()
    {
        StringBuilder sb = new StringBuilder();
        final String endl = TextHelper.GetDialogMessageEndl();
        SharedPreferences preferences = PreferenceManager.getDefaultSharedPreferences(m_gameLauncher);
        final String DataDir = preferences.getString(Q3EPreference.pref_datapath, "");
        final boolean Standalone = preferences.getBoolean(Q3EPreference.GAME_STANDALONE_DIRECTORY, true);
        Game[] values = Game.values();
        for (String game : GameManager.Games())
        {
            String gameName = Tr(GameManager.GetGameNameTs(game));
            sb.append("------- ").append(gameName).append(" -------").append(endl);
            int i = 1;
            for (Game value : values)
            {
                if(!value.type.equals(game))
                    continue;

                String subdir = GetSubDir(value.type, Standalone);
                String name = value.GetName(m_gameLauncher);
                sb.append(" ").append(String.format("%2d", i)).append(". ").append(name).append(" -> ").append(endl);
                String gameDataDir = value.file;
                String path = KStr.AppendPath(DataDir, subdir, gameDataDir);

                String pathText = TextHelper.GenLinkText("file://" + path, path);
                sb.append(" * ").append(pathText).append(endl);

                if(Q3EInterface.IsSupportSecondaryDirGame(game))
                {
                    String appHome = Q3EUtils.GetAppInternalSearchPath(m_gameLauncher, null);
                    String path2 = KStr.AppendPath(appHome, subdir, gameDataDir);

                    if(!path2.equals(path))
                    {
                        String pathText2 = TextHelper.GenLinkText("file://" + path2, path2);
                        sb.append(" * ").append(pathText2).append(endl);
                    }
                }

                i++;
            }

            sb.append(endl);
        }
        return TextHelper.GetDialogMessage(sb.toString());
    }

    private String GetSubDir(String game, boolean standalone)
    {
        if(standalone || Q3EInterface.IsStandaloneGame(game))
            return Q3EInterface.GetGameStandaloneDirectory(game);
        else
            return null;
    }
}
