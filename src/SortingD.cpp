#include "SortingD.h"

//(*InternalHeaders(SortingD)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(SortingD)
const long SortingD::ID_STATICTEXT1 = wxNewId();
const long SortingD::ID_BUTTON1 = wxNewId();
const long SortingD::ID_STATICTEXT2 = wxNewId();
const long SortingD::ID_BUTTON2 = wxNewId();
const long SortingD::ID_STATICTEXT3 = wxNewId();
const long SortingD::ID_BUTTON3 = wxNewId();
const long SortingD::ID_STATICTEXT4 = wxNewId();
const long SortingD::ID_BUTTON4 = wxNewId();
const long SortingD::ID_STATICTEXT5 = wxNewId();
const long SortingD::ID_BUTTON5 = wxNewId();
const long SortingD::ID_STATICTEXT6 = wxNewId();
const long SortingD::ID_BUTTON6 = wxNewId();
const long SortingD::ID_STATICTEXT7 = wxNewId();
const long SortingD::ID_BUTTON7 = wxNewId();
const long SortingD::ID_STATICTEXT8 = wxNewId();
const long SortingD::ID_BUTTON8 = wxNewId();
const long SortingD::ID_STATICTEXT9 = wxNewId();
const long SortingD::ID_BUTTON9 = wxNewId();
//*)

BEGIN_EVENT_TABLE(SortingD,wxDialog)
	//(*EventTable(SortingD)
	//*)
END_EVENT_TABLE()

