#ifndef PHOTOD_H
#define PHOTOD_H

//(*Headers(PhotoD)
#include <wx/dialog.h>
#include <wx/statbmp.h>
//*)

#include <wx/image.h>

#include "Library.h"

class PhotoD: public wxDialog
{
	public:

		PhotoD(PersonWx per, wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~PhotoD();

		//(*Declarations(PhotoD)
		wxStaticBitmap* StaticBitmap1;
		//*)

		wxImage photo;

	protected:

		//(*Identifiers(PhotoD)
		static const long PhotoBitmap;
		//*)

	private:

		//(*Handlers(PhotoD)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
