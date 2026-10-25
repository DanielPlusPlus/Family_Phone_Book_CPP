#include "DeletingD.h"

//(*InternalHeaders(DeletingD)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(DeletingD)
const long DeletingD::ID_STATICTEXT1 = wxNewId();
const long DeletingD::ID_TEXTCTRL1 = wxNewId();
const long DeletingD::ID_BUTTON1 = wxNewId();
const long DeletingD::ID_STATICLINE1 = wxNewId();
const long DeletingD::ID_STATICTEXT2 = wxNewId();
const long DeletingD::ID_TEXTCTRL2 = wxNewId();
const long DeletingD::ID_BUTTON2 = wxNewId();
const long DeletingD::ID_STATICTEXT3 = wxNewId();
const long DeletingD::ID_TEXTCTRL3 = wxNewId();
const long DeletingD::ID_PANEL1 = wxNewId();
const long DeletingD::ID_STATICLINE2 = wxNewId();
const long DeletingD::ID_STATICTEXT4 = wxNewId();
const long DeletingD::ID_TEXTCTRL4 = wxNewId();
const long DeletingD::ID_BUTTON3 = wxNewId();
//*)

BEGIN_EVENT_TABLE(DeletingD,wxDialog)
	//(*EventTable(DeletingD)
	//*)
END_EVENT_TABLE()