SortingD::SortingD(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(SortingD)
	wxBoxSizer* BoxSizer10;
	wxBoxSizer* BoxSizer11;
	wxBoxSizer* BoxSizer12;
	wxBoxSizer* BoxSizer13;
	wxBoxSizer* BoxSizer14;
	wxBoxSizer* BoxSizer15;
	wxBoxSizer* BoxSizer16;
	wxBoxSizer* BoxSizer17;
	wxBoxSizer* BoxSizer18;
	wxBoxSizer* BoxSizer19;
	wxBoxSizer* BoxSizer1;
	wxBoxSizer* BoxSizer20;
	wxBoxSizer* BoxSizer21;
	wxBoxSizer* BoxSizer22;
	wxBoxSizer* BoxSizer23;
	wxBoxSizer* BoxSizer24;
	wxBoxSizer* BoxSizer25;
	wxBoxSizer* BoxSizer26;
	wxBoxSizer* BoxSizer27;
	wxBoxSizer* BoxSizer28;
	wxBoxSizer* BoxSizer2;
	wxBoxSizer* BoxSizer3;
	wxBoxSizer* BoxSizer4;
	wxBoxSizer* BoxSizer5;
	wxBoxSizer* BoxSizer6;
	wxBoxSizer* BoxSizer7;
	wxBoxSizer* BoxSizer8;
	wxBoxSizer* BoxSizer9;

	Create(parent, wxID_ANY, _("Sorting persons"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER, _T("wxID_ANY"));
	SetBackgroundColour(wxColour(255,255,128));
	BoxSizer1 = new wxBoxSizer(wxVERTICAL);
	BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer11 = new wxBoxSizer(wxHORIZONTAL);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("By ID:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	BoxSizer11->Add(StaticText1, 1, wxALL|wxEXPAND, 5);
	BoxSizer2->Add(BoxSizer11, 1, wxALL|wxEXPAND, 5);
	BoxSizer12 = new wxBoxSizer(wxHORIZONTAL);
	Button1 = new wxButton(this, ID_BUTTON1, _("Sort"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	BoxSizer12->Add(Button1, 1, wxALL|wxEXPAND, 5);
	BoxSizer2->Add(BoxSizer12, 1, wxALL|wxEXPAND, 5);
	BoxSizer1->Add(BoxSizer2, 1, wxALL|wxEXPAND, 5);
	BoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer13 = new wxBoxSizer(wxHORIZONTAL);
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("By Name:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	BoxSizer13->Add(StaticText2, 1, wxALL|wxEXPAND, 5);
	BoxSizer3->Add(BoxSizer13, 1, wxALL|wxEXPAND, 5);
	BoxSizer14 = new wxBoxSizer(wxHORIZONTAL);
	Button2 = new wxButton(this, ID_BUTTON2, _("Sort"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	BoxSizer14->Add(Button2, 1, wxALL|wxEXPAND, 5);
	BoxSizer3->Add(BoxSizer14, 1, wxALL|wxEXPAND, 5);
	BoxSizer1->Add(BoxSizer3, 1, wxALL|wxEXPAND, 5);
	BoxSizer4 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer15 = new wxBoxSizer(wxHORIZONTAL);
	StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("By Last Name:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	BoxSizer15->Add(StaticText3, 1, wxALL|wxEXPAND, 5);
	BoxSizer4->Add(BoxSizer15, 1, wxALL|wxEXPAND, 5);
	BoxSizer16 = new wxBoxSizer(wxHORIZONTAL);
	Button3 = new wxButton(this, ID_BUTTON3, _("Sort"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
	BoxSizer16->Add(Button3, 1, wxALL|wxEXPAND, 5);
	BoxSizer4->Add(BoxSizer16, 1, wxALL|wxEXPAND, 5);
	BoxSizer1->Add(BoxSizer4, 1, wxALL|wxEXPAND, 5);
	BoxSizer5 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer17 = new wxBoxSizer(wxHORIZONTAL);
	StaticText4 = new wxStaticText(this, ID_STATICTEXT4, _("By Street Name:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	BoxSizer17->Add(StaticText4, 1, wxALL|wxEXPAND, 5);
	BoxSizer5->Add(BoxSizer17, 1, wxALL|wxEXPAND, 5);
	BoxSizer18 = new wxBoxSizer(wxHORIZONTAL);
	Button4 = new wxButton(this, ID_BUTTON4, _("Sort"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON4"));
	BoxSizer18->Add(Button4, 1, wxALL|wxEXPAND, 5);
	BoxSizer5->Add(BoxSizer18, 1, wxALL|wxEXPAND, 5);
	BoxSizer1->Add(BoxSizer5, 1, wxALL|wxEXPAND, 5);
	BoxSizer6 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer19 = new wxBoxSizer(wxHORIZONTAL);
	StaticText5 = new wxStaticText(this, ID_STATICTEXT5, _("By House Number:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	BoxSizer19->Add(StaticText5, 1, wxALL|wxEXPAND, 5);
	BoxSizer6->Add(BoxSizer19, 1, wxALL|wxEXPAND, 5);
	BoxSizer20 = new wxBoxSizer(wxHORIZONTAL);
	Button5 = new wxButton(this, ID_BUTTON5, _("Sort"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON5"));
	BoxSizer20->Add(Button5, 1, wxALL|wxEXPAND, 5);
	BoxSizer6->Add(BoxSizer20, 1, wxALL|wxEXPAND, 5);
	BoxSizer1->Add(BoxSizer6, 1, wxALL|wxEXPAND, 5);
	BoxSizer7 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer21 = new wxBoxSizer(wxHORIZONTAL);
	StaticText6 = new wxStaticText(this, ID_STATICTEXT6, _("By Postcode:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT6"));
	BoxSizer21->Add(StaticText6, 1, wxALL|wxEXPAND, 5);
	BoxSizer7->Add(BoxSizer21, 1, wxALL|wxEXPAND, 5);
	BoxSizer22 = new wxBoxSizer(wxHORIZONTAL);
	Button6 = new wxButton(this, ID_BUTTON6, _("Sort"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON6"));
	BoxSizer22->Add(Button6, 1, wxALL|wxEXPAND, 5);
	BoxSizer7->Add(BoxSizer22, 1, wxALL|wxEXPAND, 5);
	BoxSizer1->Add(BoxSizer7, 1, wxALL|wxEXPAND, 5);
	BoxSizer8 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer23 = new wxBoxSizer(wxHORIZONTAL);
	StaticText7 = new wxStaticText(this, ID_STATICTEXT7, _("By City:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT7"));
	BoxSizer23->Add(StaticText7, 1, wxALL|wxEXPAND, 5);
	BoxSizer8->Add(BoxSizer23, 1, wxALL|wxEXPAND, 5);
	BoxSizer24 = new wxBoxSizer(wxHORIZONTAL);
	Button7 = new wxButton(this, ID_BUTTON7, _("Sort"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON7"));
	BoxSizer24->Add(Button7, 1, wxALL|wxEXPAND, 5);
	BoxSizer8->Add(BoxSizer24, 1, wxALL|wxEXPAND, 5);
	BoxSizer1->Add(BoxSizer8, 1, wxALL|wxEXPAND, 5);
	BoxSizer9 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer25 = new wxBoxSizer(wxHORIZONTAL);
	StaticText8 = new wxStaticText(this, ID_STATICTEXT8, _("By Phone Number:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT8"));
	BoxSizer25->Add(StaticText8, 1, wxALL|wxEXPAND, 5);
	BoxSizer9->Add(BoxSizer25, 1, wxALL|wxEXPAND, 5);
	BoxSizer26 = new wxBoxSizer(wxHORIZONTAL);
	Button8 = new wxButton(this, ID_BUTTON8, _("Sort"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON8"));
	BoxSizer26->Add(Button8, 1, wxALL|wxEXPAND, 5);
	BoxSizer9->Add(BoxSizer26, 1, wxALL|wxEXPAND, 5);
	BoxSizer1->Add(BoxSizer9, 1, wxALL|wxEXPAND, 5);
	BoxSizer10 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer27 = new wxBoxSizer(wxHORIZONTAL);
	StaticText9 = new wxStaticText(this, ID_STATICTEXT9, _("By Relationship:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT9"));
	BoxSizer27->Add(StaticText9, 1, wxALL|wxEXPAND, 5);
	BoxSizer10->Add(BoxSizer27, 1, wxALL|wxEXPAND, 5);
	BoxSizer28 = new wxBoxSizer(wxHORIZONTAL);
	Button9 = new wxButton(this, ID_BUTTON9, _("Sort"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON9"));
	BoxSizer28->Add(Button9, 1, wxALL|wxEXPAND, 5);
	BoxSizer10->Add(BoxSizer28, 1, wxALL|wxEXPAND, 5);
	BoxSizer1->Add(BoxSizer10, 1, wxALL|wxEXPAND, 5);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);
	Center();

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&SortingD::SortingID);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&SortingD::SortingName);
	Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&SortingD::SortingLastName);
	Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&SortingD::SortingStreetName);
	Connect(ID_BUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&SortingD::SortingHouseNumber);
	Connect(ID_BUTTON6,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&SortingD::SortingPostcode);
	Connect(ID_BUTTON7,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&SortingD::SortingCity);
	Connect(ID_BUTTON8,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&SortingD::SortingPhoneNumber);
	Connect(ID_BUTTON9,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&SortingD::SortingRelationship);
	//*)
}

SortingD::~SortingD()
{
	//(*Destroy(SortingD)
	//*)
}

void SortingD::SortingID(wxCommandEvent& event)
{
    result=1;
    EndModal(wxID_OK);
}

void SortingD::SortingName(wxCommandEvent& event)
{
    result=2;
    EndModal(wxID_OK);
}

void SortingD::SortingLastName(wxCommandEvent& event)
{
    result=3;
    EndModal(wxID_OK);
}

void SortingD::SortingStreetName(wxCommandEvent& event)
{
    result=4;
    EndModal(wxID_OK);
}

void SortingD::SortingHouseNumber(wxCommandEvent& event)
{
    result=5;
    EndModal(wxID_OK);
}

void SortingD::SortingPostcode(wxCommandEvent& event)
{
    result=6;
    EndModal(wxID_OK);
}

void SortingD::SortingCity(wxCommandEvent& event)
{
    result=7;
    EndModal(wxID_OK);
}

void SortingD::SortingPhoneNumber(wxCommandEvent& event)
{
    result=8;
    EndModal(wxID_OK);
}

void SortingD::SortingRelationship(wxCommandEvent& event)
{
    result=9;
    EndModal(wxID_OK);
}
