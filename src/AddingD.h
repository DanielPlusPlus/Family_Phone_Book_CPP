#ifndef ADDINGD_H
#define ADDINGD_H
#include "Library.h"

//(*Headers(AddingD)
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)

class AddingD: public wxDialog
{
	public:

		AddingD(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~AddingD();
		//(*Declarations(AddingD)
		wxButton* Button1;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		wxStaticText* StaticText3;
		wxStaticText* StaticText4;
		wxStaticText* StaticText5;
		wxStaticText* StaticText6;
		wxStaticText* StaticText7;
		wxStaticText* StaticText8;
		wxStaticText* StaticText9;
		wxTextCtrl* CityV;
		wxTextCtrl* HouseNumberV;
		wxTextCtrl* LastNameV;
		wxTextCtrl* NameV;
		wxTextCtrl* PhoneNumberV;
		wxTextCtrl* PhotoPathV;
		wxTextCtrl* PostcodeV;
		wxTextCtrl* RelationshipV;
		wxTextCtrl* StreetNameV;
		//*)
        PersonWx GetResult() const {
            return result;
        };
	protected:

		//(*Identifiers(AddingD)
		static const long ID_STATICTEXT1;
		static const long ID_TEXTCTRL1;
		static const long ID_STATICTEXT2;
		static const long ID_TEXTCTRL2;
		static const long ID_STATICTEXT3;
		static const long ID_TEXTCTRL3;
		static const long ID_STATICTEXT4;
		static const long ID_TEXTCTRL4;
		static const long ID_STATICTEXT5;
		static const long ID_TEXTCTRL5;
		static const long ID_STATICTEXT6;
		static const long ID_TEXTCTRL6;
		static const long ID_STATICTEXT7;
		static const long ID_TEXTCTRL7;
		static const long ID_STATICTEXT8;
		static const long ID_TEXTCTRL8;
		static const long ID_STATICTEXT9;
		static const long ID_TEXTCTRL9;
		static const long ID_BUTTON1;
		//*)

	private:

		//(*Handlers(AddingD)
		void AddingOK(wxCommandEvent& event);
		//*)
        PersonWx result;
		DECLARE_EVENT_TABLE()
};

#endif
