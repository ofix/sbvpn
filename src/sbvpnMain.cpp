/***************************************************************
 * Name:      sbvpnMain.cpp
 * Purpose:   Code for Application Frame
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

#include "sbvpnMain.h"

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__WXMAC__)
        wxbuild << _T("-Mac");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}



sbvpnDialog::sbvpnDialog(wxDialog *dlg)
    : GUIDialog(dlg)
{
}

sbvpnDialog::~sbvpnDialog()
{
}

void sbvpnDialog::OnClose(wxCloseEvent &event)
{
    Destroy();
}

void sbvpnDialog::OnQuit(wxCommandEvent &event)
{
    Destroy();
}

void sbvpnDialog::OnAbout(wxCommandEvent &event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}
