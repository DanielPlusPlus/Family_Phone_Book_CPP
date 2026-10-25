#include "EditingD.h"

//(*InternalHeaders(EditingD)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(EditingD)
const long EditingD::ID_STATICTEXT1 = wxNewId();
const long EditingD::ID_TEXTCTRL1 = wxNewId();
const long EditingD::ID_PANEL1 = wxNewId();
const long EditingD::ID_STATICLINE2 = wxNewId();
const long EditingD::ID_STATICTEXT2 = wxNewId();
const long EditingD::ID_STATICLINE1 = wxNewId();
const long EditingD::ID_STATICTEXT3 = wxNewId();
const long EditingD::ID_TEXTCTRL2 = wxNewId();
const long EditingD::ID_BUTTON1 = wxNewId();
const long EditingD::ID_STATICTEXT4 = wxNewId();
const long EditingD::ID_TEXTCTRL3 = wxNewId();
const long EditingD::ID_BUTTON2 = wxNewId();
const long EditingD::ID_STATICTEXT5 = wxNewId();
const long EditingD::ID_TEXTCTRL4 = wxNewId();
const long EditingD::ID_BUTTON3 = wxNewId();
const long EditingD::ID_STATICTEXT6 = wxNewId();
const long EditingD::ID_TEXTCTRL5 = wxNewId();
const long EditingD::ID_BUTTON5 = wxNewId();
const long EditingD::ID_STATICTEXT7 = wxNewId();
const long EditingD::ID_TEXTCTRL6 = wxNewId();
const long EditingD::ID_BUTTON6 = wxNewId();
const long EditingD::ID_STATICTEXT8 = wxNewId();
const long EditingD::ID_TEXTCTRL7 = wxNewId();
const long EditingD::ID_BUTTON7 = wxNewId();
const long EditingD::ID_STATICTEXT9 = wxNewId();
const long EditingD::ID_TEXTCTRL8 = wxNewId();
const long EditingD::ID_BUTTON8 = wxNewId();
const long EditingD::ID_STATICTEXT10 = wxNewId();
const long EditingD::ID_TEXTCTRL9 = wxNewId();
const long EditingD::ID_BUTTON9 = wxNewId();
const long EditingD::ID_STATICTEXT11 = wxNewId();
const long EditingD::ID_TEXTCTRL10 = wxNewId();
const long EditingD::ID_BUTTON4 = wxNewId();
//*)

BEGIN_EVENT_TABLE(EditingD,wxDialog)
	//(*EventTable(EditingD)
	//*)
END_EVENT_TABLE()

