/***************************************************************
 * Name:      sbvpnMain.h
 * Purpose:   Defines Application Frame
 * Author:    ofix ()
 * Created:   2019-10-05
 * Copyright: ofix ()
 * License:
 **************************************************************/

#ifndef SBVPNMAIN_H
#define SBVPNMAIN_H



#include "sbvpnApp.h"



#include "GUIDialog.h"

class sbvpnDialog: public GUIDialog
{
    public:
        sbvpnDialog(wxDialog *dlg);
        ~sbvpnDialog();
    private:
        virtual void OnClose(wxCloseEvent& event);
        virtual void OnQuit(wxCommandEvent& event);
        virtual void OnAbout(wxCommandEvent& event);
};
#endif // SBVPNMAIN_H
