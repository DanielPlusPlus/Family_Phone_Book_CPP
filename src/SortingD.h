#ifndef SORTINGD_H
#define SORTINGD_H
#include "Library.h"

//(*Headers(SortingD)
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
//*)

class SortingD: public wxDialog
{
	public:

		SortingD(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~SortingD();

		//(*Declarations(SortingD)
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
		//*)
        short GetResult() const {
            return result;
        };
	protected:

		//(*Identifiers(SortingD)
		static const long ID_STATICTEXT1;
		static const long ID_BUTTON1;
		static const long ID_STATICTEXT2;
		static const long ID_BUTTON2;
		static const long ID_STATICTEXT3;
		static const long ID_BUTTON3;
		static const long ID_STATICTEXT4;
		static const long ID_BUTTON4;
		static const long ID_STATICTEXT5;
		static const long ID_BUTTON5;
		static const long ID_STATICTEXT6;
		static const long ID_BUTTON6;
		static const long ID_STATICTEXT7;
		static const long ID_BUTTON7;
		static const long ID_STATICTEXT8;
		static const long ID_BUTTON8;
		static const long ID_STATICTEXT9;
		static const long ID_BUTTON9;
		//*)

	private:

		//(*Handlers(SortingD)
		void SortingID(wxCommandEvent& event);
		void SortingName(wxCommandEvent& event);
		void SortingLastName(wxCommandEvent& event);
		void SortingStreetName(wxCommandEvent& event);
		void SortingHouseNumber(wxCommandEvent& event);
		void SortingPostcode(wxCommandEvent& event);
		void SortingCity(wxCommandEvent& event);
		void SortingPhoneNumber(wxCommandEvent& event);
		void SortingRelationship(wxCommandEvent& event);
		//*)
        short result;
		DECLARE_EVENT_TABLE()
};

#endif
