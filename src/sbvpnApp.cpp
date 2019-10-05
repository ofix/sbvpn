/***************************************************************
 * Name:      sbvpnApp.cpp
 * Purpose:   Code for Application Class
 * Author:    ofix ()
 * Created:   2019-10-05
 * Copyright: ofix ()
 * License:
 **************************************************************/

#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "sbvpnApp.h"
#include "sbvpnMain.h"
#include "Shell.h"

IMPLEMENT_APP(sbvpnApp);

bool sbvpnApp::OnInit()
{
    Shell* pShell = new Shell();
    pShell->Config();
    sbvpnDialog* dlg = new sbvpnDialog(0L);
    dlg->SetIcon(wxICON(aaaa)); // To Set App Icon
    dlg->Show();
    return true;
}
