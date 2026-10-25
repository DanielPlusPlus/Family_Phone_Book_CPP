#include "FilteringD.h"

//(*InternalHeaders(FilteringD)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(FilteringD)
const long FilteringD::ID_STATICTEXT1 = wxNewId();
const long FilteringD::ID_TEXTCTRL1 = wxNewId();
const long FilteringD::ID_BUTTON1 = wxNewId();
const long FilteringD::ID_STATICTEXT2 = wxNewId();
const long FilteringD::ID_TEXTCTRL2 = wxNewId();
const long FilteringD::ID_BUTTON2 = wxNewId();
const long FilteringD::ID_STATICTEXT3 = wxNewId();
const long FilteringD::ID_TEXTCTRL3 = wxNewId();
const long FilteringD::ID_BUTTON3 = wxNewId();
const long FilteringD::ID_STATICTEXT4 = wxNewId();
const long FilteringD::ID_TEXTCTRL4 = wxNewId();
const long FilteringD::ID_BUTTON4 = wxNewId();
const long FilteringD::ID_STATICTEXT5 = wxNewId();
const long FilteringD::ID_TEXTCTRL5 = wxNewId();
const long FilteringD::ID_BUTTON5 = wxNewId();
const long FilteringD::ID_STATICTEXT6 = wxNewId();
const long FilteringD::ID_TEXTCTRL6 = wxNewId();
const long FilteringD::ID_BUTTON6 = wxNewId();
const long FilteringD::ID_STATICTEXT7 = wxNewId();
const long FilteringD::ID_TEXTCTRL7 = wxNewId();
const long FilteringD::ID_BUTTON7 = wxNewId();
const long FilteringD::ID_STATICTEXT8 = wxNewId();
const long FilteringD::ID_TEXTCTRL8 = wxNewId();
const long FilteringD::ID_BUTTON8 = wxNewId();
const long FilteringD::ID_STATICTEXT9 = wxNewId();
const long FilteringD::ID_TEXTCTRL9 = wxNewId();
const long FilteringD::ID_BUTTON9 = wxNewId();
//*)

BEGIN_EVENT_TABLE(FilteringD,wxDialog)
	//(*EventTable(FilteringD)
	//*)
END_EVENT_TABLE()

