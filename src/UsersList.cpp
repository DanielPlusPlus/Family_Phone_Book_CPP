#include "UsersList.h"

//(*InternalHeaders(UsersList)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(UsersList)
const long UsersList::ID_LISTCTRL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(UsersList,wxDialog)
	//(*EventTable(UsersList)
	//*)
END_EVENT_TABLE()

UsersList::UsersList(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(UsersList)
	wxBoxSizer* BoxSizer1;

	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxDefaultSize);
	Move(wxDefaultPosition);
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	ListCtrl1 = new wxListCtrl(this, ID_LISTCTRL1, wxDefaultPosition, wxDefaultSize, wxLC_LIST, wxDefaultValidator, _T("ID_LISTCTRL1"));
	BoxSizer1->Add(ListCtrl1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);
	//*)
}

UsersList::~UsersList()
{
	//(*Destroy(UsersList)
	//*)
}

