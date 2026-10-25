#include "AddingD.h"

//(*InternalHeaders(AddingD)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(AddingD)
const long AddingD::ID_STATICTEXT1 = wxNewId();
const long AddingD::ID_TEXTCTRL1 = wxNewId();
const long AddingD::ID_STATICTEXT2 = wxNewId();
const long AddingD::ID_TEXTCTRL2 = wxNewId();
const long AddingD::ID_STATICTEXT3 = wxNewId();
const long AddingD::ID_TEXTCTRL3 = wxNewId();
const long AddingD::ID_STATICTEXT4 = wxNewId();
const long AddingD::ID_TEXTCTRL4 = wxNewId();
const long AddingD::ID_STATICTEXT5 = wxNewId();
const long AddingD::ID_TEXTCTRL5 = wxNewId();
const long AddingD::ID_STATICTEXT6 = wxNewId();
const long AddingD::ID_TEXTCTRL6 = wxNewId();
const long AddingD::ID_STATICTEXT7 = wxNewId();
const long AddingD::ID_TEXTCTRL7 = wxNewId();
const long AddingD::ID_STATICTEXT8 = wxNewId();
const long AddingD::ID_TEXTCTRL8 = wxNewId();
const long AddingD::ID_STATICTEXT9 = wxNewId();
const long AddingD::ID_TEXTCTRL9 = wxNewId();
const long AddingD::ID_BUTTON1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(AddingD,wxDialog)
	//(*EventTable(AddingD)
	//*)
END_EVENT_TABLE()

