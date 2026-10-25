#include "PhotoD.h"

//(*InternalHeaders(PhotoD)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(PhotoD)
const long PhotoD::PhotoBitmap = wxNewId();
//*)

BEGIN_EVENT_TABLE(PhotoD,wxDialog)
	//(*EventTable(PhotoD)
	//*)
END_EVENT_TABLE()

PhotoD::PhotoD(PersonWx per, wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(PhotoD)
	Create(parent, id, _("Photo"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER, _T("id"));
	SetClientSize(wxSize(512,512));
	Move(wxDefaultPosition);
	SetBackgroundColour(wxColour(255,255,128));
	StaticBitmap1 = new wxStaticBitmap(this, PhotoBitmap, wxNullBitmap, wxPoint(272,296), wxSize(512,512), 0, _T("PhotoBitmap"));
	Center();
	//*)
	photo=wxImage(per.photo_path);
	photo.Rescale(512,512);
	StaticBitmap1->SetBitmap(photo);

}

PhotoD::~PhotoD()
{
	//(*Destroy(PhotoD)
	//*)
}