FilteringD::FilteringD(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(FilteringD)
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
	wxBoxSizer* BoxSizer30;
	wxBoxSizer* BoxSizer31;
	wxBoxSizer* BoxSizer32;
	wxBoxSizer* BoxSizer33;
	wxBoxSizer* BoxSizer34;
	wxBoxSizer* BoxSizer35;
	wxBoxSizer* BoxSizer36;
	wxBoxSizer* BoxSizer37;
	wxBoxSizer* BoxSizer3;
	wxBoxSizer* BoxSizer4;
	wxBoxSizer* BoxSizer5;
	wxBoxSizer* BoxSizer6;
	wxBoxSizer* BoxSizer7;
	wxBoxSizer* BoxSizer8;
	wxBoxSizer* BoxSizer9;

	Create(parent, wxID_ANY, _("Filtering persons"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER, _T("wxID_ANY"));
	SetBackgroundColour(wxColour(255,255,128));
	BoxSizer1 = new wxBoxSizer(wxVERTICAL);
	BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer4 = new wxBoxSizer(wxHORIZONTAL);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("ID:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	BoxSizer4->Add(StaticText1, 1, wxALL|wxEXPAND, 5);
	BoxSizer2->Add(BoxSizer4, 1, wxALL|wxEXPAND, 5);
	BoxSizer29 = new wxBoxSizer(wxHORIZONTAL);
	IdV = new wxTextCtrl(this, ID_TEXTCTRL1, _("1"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	BoxSizer29->Add(IdV, 1, wxALL|wxEXPAND, 5);
	BoxSizer2->Add(BoxSizer29, 1, wxALL|wxEXPAND, 5);
	BoxSizer5 = new wxBoxSizer(wxHORIZONTAL);
	Button1 = new wxButton(this, ID_BUTTON1, _("Show"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	BoxSizer5->Add(Button1, 1, wxALL|wxEXPAND, 5);
	BoxSizer2->Add(BoxSizer5, 1, wxALL|wxEXPAND, 5);
	BoxSizer1->Add(BoxSizer2, 1, wxALL|wxEXPAND, 5);
	BoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer12 = new wxBoxSizer(wxHORIZONTAL);
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Name:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	BoxSizer12->Add(StaticText2, 1, wxALL|wxEXPAND, 5);
	BoxSizer3->Add(BoxSizer12, 1, wxALL|wxEXPAND, 5);
	BoxSizer30 = new wxBoxSizer(wxHORIZONTAL);
	NameV = new wxTextCtrl(this, ID_TEXTCTRL2, _("John"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	BoxSizer30->Add(NameV, 1, wxALL|wxEXPAND, 5);
	BoxSizer3->Add(BoxSizer30, 1, wxALL|wxEXPAND, 5);
	BoxSizer13 = new wxBoxSizer(wxHORIZONTAL);
	Button2 = new wxButton(this, ID_BUTTON2, _("Show"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	BoxSizer13->Add(Button2, 1, wxALL|wxEXPAND, 5);
	BoxSizer3->Add(BoxSizer13, 1, wxALL|wxEXPAND, 5);
	BoxSizer1->Add(BoxSizer3, 1, wxALL|wxEXPAND, 5);
	BoxSizer6 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer15 = new wxBoxSizer(wxHORIZONTAL);
	StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("Last Name:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	BoxSizer15->Add(StaticText3, 1, wxALL|wxEXPAND, 5);
	BoxSizer6->Add(BoxSizer15, 1, wxALL|wxEXPAND, 5);
	BoxSizer31 = new wxBoxSizer(wxHORIZONTAL);
	LastNameV = new wxTextCtrl(this, ID_TEXTCTRL3, _("Smith"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
	BoxSizer31->Add(LastNameV, 1, wxALL|wxEXPAND, 5);
	BoxSizer6->Add(BoxSizer31, 1, wxALL|wxEXPAND, 5);
	BoxSizer16 = new wxBoxSizer(wxHORIZONTAL);
	Button3 = new wxButton(this, ID_BUTTON3, _("Show"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
	BoxSizer16->Add(Button3, 1, wxALL|wxEXPAND, 5);
	BoxSizer6->Add(BoxSizer16, 1, wxALL|wxEXPAND, 5);
	BoxSizer1->Add(BoxSizer6, 1, wxALL|wxEXPAND, 5);
	BoxSizer7 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer17 = new wxBoxSizer(wxHORIZONTAL);
	StaticText4 = new wxStaticText(this, ID_STATICTEXT4, _("Street Name:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	BoxSizer17->Add(StaticText4, 1, wxALL|wxEXPAND, 5);
	BoxSizer7->Add(BoxSizer17, 1, wxALL|wxEXPAND, 5);
	BoxSizer32 = new wxBoxSizer(wxHORIZONTAL);
	StreetNameV = new wxTextCtrl(this, ID_TEXTCTRL4, _("King Street"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL4"));
	BoxSizer32->Add(StreetNameV, 1, wxALL|wxEXPAND, 5);
	BoxSizer7->Add(BoxSizer32, 1, wxALL|wxEXPAND, 5);
	BoxSizer18 = new wxBoxSizer(wxHORIZONTAL);
	Button4 = new wxButton(this, ID_BUTTON4, _("Show"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON4"));
	BoxSizer18->Add(Button4, 1, wxALL|wxEXPAND, 5);
	BoxSizer7->Add(BoxSizer18, 1, wxALL|wxEXPAND, 5);
	BoxSizer1->Add(BoxSizer7, 1, wxALL|wxEXPAND, 5);
	BoxSizer8 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer19 = new wxBoxSizer(wxHORIZONTAL);
	StaticText5 = new wxStaticText(this, ID_STATICTEXT5, _("House Number:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	BoxSizer19->Add(StaticText5, 1, wxALL|wxEXPAND, 5);
	BoxSizer8->Add(BoxSizer19, 1, wxALL|wxEXPAND, 5);
	BoxSizer33 = new wxBoxSizer(wxHORIZONTAL);
	HouseNumberV = new wxTextCtrl(this, ID_TEXTCTRL5, _("1"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL5"));
	BoxSizer33->Add(HouseNumberV, 1, wxALL|wxEXPAND, 5);
	BoxSizer8->Add(BoxSizer33, 1, wxALL|wxEXPAND, 5);
	BoxSizer20 = new wxBoxSizer(wxHORIZONTAL);
	Button5 = new wxButton(this, ID_BUTTON5, _("Show"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON5"));
	BoxSizer20->Add(Button5, 1, wxALL|wxEXPAND, 5);
	BoxSizer8->Add(BoxSizer20, 1, wxALL|wxEXPAND, 5);
	BoxSizer1->Add(BoxSizer8, 1, wxALL|wxEXPAND, 5);
	BoxSizer9 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer21 = new wxBoxSizer(wxHORIZONTAL);
	StaticText6 = new wxStaticText(this, ID_STATICTEXT6, _("Postcode:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT6"));
	BoxSizer21->Add(StaticText6, 1, wxALL|wxEXPAND, 5);
	BoxSizer9->Add(BoxSizer21, 1, wxALL|wxEXPAND, 5);
	BoxSizer34 = new wxBoxSizer(wxHORIZONTAL);
	PostcodeV = new wxTextCtrl(this, ID_TEXTCTRL6, _("11111"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL6"));
	BoxSizer34->Add(PostcodeV, 1, wxALL|wxEXPAND, 5);
	BoxSizer9->Add(BoxSizer34, 1, wxALL|wxEXPAND, 5);
	BoxSizer22 = new wxBoxSizer(wxHORIZONTAL);
	Button6 = new wxButton(this, ID_BUTTON6, _("Show"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON6"));
	BoxSizer22->Add(Button6, 1, wxALL|wxEXPAND, 5);
	BoxSizer9->Add(BoxSizer22, 1, wxALL|wxEXPAND, 5);
	BoxSizer1->Add(BoxSizer9, 1, wxALL|wxEXPAND, 5);
	BoxSizer10 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer23 = new wxBoxSizer(wxHORIZONTAL);
	StaticText7 = new wxStaticText(this, ID_STATICTEXT7, _("City:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT7"));
	BoxSizer23->Add(StaticText7, 1, wxALL|wxEXPAND, 5);
	BoxSizer10->Add(BoxSizer23, 1, wxALL|wxEXPAND, 5);
	BoxSizer35 = new wxBoxSizer(wxHORIZONTAL);
	CityV = new wxTextCtrl(this, ID_TEXTCTRL7, _("New York"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL7"));
	BoxSizer35->Add(CityV, 1, wxALL|wxEXPAND, 5);
	BoxSizer10->Add(BoxSizer35, 1, wxALL|wxEXPAND, 5);
	BoxSizer24 = new wxBoxSizer(wxHORIZONTAL);
	Button7 = new wxButton(this, ID_BUTTON7, _("Show"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON7"));
	BoxSizer24->Add(Button7, 1, wxALL|wxEXPAND, 5);
	BoxSizer10->Add(BoxSizer24, 1, wxALL|wxEXPAND, 5);
	BoxSizer1->Add(BoxSizer10, 1, wxALL|wxEXPAND, 5);
	BoxSizer11 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer25 = new wxBoxSizer(wxHORIZONTAL);
	StaticText8 = new wxStaticText(this, ID_STATICTEXT8, _("Phone number:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT8"));
	BoxSizer25->Add(StaticText8, 1, wxALL|wxEXPAND, 5);
	BoxSizer11->Add(BoxSizer25, 1, wxALL|wxEXPAND, 5);
	BoxSizer36 = new wxBoxSizer(wxHORIZONTAL);
	PhoneNumberV = new wxTextCtrl(this, ID_TEXTCTRL8, _("1111111111"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL8"));
	BoxSizer36->Add(PhoneNumberV, 1, wxALL|wxEXPAND, 5);
	BoxSizer11->Add(BoxSizer36, 1, wxALL|wxEXPAND, 5);
	BoxSizer26 = new wxBoxSizer(wxHORIZONTAL);
	Button8 = new wxButton(this, ID_BUTTON8, _("Show"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON8"));
	BoxSizer26->Add(Button8, 1, wxALL|wxEXPAND, 5);
	BoxSizer11->Add(BoxSizer26, 1, wxALL|wxEXPAND, 5);
	BoxSizer1->Add(BoxSizer11, 1, wxALL|wxEXPAND, 5);
	BoxSizer14 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer27 = new wxBoxSizer(wxHORIZONTAL);
	StaticText9 = new wxStaticText(this, ID_STATICTEXT9, _("Relationship:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT9"));
	BoxSizer27->Add(StaticText9, 1, wxALL|wxEXPAND, 5);
	BoxSizer14->Add(BoxSizer27, 1, wxALL|wxEXPAND, 5);
	BoxSizer37 = new wxBoxSizer(wxHORIZONTAL);
	RelationshipV = new wxTextCtrl(this, ID_TEXTCTRL9, _("Father"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL9"));
	BoxSizer37->Add(RelationshipV, 1, wxALL|wxEXPAND, 5);
	BoxSizer14->Add(BoxSizer37, 1, wxALL|wxEXPAND, 5);
	BoxSizer28 = new wxBoxSizer(wxHORIZONTAL);
	Button9 = new wxButton(this, ID_BUTTON9, _("Show"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON9"));
	BoxSizer28->Add(Button9, 1, wxALL|wxEXPAND, 5);
	BoxSizer14->Add(BoxSizer28, 1, wxALL|wxEXPAND, 5);
	BoxSizer1->Add(BoxSizer14, 1, wxALL|wxEXPAND, 5);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);
	Center();

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&FilteringD::FilteringID);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&FilteringD::FilteringName);
	Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&FilteringD::FilteringLastName);
	Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&FilteringD::FilteringStreetName);
	Connect(ID_BUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&FilteringD::FilteringHouseNumber);
	Connect(ID_BUTTON6,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&FilteringD::FilteringPostcode);
	Connect(ID_BUTTON7,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&FilteringD::FilteringCity);
	Connect(ID_BUTTON8,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&FilteringD::FilteringPhoneNumber);
	Connect(ID_BUTTON9,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&FilteringD::FilteringRelationship);
	//*)
}

FilteringD::~FilteringD()
{
	//(*Destroy(FilteringD)
	//*)
}

void FilteringD::FilteringID(wxCommandEvent& event)
{
    PersonWx p;
    p.choose="1";
    p.id=IdV->GetValue();
    result=p;
    EndModal(wxID_OK);
}

void FilteringD::FilteringName(wxCommandEvent& event)
{
    PersonWx p;
    p.choose="2";
    p.name=NameV->GetValue();
    result=p;
    EndModal(wxID_OK);
}

void FilteringD::FilteringLastName(wxCommandEvent& event)
{
    PersonWx p;
    p.choose="3";
    p.last_name=LastNameV->GetValue();
    result=p;
    EndModal(wxID_OK);
}

void FilteringD::FilteringStreetName(wxCommandEvent& event)
{
    PersonWx p;
    p.choose="4";
    p.street_name=StreetNameV->GetValue();
    result=p;
    EndModal(wxID_OK);
}

void FilteringD::FilteringHouseNumber(wxCommandEvent& event)
{
    PersonWx p;
    p.choose="5";
    p.house_number=HouseNumberV->GetValue();
    result=p;
    EndModal(wxID_OK);
}

void FilteringD::FilteringPostcode(wxCommandEvent& event)
{
    PersonWx p;
    p.choose="6";
    p.postcode=PostcodeV->GetValue();
    result=p;
    EndModal(wxID_OK);
}

void FilteringD::FilteringCity(wxCommandEvent& event)
{
    PersonWx p;
    p.choose="7";
    p.city=CityV->GetValue();
    result=p;
    EndModal(wxID_OK);
}

void FilteringD::FilteringPhoneNumber(wxCommandEvent& event)
{
    PersonWx p;
    p.choose="8";
    p.phone_number=PhoneNumberV->GetValue();
    result=p;
    EndModal(wxID_OK);
}

void FilteringD::FilteringRelationship(wxCommandEvent& event)
{
    PersonWx p;
    p.choose="9";
    p.relationship=RelationshipV->GetValue();
    result=p;
    EndModal(wxID_OK);
}
