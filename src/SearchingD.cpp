#include "SearchingD.h"

//(*InternalHeaders(SearchingD)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(SearchingD)
const long SearchingD::ID_STATICTEXT1 = wxNewId();
const long SearchingD::ID_TEXTCTRL1 = wxNewId();
const long SearchingD::ID_STATICTEXT2 = wxNewId();
const long SearchingD::ID_TEXTCTRL2 = wxNewId();
const long SearchingD::ID_BUTTON1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(SearchingD,wxDialog)
	//(*EventTable(SearchingD)
	//*)
END_EVENT_TABLE()

SearchingD::SearchingD(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(SearchingD)
	wxBoxSizer* BoxSizer1;
	wxBoxSizer* BoxSizer2;
	wxBoxSizer* BoxSizer3;
	wxBoxSizer* BoxSizer4;
	wxBoxSizer* BoxSizer5;
	wxBoxSizer* BoxSizer6;
	wxBoxSizer* BoxSizer7;
	wxBoxSizer* BoxSizer8;

	Create(parent, wxID_ANY, _("Searching person"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER, _T("wxID_ANY"));
	SetBackgroundColour(wxColour(255,255,128));
	BoxSizer1 = new wxBoxSizer(wxVERTICAL);
	BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer4 = new wxBoxSizer(wxHORIZONTAL);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Name:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	BoxSizer4->Add(StaticText1, 1, wxALL|wxEXPAND, 5);
	BoxSizer2->Add(BoxSizer4, 1, wxALL|wxEXPAND, 5);
	BoxSizer7 = new wxBoxSizer(wxHORIZONTAL);
	NameV = new wxTextCtrl(this, ID_TEXTCTRL1, _("John"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	BoxSizer7->Add(NameV, 1, wxALL|wxEXPAND, 5);
	BoxSizer2->Add(BoxSizer7, 1, wxALL|wxEXPAND, 5);
	BoxSizer1->Add(BoxSizer2, 1, wxALL|wxEXPAND, 5);
	BoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer5 = new wxBoxSizer(wxHORIZONTAL);
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Last Name:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	BoxSizer5->Add(StaticText2, 1, wxALL|wxEXPAND, 5);
	BoxSizer3->Add(BoxSizer5, 1, wxALL|wxEXPAND, 5);
	BoxSizer6 = new wxBoxSizer(wxHORIZONTAL);
	LastNameV = new wxTextCtrl(this, ID_TEXTCTRL2, _("Smith"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	BoxSizer6->Add(LastNameV, 1, wxALL|wxEXPAND, 5);
	BoxSizer3->Add(BoxSizer6, 1, wxALL|wxEXPAND, 5);
	BoxSizer1->Add(BoxSizer3, 1, wxALL|wxEXPAND, 5);
	BoxSizer8 = new wxBoxSizer(wxHORIZONTAL);
	Button1 = new wxButton(this, ID_BUTTON1, _("Search"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	BoxSizer8->Add(Button1, 1, wxALL|wxEXPAND, 5);
	BoxSizer1->Add(BoxSizer8, 1, wxALL|wxEXPAND, 5);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);
	Center();

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&SearchingD::SearchingOK);
	//*)
}

SearchingD::~SearchingD()
{
	//(*Destroy(SearchingD)
	//*)
}


void SearchingD::SearchingOK(wxCommandEvent& event)
{
    PersonWx p;
    p.choose="1";
    p.name=NameV->GetValue();
    p.last_name=LastNameV->GetValue();
    result=p;
    EndModal(wxID_OK);
}
