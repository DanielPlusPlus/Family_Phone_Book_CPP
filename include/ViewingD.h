#ifndef VIEWINGD_H
#define VIEWINGD_H

//(*Headers(ViewingD)
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)

#include "Library.h"
class ViewingD: public wxDialog
{
	public:

		ViewingD(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~ViewingD();

		//(*Declarations(ViewingD)
		wxButton* Button1;
		wxStaticText* StaticText1;
		wxTextCtrl* TextCtrl1;
		//*)

		PersonWx GetResult() const{
		    return result;
		};

	protected:

		//(*Identifiers(ViewingD)
		static const long ID_STATICTEXT1;
		static const long ID_TEXTCTRL1;
		static const long ID_BUTTON1;
		//*)

	private:

		//(*Handlers(ViewingD)
		void OnButton1Click(wxCommandEvent& event);
		//*)

		PersonWx result;

		DECLARE_EVENT_TABLE()
};

#endif
