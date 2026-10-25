#ifndef USERLISTD_H
#define USERLISTD_H

//(*Headers(UserListD)
#include <wx/dialog.h>
#include <wx/listctrl.h>
#include <wx/sizer.h>
//*)

class UserListD: public wxDialog
{
	public:

		UserListD(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~UserListD();

		//(*Identifiers(UserListD)
		static const long userListWindowID;
		//*)
		//(*Declarations(UserListD)
		wxListCtrl* userListWindow;
		//*)

		//(*Handlers(UserListD)
		//*)

	private:



		DECLARE_EVENT_TABLE()
};

#endif
