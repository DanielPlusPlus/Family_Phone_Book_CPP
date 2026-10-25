#ifndef USERSLIST_H
#define USERSLIST_H

//(*Headers(UsersList)
#include <wx/dialog.h>
#include <wx/listctrl.h>
#include <wx/sizer.h>
//*)

class UsersList: public wxDialog
{
	public:

		UsersList(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~UsersList();

		//(*Declarations(UsersList)
		wxListCtrl* ListCtrl1;
		//*)

	protected:

		//(*Identifiers(UsersList)
		static const long ID_LISTCTRL1;
		//*)

	private:

		//(*Handlers(UsersList)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