EditingD::EditingD(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(EditingD)
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
	wxBoxSizer* BoxSizer38;
	wxBoxSizer* BoxSizer39;
	wxBoxSizer* BoxSizer3;
	wxBoxSizer* BoxSizer40;
	wxBoxSizer* BoxSizer41;
	wxBoxSizer* BoxSizer42;
	wxBoxSizer* BoxSizer43;
	wxBoxSizer* BoxSizer44;
	wxBoxSizer* BoxSizer45;
	wxBoxSizer* BoxSizer4;
	wxBoxSizer* BoxSizer5;
	wxBoxSizer* BoxSizer6;
	wxBoxSizer* BoxSizer7;
	wxBoxSizer* BoxSizer8;
	wxBoxSizer* BoxSizer9;

	Create(parent, wxID_ANY, _("Editing person"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER, _T("wxID_ANY"));
	SetBackgroundColour(wxColour(255,255,128));
	BoxSizer1 = new wxBoxSizer(wxVERTICAL);
	BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer4 = new wxBoxSizer(wxHORIZONTAL);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("ID of person to editing:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	BoxSizer4->Add(StaticText1, 1, wxALL|wxEXPAND, 5);
	BoxSizer2->Add(BoxSizer4, 1, wxALL|wxEXPAND, 5);
	BoxSizer5 = new wxBoxSizer(wxHORIZONTAL);
	IdV = new wxTextCtrl(this, ID_TEXTCTRL1, _("1"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	BoxSizer5->Add(IdV, 1, wxALL|wxEXPAND, 5);
	BoxSizer2->Add(BoxSizer5, 1, wxALL|wxEXPAND, 5);
	BoxSizer6 = new wxBoxSizer(wxHORIZONTAL);
	Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	BoxSizer6->Add(Panel1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer2->Add(BoxSizer6, 1, wxALL|wxEXPAND, 5);
	BoxSizer1->Add(BoxSizer2, 1, wxALL|wxEXPAND, 5);
	BoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer8 = new wxBoxSizer(wxHORIZONTAL);
	StaticLine2 = new wxStaticLine(this, ID_STATICLINE2, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE2"));
	BoxSizer8->Add(StaticLine2, 1, wxALL, 5);
	BoxSizer3->Add(BoxSizer8, 1, wxALL|wxEXPAND, 5);
	BoxSizer7 = new wxBoxSizer(wxHORIZONTAL);
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Fields to editing:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	BoxSizer7->Add(StaticText2, 1, wxALL|wxEXPAND, 5);
	BoxSizer3->Add(BoxSizer7, 1, wxALL|wxEXPAND, 5);
	BoxSizer9 = new wxBoxSizer(wxHORIZONTAL);
	StaticLine1 = new wxStaticLine(this, ID_STATICLINE1, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE1"));
	BoxSizer9->Add(StaticLine1, 1, wxALL, 5);
	BoxSizer3->Add(BoxSizer9, 1, wxALL|wxEXPAND, 5);
	BoxSizer1->Add(BoxSizer3, 1, wxALL|wxEXPAND, 5);
	BoxSizer10 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer12 = new wxBoxSizer(wxHORIZONTAL);
	StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("Name:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	BoxSizer12->Add(StaticText3, 1, wxALL|wxEXPAND, 5);
	BoxSizer10->Add(BoxSizer12, 1, wxALL|wxEXPAND, 5);
	BoxSizer13 = new wxBoxSizer(wxHORIZONTAL);
	NameV = new wxTextCtrl(this, ID_TEXTCTRL2, _("John"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	BoxSizer13->Add(NameV, 1, wxALL|wxEXPAND, 5);
	BoxSizer10->Add(BoxSizer13, 1, wxALL|wxEXPAND, 5);
	BoxSizer14 = new wxBoxSizer(wxHORIZONTAL);
	Button1 = new wxButton(this, ID_BUTTON1, _("Execute"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	BoxSizer14->Add(Button1, 1, wxALL|wxEXPAND, 5);
	BoxSizer10->Add(BoxSizer14, 1, wxALL|wxEXPAND, 5);
	BoxSizer1->Add(BoxSizer10, 1, wxALL|wxEXPAND, 5);
	BoxSizer11 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer15 = new wxBoxSizer(wxHORIZONTAL);
	StaticText4 = new wxStaticText(this, ID_STATICTEXT4, _("Last Name:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	BoxSizer15->Add(StaticText4, 1, wxALL|wxEXPAND, 5);
	BoxSizer11->Add(BoxSizer15, 1, wxALL|wxEXPAND, 5);
	BoxSizer16 = new wxBoxSizer(wxHORIZONTAL);
	LastNameV = new wxTextCtrl(this, ID_TEXTCTRL3, _("Smith"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
	BoxSizer16->Add(LastNameV, 1, wxALL|wxEXPAND, 5);
	BoxSizer11->Add(BoxSizer16, 1, wxALL|wxEXPAND, 5);
	BoxSizer17 = new wxBoxSizer(wxHORIZONTAL);
	Button2 = new wxButton(this, ID_BUTTON2, _("Execute"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	BoxSizer17->Add(Button2, 1, wxALL|wxEXPAND, 5);
	BoxSizer11->Add(BoxSizer17, 1, wxALL|wxEXPAND, 5);
	BoxSizer1->Add(BoxSizer11, 1, wxALL|wxEXPAND, 5);
	BoxSizer18 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer24 = new wxBoxSizer(wxHORIZONTAL);
	StaticText5 = new wxStaticText(this, ID_STATICTEXT5, _("Street Name:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	BoxSizer24->Add(StaticText5, 1, wxALL|wxEXPAND, 5);
	BoxSizer18->Add(BoxSizer24, 1, wxALL|wxEXPAND, 5);
	BoxSizer25 = new wxBoxSizer(wxHORIZONTAL);
	StreetNameV = new wxTextCtrl(this, ID_TEXTCTRL4, _("King Street"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL4"));
	BoxSizer25->Add(StreetNameV, 1, wxALL|wxEXPAND, 5);
	BoxSizer18->Add(BoxSizer25, 1, wxALL|wxEXPAND, 5);
	BoxSizer26 = new wxBoxSizer(wxHORIZONTAL);
	Button3 = new wxButton(this, ID_BUTTON3, _("Execute"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
	BoxSizer26->Add(Button3, 1, wxALL|wxEXPAND, 5);
	BoxSizer18->Add(BoxSizer26, 1, wxALL|wxEXPAND, 5);
	BoxSizer1->Add(BoxSizer18, 1, wxALL|wxEXPAND, 5);
	BoxSizer19 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer27 = new wxBoxSizer(wxHORIZONTAL);
	StaticText6 = new wxStaticText(this, ID_STATICTEXT6, _("House Number:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT6"));
	BoxSizer27->Add(StaticText6, 1, wxALL|wxEXPAND, 5);
	BoxSizer19->Add(BoxSizer27, 1, wxALL|wxEXPAND, 5);
	BoxSizer28 = new wxBoxSizer(wxHORIZONTAL);
	HouseNumberV = new wxTextCtrl(this, ID_TEXTCTRL5, _("1"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL5"));
	BoxSizer28->Add(HouseNumberV, 1, wxALL|wxEXPAND, 5);
	BoxSizer19->Add(BoxSizer28, 1, wxALL|wxEXPAND, 5);
	BoxSizer29 = new wxBoxSizer(wxHORIZONTAL);
	Button5 = new wxButton(this, ID_BUTTON5, _("Execute"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON5"));
	BoxSizer29->Add(Button5, 1, wxALL|wxEXPAND, 5);
	BoxSizer19->Add(BoxSizer29, 1, wxALL|wxEXPAND, 5);
	BoxSizer1->Add(BoxSizer19, 1, wxALL|wxEXPAND, 5);
	BoxSizer20 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer30 = new wxBoxSizer(wxHORIZONTAL);
	StaticText7 = new wxStaticText(this, ID_STATICTEXT7, _("Postcode:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT7"));
	BoxSizer30->Add(StaticText7, 1, wxALL|wxEXPAND, 5);
	BoxSizer20->Add(BoxSizer30, 1, wxALL|wxEXPAND, 5);
	BoxSizer31 = new wxBoxSizer(wxHORIZONTAL);
	PostcodeV = new wxTextCtrl(this, ID_TEXTCTRL6, _("11111"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL6"));
	BoxSizer31->Add(PostcodeV, 1, wxALL|wxEXPAND, 5);
	BoxSizer20->Add(BoxSizer31, 1, wxALL|wxEXPAND, 5);
	BoxSizer32 = new wxBoxSizer(wxHORIZONTAL);
	Button6 = new wxButton(this, ID_BUTTON6, _("Execute"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON6"));
	BoxSizer32->Add(Button6, 1, wxALL|wxEXPAND, 5);
	BoxSizer20->Add(BoxSizer32, 1, wxALL|wxEXPAND, 5);
	BoxSizer1->Add(BoxSizer20, 1, wxALL|wxEXPAND, 5);
	BoxSizer21 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer33 = new wxBoxSizer(wxHORIZONTAL);
	StaticText8 = new wxStaticText(this, ID_STATICTEXT8, _("City:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT8"));
	BoxSizer33->Add(StaticText8, 1, wxALL|wxEXPAND, 5);
	BoxSizer21->Add(BoxSizer33, 1, wxALL|wxEXPAND, 5);
	BoxSizer34 = new wxBoxSizer(wxHORIZONTAL);
	CityV = new wxTextCtrl(this, ID_TEXTCTRL7, _("New York"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL7"));
	BoxSizer34->Add(CityV, 1, wxALL|wxEXPAND, 5);
	BoxSizer21->Add(BoxSizer34, 1, wxALL|wxEXPAND, 5);
	BoxSizer35 = new wxBoxSizer(wxHORIZONTAL);
	Button7 = new wxButton(this, ID_BUTTON7, _("Execute"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON7"));
	BoxSizer35->Add(Button7, 1, wxALL|wxEXPAND, 5);
	BoxSizer21->Add(BoxSizer35, 1, wxALL|wxEXPAND, 5);
	BoxSizer1->Add(BoxSizer21, 1, wxALL|wxEXPAND, 5);
	BoxSizer22 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer36 = new wxBoxSizer(wxHORIZONTAL);
	StaticText9 = new wxStaticText(this, ID_STATICTEXT9, _("Phone number:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT9"));
	BoxSizer36->Add(StaticText9, 1, wxALL|wxEXPAND, 5);
	BoxSizer22->Add(BoxSizer36, 1, wxALL|wxEXPAND, 5);
	BoxSizer37 = new wxBoxSizer(wxHORIZONTAL);
	PhoneNumberV = new wxTextCtrl(this, ID_TEXTCTRL8, _("1111111111"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL8"));
	BoxSizer37->Add(PhoneNumberV, 1, wxALL|wxEXPAND, 5);
	BoxSizer22->Add(BoxSizer37, 1, wxALL|wxEXPAND, 5);
	BoxSizer38 = new wxBoxSizer(wxHORIZONTAL);
	Button8 = new wxButton(this, ID_BUTTON8, _("Execute"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON8"));
	BoxSizer38->Add(Button8, 1, wxALL|wxEXPAND, 5);
	BoxSizer22->Add(BoxSizer38, 1, wxALL|wxEXPAND, 5);
	BoxSizer1->Add(BoxSizer22, 1, wxALL|wxEXPAND, 5);
	BoxSizer23 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer39 = new wxBoxSizer(wxHORIZONTAL);
	StaticText10 = new wxStaticText(this, ID_STATICTEXT10, _("Relationship:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT10"));
	BoxSizer39->Add(StaticText10, 1, wxALL|wxEXPAND, 5);
	BoxSizer23->Add(BoxSizer39, 1, wxALL|wxEXPAND, 5);
	BoxSizer40 = new wxBoxSizer(wxHORIZONTAL);
	RelationshipV = new wxTextCtrl(this, ID_TEXTCTRL9, _("Father"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL9"));
	BoxSizer40->Add(RelationshipV, 1, wxALL|wxEXPAND, 5);
	BoxSizer23->Add(BoxSizer40, 1, wxALL|wxEXPAND, 5);
	BoxSizer41 = new wxBoxSizer(wxHORIZONTAL);
	Button9 = new wxButton(this, ID_BUTTON9, _("Execute"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON9"));
	BoxSizer41->Add(Button9, 1, wxALL|wxEXPAND, 5);
	BoxSizer23->Add(BoxSizer41, 1, wxALL|wxEXPAND, 5);
	BoxSizer1->Add(BoxSizer23, 1, wxALL|wxEXPAND, 5);
	BoxSizer42 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer43 = new wxBoxSizer(wxHORIZONTAL);
	StaticText11 = new wxStaticText(this, ID_STATICTEXT11, _("Photo Path:"), wxDefaultPosition, wxSize(-1,-1), 0, _T("ID_STATICTEXT11"));
	BoxSizer43->Add(StaticText11, 1, wxALL|wxEXPAND, 5);
	BoxSizer42->Add(BoxSizer43, 1, wxALL|wxEXPAND, 5);
	BoxSizer44 = new wxBoxSizer(wxHORIZONTAL);
	PhotoV = new wxTextCtrl(this, ID_TEXTCTRL10, _("path.jpg"), wxDefaultPosition, wxSize(-1,-1), 0, wxDefaultValidator, _T("ID_TEXTCTRL10"));
	BoxSizer44->Add(PhotoV, 1, wxALL|wxEXPAND, 5);
	BoxSizer42->Add(BoxSizer44, 1, wxALL|wxEXPAND, 5);
	BoxSizer45 = new wxBoxSizer(wxHORIZONTAL);
	Button4 = new wxButton(this, ID_BUTTON4, _("Execute"), wxDefaultPosition, wxSize(-1,-1), 0, wxDefaultValidator, _T("ID_BUTTON4"));
	BoxSizer45->Add(Button4, 1, wxALL|wxEXPAND, 5);
	BoxSizer42->Add(BoxSizer45, 1, wxALL|wxEXPAND, 5);
	BoxSizer1->Add(BoxSizer42, 1, wxALL|wxEXPAND, 5);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);
	Center();

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EditingD::EditingName);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EditingD::EditingLastName);
	Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EditingD::EditingStreetName);
	Connect(ID_BUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EditingD::EditingHouseNumber);
	Connect(ID_BUTTON6,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EditingD::EditingPostcode);
	Connect(ID_BUTTON7,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EditingD::EditingCity);
	Connect(ID_BUTTON8,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EditingD::EditingPhoneNumber);
	Connect(ID_BUTTON9,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EditingD::EditingRelationship);
	//*)
}

EditingD::~EditingD()
{
	//(*Destroy(EditingD)
	//*)
}


void EditingD::EditingName(wxCommandEvent& event)
{
    PersonWx p;
    p.choose="1";
    p.id=IdV->GetValue();
    p.name=NameV->GetValue();
    result=p;
    EndModal(wxID_OK);
}

void EditingD::EditingLastName(wxCommandEvent& event)
{
    PersonWx p;
    p.choose="2";
    p.id=IdV->GetValue();
    p.last_name=LastNameV->GetValue();
    result=p;
    EndModal(wxID_OK);
}

void EditingD::EditingStreetName(wxCommandEvent& event)
{
    PersonWx p;
    p.choose="3";
    p.id=IdV->GetValue();
    p.street_name=StreetNameV->GetValue();
    result=p;
    EndModal(wxID_OK);
}

void EditingD::EditingHouseNumber(wxCommandEvent& event)
{
    PersonWx p;
    p.choose="4";
    p.id=IdV->GetValue();
    p.house_number=HouseNumberV->GetValue();
    result=p;
    EndModal(wxID_OK);
}

void EditingD::EditingPostcode(wxCommandEvent& event)
{
    PersonWx p;
    p.choose="5";
    p.id=IdV->GetValue();
    p.postcode=PostcodeV->GetValue();
    result=p;
    EndModal(wxID_OK);
}

void EditingD::EditingCity(wxCommandEvent& event)
{
    PersonWx p;
    p.choose="6";
    p.id=IdV->GetValue();
    p.city=CityV->GetValue();
    result=p;
    EndModal(wxID_OK);
}

void EditingD::EditingPhoneNumber(wxCommandEvent& event)
{
    PersonWx p;
    p.choose="7";
    p.id=IdV->GetValue();
    p.phone_number=PhoneNumberV->GetValue();
    result=p;
    EndModal(wxID_OK);
}

void EditingD::EditingRelationship(wxCommandEvent& event)
{
    PersonWx p;
    p.choose="8";
    p.id=IdV->GetValue();
    p.relationship=RelationshipV->GetValue();
    result=p;
    EndModal(wxID_OK);
}

void EditingD::EditingPhotoPath(wxCommandEvent& event)
{
    PersonWx p;
    p.choose="9";
    p.id=IdV->GetValue();
    p.photo_path=PhotoV->GetValue();
    result=p;
    EndModal(wxID_OK);
}
