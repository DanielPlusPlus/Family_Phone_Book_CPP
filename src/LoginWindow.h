#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H
#include<string.h>

//(*Headers(LoginWindow)
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/listctrl.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)

class LoginWindow: public wxDialog
{
	public:
	    std::string pathtoFile;
	    int cntp;
		LoginWindow(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~LoginWindow();

		//(*Declarations(LoginWindow)
		wxButton* Button1;
		wxButton* Button2;
		wxButton* Button3;
		wxListCtrl* UsersListV;
		wxStaticText* LoginText;
		wxStaticText* StaticText2;
		wxTextCtrl* LoginValue;
		wxTextCtrl* PasswordValue;
		//*)


	protected:

		//(*Identifiers(LoginWindow)
		static const long ID_LISTCTRL1;
		static const long ID_STATICTEXT1;
		static const long LoginID;
		static const long ID_STATICTEXT2;
		static const long PasswordID;
		static const long ID_BUTTON1;
		static const long ID_BUTTON3;
		static const long ID_BUTTON2;
		//*)

	private:

		//(*Handlers(LoginWindow)
		void SignInButton(wxCommandEvent& event);
		void CreateUserButton(wxCommandEvent& event);
		void DeleteUserButton(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