DeletingD::DeletingD(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(DeletingD)
	wxBoxSizer* BoxSizer10;
	wxBoxSizer* BoxSizer11;
	wxBoxSizer* BoxSizer12;
	wxBoxSizer* BoxSizer13;
	wxBoxSizer* BoxSizer14;
	wxBoxSizer* BoxSizer16;
	wxBoxSizer* BoxSizer17;
	wxBoxSizer* BoxSizer18;
	wxBoxSizer* BoxSizer1;
	wxBoxSizer* BoxSizer20;
	wxBoxSizer* BoxSizer22;
	wxBoxSizer* BoxSizer23;
	wxBoxSizer* BoxSizer24;
	wxBoxSizer* BoxSizer25;
	wxBoxSizer* BoxSizer2;
	wxBoxSizer* BoxSizer3;
	wxBoxSizer* BoxSizer4;
	wxBoxSizer* BoxSizer5;
	wxBoxSizer* BoxSizer7;
	wxBoxSizer* BoxSizer8;
	wxBoxSizer* BoxSizer9;

	Create(parent, wxID_ANY, _("Deleting existing person"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER, _T("wxID_ANY"));
	SetBackgroundColour(wxColour(255,255,128));
	BoxSizer1 = new wxBoxSizer(wxVERTICAL);
	BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("By ID:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	BoxSizer3->Add(StaticText1, 1, wxALL|wxEXPAND, 5);
	BoxSizer2->Add(BoxSizer3, 1, wxALL|wxEXPAND, 5);
	BoxSizer4 = new wxBoxSizer(wxHORIZONTAL);
	IdV = new wxTextCtrl(this, ID_TEXTCTRL1, _("1"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	BoxSizer4->Add(IdV, 1, wxALL|wxEXPAND, 5);
	BoxSizer2->Add(BoxSizer4, 1, wxALL|wxEXPAND, 5);
	BoxSizer14 = new wxBoxSizer(wxHORIZONTAL);
	Button1 = new wxButton(this, ID_BUTTON1, _("Execute"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	BoxSizer14->Add(Button1, 1, wxALL|wxEXPAND, 5);
	BoxSizer2->Add(BoxSizer14, 1, wxALL|wxEXPAND, 5);
	BoxSizer1->Add(BoxSizer2, 1, wxALL|wxEXPAND, 5);
	BoxSizer5 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer7 = new wxBoxSizer(wxHORIZONTAL);
	StaticLine1 = new wxStaticLine(this, ID_STATICLINE1, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE1"));
	BoxSizer7->Add(StaticLine1, 1, wxALL, 5);
	BoxSizer5->Add(BoxSizer7, 1, wxALL|wxEXPAND, 5);
	BoxSizer1->Add(BoxSizer5, 1, wxALL|wxEXPAND, 5);
	BoxSizer8 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer10 = new wxBoxSizer(wxHORIZONTAL);
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("By First Name and ..."), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	BoxSizer10->Add(StaticText2, 1, wxALL|wxEXPAND, 5);
	BoxSizer8->Add(BoxSizer10, 1, wxALL|wxEXPAND, 5);
	BoxSizer11 = new wxBoxSizer(wxHORIZONTAL);
	FirstNameV = new wxTextCtrl(this, ID_TEXTCTRL2, _("John"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	BoxSizer11->Add(FirstNameV, 1, wxALL|wxEXPAND, 5);
	BoxSizer8->Add(BoxSizer11, 1, wxALL|wxEXPAND, 5);
	BoxSizer16 = new wxBoxSizer(wxHORIZONTAL);
	Button2 = new wxButton(this, ID_BUTTON2, _("Execute"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	BoxSizer16->Add(Button2, 1, wxALL|wxEXPAND, 5);
	BoxSizer8->Add(BoxSizer16, 1, wxALL|wxEXPAND, 5);
	BoxSizer1->Add(BoxSizer8, 1, wxALL|wxEXPAND, 5);
	BoxSizer9 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer12 = new wxBoxSizer(wxHORIZONTAL);
	StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("...Last Name:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	BoxSizer12->Add(StaticText3, 1, wxALL|wxEXPAND, 5);
	BoxSizer9->Add(BoxSizer12, 1, wxALL|wxEXPAND, 5);
	BoxSizer13 = new wxBoxSizer(wxHORIZONTAL);
	LastNameV = new wxTextCtrl(this, ID_TEXTCTRL3, _("Smith"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
	BoxSizer13->Add(LastNameV, 1, wxALL|wxEXPAND, 5);
	BoxSizer9->Add(BoxSizer13, 1, wxALL|wxEXPAND, 5);
	BoxSizer17 = new wxBoxSizer(wxHORIZONTAL);
	Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	BoxSizer17->Add(Panel1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer9->Add(BoxSizer17, 1, wxALL|wxEXPAND, 5);
	BoxSizer1->Add(BoxSizer9, 1, wxALL|wxEXPAND, 5);
	BoxSizer18 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer20 = new wxBoxSizer(wxHORIZONTAL);
	StaticLine2 = new wxStaticLine(this, ID_STATICLINE2, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE2"));
	BoxSizer20->Add(StaticLine2, 1, wxALL, 5);
	BoxSizer18->Add(BoxSizer20, 1, wxALL|wxEXPAND, 5);
	BoxSizer1->Add(BoxSizer18, 1, wxALL|wxEXPAND, 5);
	BoxSizer22 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer23 = new wxBoxSizer(wxHORIZONTAL);
	StaticText4 = new wxStaticText(this, ID_STATICTEXT4, _("By Phone number:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	BoxSizer23->Add(StaticText4, 1, wxALL|wxEXPAND, 5);
	BoxSizer22->Add(BoxSizer23, 1, wxALL|wxEXPAND, 5);
	BoxSizer24 = new wxBoxSizer(wxHORIZONTAL);
	PhoneNumberV = new wxTextCtrl(this, ID_TEXTCTRL4, _("1111111111"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL4"));
	BoxSizer24->Add(PhoneNumberV, 1, wxALL|wxEXPAND, 5);
	BoxSizer22->Add(BoxSizer24, 1, wxALL|wxEXPAND, 5);
	BoxSizer25 = new wxBoxSizer(wxHORIZONTAL);
	Button3 = new wxButton(this, ID_BUTTON3, _("Execute"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
	BoxSizer25->Add(Button3, 1, wxALL|wxEXPAND, 5);
	BoxSizer22->Add(BoxSizer25, 1, wxALL|wxEXPAND, 5);
	BoxSizer1->Add(BoxSizer22, 1, wxALL|wxEXPAND, 5);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);
	Center();

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&DeletingD::DeletingID);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&DeletingD::DeletingFNLN);
	Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&DeletingD::DeletingPhone);
	//*)
}

DeletingD::~DeletingD()
{
	//(*Destroy(DeletingD)
	//*)
}


void DeletingD::DeletingID(wxCommandEvent& event)
{
    PersonWx p;
    p.choose="1";
    p.id=IdV->GetValue();
    result=p;
    EndModal(wxID_OK);
}

void DeletingD::DeletingFNLN(wxCommandEvent& event)
{
    PersonWx p;
    p.choose="2";
    p.name=FirstNameV->GetValue();
    p.last_name=LastNameV->GetValue();
    result=p;
    EndModal(wxID_OK);
}

void DeletingD::DeletingPhone(wxCommandEvent& event)
{
    PersonWx p;
    p.choose="3";
    p.phone_number=PhoneNumberV->GetValue();
    result=p;
    EndModal(wxID_OK);
}