AddingD::AddingD(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(AddingD)
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
	wxBoxSizer* BoxSizer29;
	wxBoxSizer* BoxSizer2;
	wxBoxSizer* BoxSizer3;
	wxBoxSizer* BoxSizer4;
	wxBoxSizer* BoxSizer5;
	wxBoxSizer* BoxSizer6;
	wxBoxSizer* BoxSizer7;
	wxBoxSizer* BoxSizer8;
	wxBoxSizer* BoxSizer9;

	Create(parent, wxID_ANY, _("Adding new person"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER, _T("wxID_ANY"));
	SetBackgroundColour(wxColour(255,255,128));
	BoxSizer1 = new wxBoxSizer(wxVERTICAL);
	BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer4 = new wxBoxSizer(wxHORIZONTAL);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Name:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	BoxSizer4->Add(StaticText1, 1, wxALL|wxEXPAND, 5);
	BoxSizer2->Add(BoxSizer4, 1, wxALL|wxEXPAND, 5);
	BoxSizer5 = new wxBoxSizer(wxHORIZONTAL);
	NameV = new wxTextCtrl(this, ID_TEXTCTRL1, _("John"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	BoxSizer5->Add(NameV, 1, wxALL|wxEXPAND, 5);
	BoxSizer2->Add(BoxSizer5, 1, wxALL|wxEXPAND, 5);
	BoxSizer1->Add(BoxSizer2, 1, wxALL|wxEXPAND, 5);
	BoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer6 = new wxBoxSizer(wxHORIZONTAL);
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Last Name:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	BoxSizer6->Add(StaticText2, 1, wxALL|wxEXPAND, 5);
	BoxSizer3->Add(BoxSizer6, 1, wxALL|wxEXPAND, 5);
	BoxSizer7 = new wxBoxSizer(wxHORIZONTAL);
	LastNameV = new wxTextCtrl(this, ID_TEXTCTRL2, _("Smith"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	BoxSizer7->Add(LastNameV, 1, wxALL|wxEXPAND, 5);
	BoxSizer3->Add(BoxSizer7, 1, wxALL|wxEXPAND, 5);
	BoxSizer1->Add(BoxSizer3, 1, wxALL|wxEXPAND, 5);
	BoxSizer8 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer9 = new wxBoxSizer(wxHORIZONTAL);
	StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("Street Name:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	BoxSizer9->Add(StaticText3, 1, wxALL|wxEXPAND, 5);
	BoxSizer8->Add(BoxSizer9, 1, wxALL|wxEXPAND, 5);
	BoxSizer10 = new wxBoxSizer(wxHORIZONTAL);
	StreetNameV = new wxTextCtrl(this, ID_TEXTCTRL3, _("King Street"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
	BoxSizer10->Add(StreetNameV, 1, wxALL|wxEXPAND, 5);
	BoxSizer8->Add(BoxSizer10, 1, wxALL|wxEXPAND, 5);
	BoxSizer1->Add(BoxSizer8, 1, wxALL|wxEXPAND, 5);
	BoxSizer11 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer12 = new wxBoxSizer(wxHORIZONTAL);
	StaticText4 = new wxStaticText(this, ID_STATICTEXT4, _("House Number:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	BoxSizer12->Add(StaticText4, 1, wxALL|wxEXPAND, 5);
	BoxSizer11->Add(BoxSizer12, 1, wxALL|wxEXPAND, 5);
	BoxSizer13 = new wxBoxSizer(wxHORIZONTAL);
	HouseNumberV = new wxTextCtrl(this, ID_TEXTCTRL4, _("1"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL4"));
	BoxSizer13->Add(HouseNumberV, 1, wxALL|wxEXPAND, 5);
	BoxSizer11->Add(BoxSizer13, 1, wxALL|wxEXPAND, 5);
	BoxSizer1->Add(BoxSizer11, 1, wxALL|wxEXPAND, 5);
	BoxSizer14 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer15 = new wxBoxSizer(wxHORIZONTAL);
	StaticText5 = new wxStaticText(this, ID_STATICTEXT5, _("Postcode:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	BoxSizer15->Add(StaticText5, 1, wxALL|wxEXPAND, 5);
	BoxSizer14->Add(BoxSizer15, 1, wxALL|wxEXPAND, 5);
	BoxSizer16 = new wxBoxSizer(wxHORIZONTAL);
	PostcodeV = new wxTextCtrl(this, ID_TEXTCTRL5, _("11111"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL5"));
	BoxSizer16->Add(PostcodeV, 1, wxALL|wxEXPAND, 5);
	BoxSizer14->Add(BoxSizer16, 1, wxALL|wxEXPAND, 5);
	BoxSizer1->Add(BoxSizer14, 1, wxALL|wxEXPAND, 5);
	BoxSizer17 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer18 = new wxBoxSizer(wxHORIZONTAL);
	StaticText6 = new wxStaticText(this, ID_STATICTEXT6, _("City:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT6"));
	BoxSizer18->Add(StaticText6, 1, wxALL|wxEXPAND, 5);
	BoxSizer17->Add(BoxSizer18, 1, wxALL|wxEXPAND, 5);
	BoxSizer19 = new wxBoxSizer(wxHORIZONTAL);
	CityV = new wxTextCtrl(this, ID_TEXTCTRL6, _("New York"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL6"));
	BoxSizer19->Add(CityV, 1, wxALL|wxEXPAND, 5);
	BoxSizer17->Add(BoxSizer19, 1, wxALL|wxEXPAND, 5);
	BoxSizer1->Add(BoxSizer17, 1, wxALL|wxEXPAND, 5);
	BoxSizer20 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer21 = new wxBoxSizer(wxHORIZONTAL);
	StaticText7 = new wxStaticText(this, ID_STATICTEXT7, _("Phone number:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT7"));
	BoxSizer21->Add(StaticText7, 1, wxALL|wxEXPAND, 5);
	BoxSizer20->Add(BoxSizer21, 1, wxALL|wxEXPAND, 5);
	BoxSizer22 = new wxBoxSizer(wxHORIZONTAL);
	PhoneNumberV = new wxTextCtrl(this, ID_TEXTCTRL7, _("1111111111"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL7"));
	BoxSizer22->Add(PhoneNumberV, 1, wxALL|wxEXPAND, 5);
	BoxSizer20->Add(BoxSizer22, 1, wxALL|wxEXPAND, 5);
	BoxSizer1->Add(BoxSizer20, 1, wxALL|wxEXPAND, 5);
	BoxSizer23 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer24 = new wxBoxSizer(wxHORIZONTAL);
	StaticText8 = new wxStaticText(this, ID_STATICTEXT8, _("Relationship:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT8"));
	BoxSizer24->Add(StaticText8, 1, wxALL|wxEXPAND, 5);
	BoxSizer23->Add(BoxSizer24, 1, wxALL|wxEXPAND, 5);
	BoxSizer25 = new wxBoxSizer(wxHORIZONTAL);
	RelationshipV = new wxTextCtrl(this, ID_TEXTCTRL8, _("Father"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL8"));
	BoxSizer25->Add(RelationshipV, 1, wxALL|wxEXPAND, 5);
	BoxSizer23->Add(BoxSizer25, 1, wxALL|wxEXPAND, 5);
	BoxSizer1->Add(BoxSizer23, 1, wxALL|wxEXPAND, 5);
	BoxSizer27 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer28 = new wxBoxSizer(wxHORIZONTAL);
	StaticText9 = new wxStaticText(this, ID_STATICTEXT9, _("Path to photo:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT9"));
	BoxSizer28->Add(StaticText9, 1, wxALL|wxEXPAND, 5);
	BoxSizer27->Add(BoxSizer28, 1, wxALL|wxEXPAND, 5);
	BoxSizer29 = new wxBoxSizer(wxHORIZONTAL);
	PhotoPathV = new wxTextCtrl(this, ID_TEXTCTRL9, _("path.jpg"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL9"));
	BoxSizer29->Add(PhotoPathV, 1, wxALL|wxEXPAND, 5);
	BoxSizer27->Add(BoxSizer29, 1, wxALL|wxEXPAND, 5);
	BoxSizer1->Add(BoxSizer27, 1, wxALL|wxEXPAND, 5);
	BoxSizer26 = new wxBoxSizer(wxHORIZONTAL);
	Button1 = new wxButton(this, ID_BUTTON1, _("OK"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	BoxSizer26->Add(Button1, 1, wxALL|wxEXPAND, 5);
	BoxSizer1->Add(BoxSizer26, 1, wxALL|wxEXPAND, 5);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);
	Center();

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&AddingD::AddingOK);
	//*)
}

AddingD::~AddingD()
{
	//(*Destroy(AddingD)
	//*)
}

void AddingD::AddingOK(wxCommandEvent& event)
{
    PersonWx p;
    p.choose="1";
    p.name=NameV->GetValue();
    p.last_name=LastNameV->GetValue();
    p.street_name=StreetNameV->GetValue();
    p.house_number=HouseNumberV->GetValue();
    p.postcode=PostcodeV->GetValue();
    p.city=CityV->GetValue();
    p.phone_number=PhoneNumberV->GetValue();
    p.relationship=RelationshipV->GetValue();
    p.photo_path=PhotoPathV->GetValue();
    result=p;
    EndModal(wxID_OK);
}
