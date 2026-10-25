#include "UsersListD.h"

//(*InternalHeaders(UsersListD)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(UsersListD)
const long UsersListD::UsersListID = wxNewId();
//*)

BEGIN_EVENT_TABLE(UsersListD,wxDialog)
	//(*EventTable(UsersListD)
	//*)
END_EVENT_TABLE()

UsersListD::UsersListD(wxWindow* parent)
{
	//(*Initialize(UsersListD)
	wxBoxSizer* BoxSizer1;

	Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("wxID_ANY"));
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	UsersListV = new wxListView(this, UsersListID, wxDefaultPosition, wxDefaultSize, wxLC_REPORT, wxDefaultValidator, _T("UsersListID"));
	BoxSizer1->Add(UsersListV, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);
	//*)
}


    //UsersListV->InsertColumn(0, "ID");
    //UsersListV->InsertColumn(1, "Login");

UsersListD::~UsersListD()
{
	//(*Destroy(UsersListD)
	//*)
}

