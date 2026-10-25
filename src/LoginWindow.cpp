#include "LoginWindow.h"
#include<string.h>
#include "Library.h"
#include "Family_Phone_BookMain.h"
#include "CreateUserD.h"
#include "DeleteUserD.h"

//(*InternalHeaders(LoginWindow)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(LoginWindow)
const long LoginWindow::ID_LISTCTRL1 = wxNewId();
const long LoginWindow::ID_STATICTEXT1 = wxNewId();
const long LoginWindow::LoginID = wxNewId();
const long LoginWindow::ID_STATICTEXT2 = wxNewId();
const long LoginWindow::PasswordID = wxNewId();
const long LoginWindow::ID_BUTTON1 = wxNewId();
const long LoginWindow::ID_BUTTON3 = wxNewId();
const long LoginWindow::ID_BUTTON2 = wxNewId();
//*)


using namespace std;
bool ck = true;
bool error = true;
vector<Account> ACCdb;


BEGIN_EVENT_TABLE(LoginWindow,wxDialog)
	//(*EventTable(LoginWindow)
	//*)
END_EVENT_TABLE()

LoginWindow::LoginWindow(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(LoginWindow)
	wxBoxSizer* BoxSizer1;
	wxBoxSizer* BoxSizer2;
	wxBoxSizer* BoxSizer3;
	wxBoxSizer* BoxSizer4;
	wxBoxSizer* BoxSizer5;
	wxBoxSizer* BoxSizer6;
	wxBoxSizer* BoxSizer7;

	Create(parent, wxID_ANY, _("Logging into Family Phone Book"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("wxID_ANY"));
	SetBackgroundColour(wxColour(255,255,128));
	BoxSizer1 = new wxBoxSizer(wxVERTICAL);
	BoxSizer2 = new wxBoxSizer(wxVERTICAL);
	UsersListV = new wxListCtrl(this, ID_LISTCTRL1, wxDefaultPosition, wxDefaultSize, wxLC_REPORT, wxDefaultValidator, _T("ID_LISTCTRL1"));
	BoxSizer2->Add(UsersListV, 1, wxALL|wxEXPAND, 5);
	BoxSizer1->Add(BoxSizer2, 1, wxALL|wxEXPAND, 5);
	BoxSizer3 = new wxBoxSizer(wxVERTICAL);
	BoxSizer4 = new wxBoxSizer(wxHORIZONTAL);
	LoginText = new wxStaticText(this, ID_STATICTEXT1, _("Login"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	BoxSizer4->Add(LoginText, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	LoginValue = new wxTextCtrl(this, LoginID, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("LoginID"));
	BoxSizer4->Add(LoginValue, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer3->Add(BoxSizer4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer5 = new wxBoxSizer(wxHORIZONTAL);
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Password"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	BoxSizer5->Add(StaticText2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	PasswordValue = new wxTextCtrl(this, PasswordID, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PASSWORD, wxDefaultValidator, _T("PasswordID"));
	BoxSizer5->Add(PasswordValue, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer3->Add(BoxSizer5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer6 = new wxBoxSizer(wxHORIZONTAL);
	Button1 = new wxButton(this, ID_BUTTON1, _("Sign In"), wxDefaultPosition, wxSize(152,30), 0, wxDefaultValidator, _T("ID_BUTTON1"));
	BoxSizer6->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer3->Add(BoxSizer6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer7 = new wxBoxSizer(wxHORIZONTAL);
	Button3 = new wxButton(this, ID_BUTTON3, _("Delete User"), wxDefaultPosition, wxSize(152,30), 0, wxDefaultValidator, _T("ID_BUTTON3"));
	BoxSizer7->Add(Button3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button2 = new wxButton(this, ID_BUTTON2, _("CreateUser"), wxDefaultPosition, wxSize(152,30), 0, wxDefaultValidator, _T("ID_BUTTON2"));
	BoxSizer7->Add(Button2, 1, wxALL, 5);
	BoxSizer3->Add(BoxSizer7, 1, wxSHAPED, 5);
	BoxSizer1->Add(BoxSizer3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);
	Center();

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&LoginWindow::SignInButton);
	Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&LoginWindow::DeleteUserButton);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&LoginWindow::CreateUserButton);
	//*)


	if(ck)
    {
    string accPath = "accounts.txt";
    readAccount(accPath,ACCdb);
    }

    UsersListV->InsertColumn(0, "Accounts");
    UsersListV->SetColumnWidth(0,310);
    long counter=1;

    for(long long int i=(ACCdb.size()-1);i>=0;i--)
    {
        counter=UsersListV->InsertItem(0,"1");
        AccountWx p = UserConvertToWx(i, ACCdb);
        UsersListV->SetItem(counter, 0, p.login, -1);

    }
}

LoginWindow::~LoginWindow()
{
	//(*Destroy(LoginWindow)
	//*)
}

void LoginWindow::SignInButton(wxCommandEvent& event)
{
    wxString loginW(LoginValue->GetValue());
    wxString passwordW(PasswordValue->GetValue());
    string login = string(loginW.mb_str());
    string password = string(passwordW.mb_str());

    for(unsigned int i=0;i<ACCdb.size();i++)
    {
       if(ACCdb[i].login == login && ACCdb[i].password == password)
       {
            wxMessageBox("Welcome!");
            error = false;
            pathtoFile = ACCdb[i].file;
            EndModal(wxID_OK);
       }
    }

    if(error)
    {
         wxMessageBox("Incorrect Values");
    }


}

void LoginWindow::CreateUserButton(wxCommandEvent& event)
{
    CreateUserD dlg(this);
    int res = dlg.ShowModal();
    ACCdb.clear();
    string accPath = "accounts.txt";
    readAccount(accPath,ACCdb);
    UsersListV->ClearAll();
    UsersListV->InsertColumn(0, "Login");
    UsersListV->SetColumnWidth(0,250);
    long counter=1;

    for(long long int i=(ACCdb.size()-1);i>=0;i--)
    {
        counter=UsersListV->InsertItem(0,"1");
        AccountWx p = UserConvertToWx(i, ACCdb);
        UsersListV->SetItem(counter, 0, p.login, -1);
    }




}

void LoginWindow::DeleteUserButton(wxCommandEvent& event)
{
    DeleteUserD dlg(this);
    int res = dlg.ShowModal();

    ACCdb.clear();
    string accPath = "accounts.txt";
    readAccount(accPath,ACCdb);
    UsersListV->ClearAll();
    UsersListV->InsertColumn(0, "Login");
    UsersListV->SetColumnWidth(0,250);
    long counter=1;

    for(long long int i=(ACCdb.size()-1);i>=0;i--)
    {
        counter=UsersListV->InsertItem(0,"1");
        AccountWx p = UserConvertToWx(i, ACCdb);
        UsersListV->SetItem(counter, 0, p.login, -1);
    }


}
