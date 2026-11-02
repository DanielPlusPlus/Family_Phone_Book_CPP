#ifndef CREATEUSERD_H
#define CREATEUSERD_H

//(*Headers(CreateUserD)
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)

class CreateUserD: public wxDialog
{
	public:

		CreateUserD(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~CreateUserD();

		//(*Declarations(CreateUserD)
		wxButton* Button1;
		wxStaticText* LoginText2;
		wxStaticText* PasswordText2;
		wxTextCtrl* LoginValue2;
		wxTextCtrl* PasswordValue2;
		//*)

	protected:

		//(*Identifiers(CreateUserD)
		static const long ID_STATICTEXT1;
		static const long LoginID2;
		static const long ID_STATICTEXT2;
		static const long PasswodID2;
		static const long ID_BUTTON1;
		//*)

	private:

		//(*Handlers(CreateUserD)
		void OnRegisterButton(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
