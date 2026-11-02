#ifndef EDITINGD_H
#define EDITINGD_H
#include "Library.h"

//(*Headers(EditingD)
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/panel.h>
#include <wx/sizer.h>
#include <wx/statline.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)

class EditingD: public wxDialog
{
	public:

		EditingD(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~EditingD();

		//(*Declarations(EditingD)
		wxButton* Button1;
		wxButton* Button2;
		wxButton* Button3;
		wxButton* Button4;
		wxButton* Button5;
		wxButton* Button6;
		wxButton* Button7;
		wxButton* Button8;
		wxButton* Button9;
		wxPanel* Panel1;
		wxStaticLine* StaticLine1;
		wxStaticLine* StaticLine2;
		wxStaticText* StaticText10;
		wxStaticText* StaticText11;
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
		wxTextCtrl* IdV;
		wxTextCtrl* LastNameV;
		wxTextCtrl* NameV;
		wxTextCtrl* PhoneNumberV;
		wxTextCtrl* PhotoV;
		wxTextCtrl* PostcodeV;
		wxTextCtrl* RelationshipV;
		wxTextCtrl* StreetNameV;
		//*)
        PersonWx GetResult() const {
            return result;
        };
	protected:

		//(*Identifiers(EditingD)
		static const long ID_STATICTEXT1;
		static const long ID_TEXTCTRL1;
		static const long ID_PANEL1;
		static const long ID_STATICLINE2;
		static const long ID_STATICTEXT2;
		static const long ID_STATICLINE1;
		static const long ID_STATICTEXT3;
		static const long ID_TEXTCTRL2;
		static const long ID_BUTTON1;
		static const long ID_STATICTEXT4;
		static const long ID_TEXTCTRL3;
		static const long ID_BUTTON2;
		static const long ID_STATICTEXT5;
		static const long ID_TEXTCTRL4;
		static const long ID_BUTTON3;
		static const long ID_STATICTEXT6;
		static const long ID_TEXTCTRL5;
		static const long ID_BUTTON5;
		static const long ID_STATICTEXT7;
		static const long ID_TEXTCTRL6;
		static const long ID_BUTTON6;
		static const long ID_STATICTEXT8;
		static const long ID_TEXTCTRL7;
		static const long ID_BUTTON7;
		static const long ID_STATICTEXT9;
		static const long ID_TEXTCTRL8;
		static const long ID_BUTTON8;
		static const long ID_STATICTEXT10;
		static const long ID_TEXTCTRL9;
		static const long ID_BUTTON9;
		static const long ID_STATICTEXT11;
		static const long ID_TEXTCTRL10;
		static const long ID_BUTTON4;
		//*)

	private:

		//(*Handlers(EditingD)
		void EditingName(wxCommandEvent& event);
		void EditingLastName(wxCommandEvent& event);
		void EditingStreetName(wxCommandEvent& event);
		void EditingHouseNumber(wxCommandEvent& event);
		void EditingPostcode(wxCommandEvent& event);
		void EditingCity(wxCommandEvent& event);
		void EditingPhoneNumber(wxCommandEvent& event);
		void EditingRelationship(wxCommandEvent& event);
		void EditingPhotoPath(wxCommandEvent& event);
		//*)
        PersonWx result;
		DECLARE_EVENT_TABLE()
};

#endif
