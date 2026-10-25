#include "CreateUserD.h"

//(*InternalHeaders(CreateUserD)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(CreateUserD)
const long CreateUserD::ID_STATICTEXT1 = wxNewId();
const long CreateUserD::LoginID2 = wxNewId();
const long CreateUserD::ID_STATICTEXT2 = wxNewId();
const long CreateUserD::PasswodID2 = wxNewId();
const long CreateUserD::ID_BUTTON1 = wxNewId();
//*)

#include<string.h>
#include "Library.h"
using namespace std;


BEGIN_EVENT_TABLE(CreateUserD,wxDialog)
	//(*EventTable(CreateUserD)
	//*)
END_EVENT_TABLE()

CreateUserD::CreateUserD(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(CreateUserD)
	wxBoxSizer* BoxSizer1;
	wxBoxSizer* BoxSizer2;
	wxBoxSizer* BoxSizer3;

	Create(parent, wxID_ANY, _("Creating new user"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("wxID_ANY"));
	SetBackgroundColour(wxColour(255,255,128));
	BoxSizer1 = new wxBoxSizer(wxVERTICAL);
	BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
	LoginText2 = new wxStaticText(this, ID_STATICTEXT1, _("Login"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	BoxSizer2->Add(LoginText2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	LoginValue2 = new wxTextCtrl(this, LoginID2, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("LoginID2"));
	BoxSizer2->Add(LoginValue2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer1->Add(BoxSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	PasswordText2 = new wxStaticText(this, ID_STATICTEXT2, _("Password"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	BoxSizer3->Add(PasswordText2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	PasswordValue2 = new wxTextCtrl(this, PasswodID2, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PASSWORD, wxDefaultValidator, _T("PasswodID2"));
	BoxSizer3->Add(PasswordValue2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer1->Add(BoxSizer3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button1 = new wxButton(this, ID_BUTTON1, _("Register"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	BoxSizer1->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);
	Center();

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CreateUserD::OnRegisterButton);
	//*)
}

CreateUserD::~CreateUserD()
{
	//(*Destroy(CreateUserD)
	//*)
}


void CreateUserD::OnRegisterButton(wxCommandEvent& event)
{

    wxString loginW(LoginValue2->GetValue());
    wxString passwordW(PasswordValue2->GetValue());
    string login = string(loginW.mb_str());
    string password = string(passwordW.mb_str());

    if(login.empty() || password.empty())
    {
        wxMessageBox("Incorrect Values");
    }

    else
    {
        string f = "accounts.txt";
        ofstream file;
        file.open(f,ios::out | ios::app);
        Account tmp;
        string namefile = login +".txt";
        file<<"\n"<<login<<";"<<password<<";"<<namefile;
        ofstream CreateFile(namefile);
        CreateFile.close();
        EndModal(wxID_OK);
    }


}
