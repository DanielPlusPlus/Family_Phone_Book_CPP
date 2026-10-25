#ifndef DELETINGD_H
#define DELETINGD_H
#include "Library.h"

//(*Headers(DeletingD)
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/panel.h>
#include <wx/sizer.h>
#include <wx/statline.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)

class DeletingD: public wxDialog
{
	public:

		DeletingD(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~DeletingD();

		//(*Declarations(DeletingD)
		wxButton* Button1;
		wxButton* Button2;
		wxButton* Button3;
		wxPanel* Panel1;
		wxStaticLine* StaticLine1;
		wxStaticLine* StaticLine2;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		wxStaticText* StaticText3;
		wxStaticText* StaticText4;
		wxTextCtrl* FirstNameV;
		wxTextCtrl* IdV;
		wxTextCtrl* LastNameV;
		wxTextCtrl* PhoneNumberV;
		//*)
        PersonWx GetResult() const {
            return result;
        };
	protected:

		//(*Identifiers(DeletingD)
		static const long ID_STATICTEXT1;
		static const long ID_TEXTCTRL1;
		static const long ID_BUTTON1;
		static const long ID_STATICLINE1;
		static const long ID_STATICTEXT2;
		static const long ID_TEXTCTRL2;
		static const long ID_BUTTON2;
		static const long ID_STATICTEXT3;
		static const long ID_TEXTCTRL3;
		static const long ID_PANEL1;
		static const long ID_STATICLINE2;
		static const long ID_STATICTEXT4;
		static const long ID_TEXTCTRL4;
		static const long ID_BUTTON3;
		//*)

	private:

		//(*Handlers(DeletingD)
		void DeletingID(wxCommandEvent& event);
		void DeletingFNLN(wxCommandEvent& event);
		void DeletingPhone(wxCommandEvent& event);
		//*)
        PersonWx result;
		DECLARE_EVENT_TABLE()
};

#endif
