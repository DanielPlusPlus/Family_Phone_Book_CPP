#include "UserListD.h"

//(*InternalHeaders(UserListD)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(UserListD)
const long UserListD::userListWindowID = wxNewId();
//*)

BEGIN_EVENT_TABLE(UserListD,wxDialog)
	//(*EventTable(UserListD)
	//*)
END_EVENT_TABLE()

UserListD::UserListD(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(UserListD)
	wxBoxSizer* BoxSizer1;

	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxDefaultSize);
	Move(wxDefaultPosition);
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	userListWindow = new wxListCtrl(this, userListWindowID, wxDefaultPosition, wxDefaultSize, wxLC_REPORT, wxDefaultValidator, _T("userListWindowID"));
	BoxSizer1->Add(userListWindow, 1, wxALL|wxEXPAND, 5);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);
	userListWindow->InsertColumn(0, _("ID"));
	userListWindow->InsertColumn(1, _("Login"));
	//*)
}

UserListD::~UserListD()
{
	//(*Destroy(UserListD)
	//*)
}


