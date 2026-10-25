#ifndef DELETEUSERD_H
#define DELETEUSERD_H

#include "Library.h"
//(*Headers(DeleteUserD)
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)

class DeleteUserD: public wxDialog
{
	public:
        vector<Account> AccDel;
        string accPath = "accounts.txt";

		DeleteUserD(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~DeleteUserD();

		//(*Declarations(DeleteUserD)
		wxButton* Button1;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		wxTextCtrl* LoginValue;
		wxTextCtrl* PasswordValue;
		//*)

	protected:

		//(*Identifiers(DeleteUserD)
		static const long ID_STATICTEXT1;
		static const long ID_TEXTCTRL1;
		static const long ID_STATICTEXT2;
		static const long ID_TEXTCTRL2;
		static const long ID_BUTTON1;
		//*)

	private:

		//(*Handlers(DeleteUserD)
		void DeleteButton(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
