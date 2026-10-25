#include "DeleteUserD.h"
#include "Library.h"

//(*InternalHeaders(DeleteUserD)
#include <wx/intl.h>
#include <wx/string.h>
//*)


//(*IdInit(DeleteUserD)
const long DeleteUserD::ID_STATICTEXT1 = wxNewId();
const long DeleteUserD::ID_TEXTCTRL1 = wxNewId();
const long DeleteUserD::ID_STATICTEXT2 = wxNewId();
const long DeleteUserD::ID_TEXTCTRL2 = wxNewId();
const long DeleteUserD::ID_BUTTON1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(DeleteUserD,wxDialog)
	//(*EventTable(DeleteUserD)
	//*)
END_EVENT_TABLE()

DeleteUserD::DeleteUserD(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{


	//(*Initialize(DeleteUserD)
	wxBoxSizer* BoxSizer1;
	wxBoxSizer* BoxSizer2;
	wxBoxSizer* BoxSizer3;

	Create(parent, id, _("Deleting existing user"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxDefaultSize);
	Move(wxDefaultPosition);
	SetBackgroundColour(wxColour(255,255,128));
	BoxSizer1 = new wxBoxSizer(wxVERTICAL);
	BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Login"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	BoxSizer2->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	LoginValue = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	BoxSizer2->Add(LoginValue, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer1->Add(BoxSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Password"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	BoxSizer3->Add(StaticText2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	PasswordValue = new wxTextCtrl(this, ID_TEXTCTRL2, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PASSWORD, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	BoxSizer3->Add(PasswordValue, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer1->Add(BoxSizer3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button1 = new wxButton(this, ID_BUTTON1, _("Delete"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	BoxSizer1->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);
	Center();

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&DeleteUserD::DeleteButton);
	//*)
}

DeleteUserD::~DeleteUserD()
{
	//(*Destroy(DeleteUserD)
	//*)
}


void DeleteUserD::DeleteButton(wxCommandEvent& event)
{
    readAccount(accPath,AccDel);
    wxString loginW(LoginValue->GetValue());
    wxString passwordW(PasswordValue->GetValue());
    string login = string(loginW.mb_str());
    string password = string(passwordW.mb_str());
    deleteAccount(AccDel, login, password);
    SaveAccDB(AccDel,accPath);
    EndModal(wxID_OK);
}
