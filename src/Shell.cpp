#include "Shell.h"
#include <wx/textfile.h>
#include <wx/regex.h>
#include <iostream>

Shell::Shell(wxString strSbVpnConfigPath):m_strSbVpnConfigPath(strSbVpnConfigPath)
{
    //ctor
}

Shell::~Shell()
{
    //dtor
}

bool Shell::Config()
{
    wxTextFile configFile;
    wxString fileName = m_strSbVpnConfigPath;
    if(!configFile.Open(fileName)){
        return false;
    }
    wxRegEx re("(\\s+\"URL\"\\s+:\\s+\")([^\"]+)(\",)",wxRE_ADVANCED);
    size_t nLine = 0;
    while(nLine < configFile.GetLineCount()){
        wxString line = configFile.GetLine(nLine);
        if(re.Matches(line)){
            configFile.RemoveLine(nLine);
            wxString replaceText= "https://sb520.xyz/s/xYTTzd";
            re.ReplaceAll(&line, "\\1"+replaceText+"\\3");
            std::cout<<"******************"<<std::endl;
            std::cout<<line<<std::endl;
            configFile.InsertLine(line,nLine);
        }
        nLine++;
    }
    //configFile.Write();
    configFile.Close();
}
