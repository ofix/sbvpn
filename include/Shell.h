#ifndef SHELL_H
#define SHELL_H
#include <wx/string.h>

class Shell
{
    public:
        Shell(wxString strSbVpnConfigPath=wxT("D:/software/ssrWin/gui-config.json"));
        virtual ~Shell();
        bool Config();

    protected:
        wxString m_strSbVpnConfigPath;
};

#endif // SHELL_H
