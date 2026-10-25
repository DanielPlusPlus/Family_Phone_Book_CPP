#ifndef USERSLISTD_H
#define USERSLISTD_H

//(*Headers(UsersListD)
#include <wx/dialog.h>
#include <wx/listctrl.h>
#include <wx/sizer.h>
//*)

class UsersListD: public wxDialog
{
	public:

		UsersListD(wxWindow* parent);
		virtual ~UsersListD();

		//(*Declarations(UsersListD)
		wxListView* UsersListV;
		//*)

	protected:

		//(*Identifiers(UsersListD)
		static const long UsersListID;
		//*)

	private:

		//(*Handlers(UsersListD)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
