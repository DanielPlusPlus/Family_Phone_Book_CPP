#ifndef FILTERINGD_H
#define FILTERINGD_H
#include "Library.h"

//(*Headers(FilteringD)
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)

class FilteringD: public wxDialog
{
	public:

		FilteringD(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~FilteringD();

		//(*Declarations(FilteringD)
		wxButton* Button1;
		wxButton* Button2;
		wxButton* Button3;
		wxButton* Button4;
		wxButton* Button5;
		wxButton* Button6;
		wxButton* Button7;
		wxButton* Button8;
		wxButton* Button9;
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
		wxTextCtrl* PostcodeV;
		wxTextCtrl* RelationshipV;
		wxTextCtrl* StreetNameV;
		//*)
        PersonWx GetResult() const {
            return result;
        };
	protected:

		//(*Identifiers(FilteringD)
		static const long ID_STATICTEXT1;
		static const long ID_TEXTCTRL1;
		static const long ID_BUTTON1;
		static const long ID_STATICTEXT2;
		static const long ID_TEXTCTRL2;
		static const long ID_BUTTON2;
		static const long ID_STATICTEXT3;
		static const long ID_TEXTCTRL3;
		static const long ID_BUTTON3;
		static const long ID_STATICTEXT4;
		static const long ID_TEXTCTRL4;
		static const long ID_BUTTON4;
		static const long ID_STATICTEXT5;
		static const long ID_TEXTCTRL5;
		static const long ID_BUTTON5;
		static const long ID_STATICTEXT6;
		static const long ID_TEXTCTRL6;
		static const long ID_BUTTON6;
		static const long ID_STATICTEXT7;
		static const long ID_TEXTCTRL7;
		static const long ID_BUTTON7;
		static const long ID_STATICTEXT8;
		static const long ID_TEXTCTRL8;
		static const long ID_BUTTON8;
		static const long ID_STATICTEXT9;
		static const long ID_TEXTCTRL9;
		static const long ID_BUTTON9;
		//*)

	private:

		//(*Handlers(FilteringD)
		void FilteringID(wxCommandEvent& event);
		void FilteringName(wxCommandEvent& event);
		void FilteringLastName(wxCommandEvent& event);
		void FilteringStreetName(wxCommandEvent& event);
		void FilteringHouseNumber(wxCommandEvent& event);
		void FilteringPostcode(wxCommandEvent& event);
		void FilteringCity(wxCommandEvent& event);
		void FilteringPhoneNumber(wxCommandEvent& event);
		void FilteringRelationship(wxCommandEvent& event);
		//*)
        PersonWx result;
		DECLARE_EVENT_TABLE()
};

#endif
