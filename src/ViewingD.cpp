#include "ViewingD.h"

//(*InternalHeaders(ViewingD)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(ViewingD)
const long ViewingD::ID_STATICTEXT1 = wxNewId();
const long ViewingD::ID_TEXTCTRL1 = wxNewId();
const long ViewingD::ID_BUTTON1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(ViewingD,wxDialog)
	//(*EventTable(ViewingD)
	//*)
END_EVENT_TABLE()

ViewingD::ViewingD(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(ViewingD)
	wxBoxSizer* BoxSizer1;
	wxBoxSizer* BoxSizer2;
	wxBoxSizer* BoxSizer3;
	wxBoxSizer* BoxSizer4;

	Create(parent, id, _("View Photo by ID"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER, _T("id"));
	SetClientSize(wxDefaultSize);
	Move(wxDefaultPosition);
	SetBackgroundColour(wxColour(255,255,128));
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Person\'s ID:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	BoxSizer2->Add(StaticText1, 1, wxALL|wxEXPAND, 5);
	BoxSizer1->Add(BoxSizer2, 1, wxALL|wxEXPAND, 5);
	BoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL1, _("1"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	BoxSizer3->Add(TextCtrl1, 1, wxALL|wxEXPAND, 5);
	BoxSizer1->Add(BoxSizer3, 1, wxALL|wxEXPAND, 5);
	BoxSizer4 = new wxBoxSizer(wxHORIZONTAL);
	Button1 = new wxButton(this, ID_BUTTON1, _("OK"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	BoxSizer4->Add(Button1, 1, wxALL|wxEXPAND, 5);
	BoxSizer1->Add(BoxSizer4, 1, wxALL|wxEXPAND, 5);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);
	Center();

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ViewingD::OnButton1Click);
	//*)
}

ViewingD::~ViewingD()
{
	//(*Destroy(ViewingD)
	//*)
}


void ViewingD::OnButton1Click(wxCommandEvent& event)
{
    PersonWx p;
    p.choose="1";
    p.id=TextCtrl1->GetValue();
    result=p;
    EndModal(wxID_OK);
}
