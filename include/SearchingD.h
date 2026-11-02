#ifndef SEARCHINGD_H
#define SEARCHINGD_H
#include "Library.h"

//(*Headers(SearchingD)
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)

class SearchingD: public wxDialog
{
	public:

		SearchingD(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~SearchingD();

		//(*Declarations(SearchingD)
		wxButton* Button1;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		wxTextCtrl* LastNameV;
		wxTextCtrl* NameV;
		//*)
        PersonWx GetResult() const {
            return result;
        };
	protected:

		//(*Identifiers(SearchingD)
		static const long ID_STATICTEXT1;
		static const long ID_TEXTCTRL1;
		static const long ID_STATICTEXT2;
		static const long ID_TEXTCTRL2;
		static const long ID_BUTTON1;
		//*)

	private:

		//(*Handlers(SearchingD)
		void SearchingOK(wxCommandEvent& event);
		//*)
        PersonWx result;
		DECLARE_EVENT_TABLE()
};

#endif
