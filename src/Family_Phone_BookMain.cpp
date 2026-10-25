/***************************************************************
 * Name:      Family_Phone_BookMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Daniel Cieslak, Wiktoria Wojcik, Kamil Wyderski ()
 * Created:   2022-12-15
 * Copyright: Daniel Cieslak, Wiktoria Wojcik, Kamil Wyderski ()
 * License:
 **************************************************************/

#include "Family_Phone_BookMain.h"
#include "addingD.h"
#include "deletingD.h"
#include "searchingD.h"
#include "editingD.h"
#include "filteringD.h"
#include "sortingD.h"
#include "Library.h"
#include "UsersListD.h"
#include "CreateUserD.h"
#include "LoginWindow.h"
#include "ViewingD.h"
#include "PhotoD.h"

vector<Person> db;
bool hv=true;
bool login = true;
bool isemptydb = false;
string userPath;
string pathtoFile;
string path;

//(*InternalHeaders(Family_Phone_BookFrame)
#include <wx/artprov.h>
#include <wx/bitmap.h>
#include <wx/icon.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(Family_Phone_BookFrame)
const long Family_Phone_BookFrame::mainWindowID = wxNewId();
const long Family_Phone_BookFrame::addWx = wxNewId();
const long Family_Phone_BookFrame::deleteWx = wxNewId();
const long Family_Phone_BookFrame::editWx = wxNewId();
const long Family_Phone_BookFrame::filterWx = wxNewId();
const long Family_Phone_BookFrame::searchWx = wxNewId();
const long Family_Phone_BookFrame::sortASCWx = wxNewId();
const long Family_Phone_BookFrame::SortDESCWx = wxNewId();
const long Family_Phone_BookFrame::photoWx = wxNewId();
const long Family_Phone_BookFrame::moreWx = wxNewId();
const long Family_Phone_BookFrame::ID_TOOLBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Family_Phone_BookFrame,wxFrame)
    //(*EventTable(Family_Phone_BookFrame)
    //*)
END_EVENT_TABLE()

Family_Phone_BookFrame::Family_Phone_BookFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(Family_Phone_BookFrame)
    wxBoxSizer* BoxSizer1;

    Create(parent, wxID_ANY, _("Family_Phone_Book"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
    SetClientSize(wxSize(750,500));
    SetBackgroundColour(wxColour(255,255,128));
    {
    	wxIcon FrameIcon;
    	FrameIcon.CopyFromBitmap(wxArtProvider::GetBitmap(wxART_MAKE_ART_ID_FROM_STR(_T("wxART_GO_HOME")),wxART_FRAME_ICON));
    	SetIcon(FrameIcon);
    }
    BoxSizer1 = new wxBoxSizer(wxVERTICAL);
    mainWindowV = new wxListCtrl(this, mainWindowID, wxDefaultPosition, wxDefaultSize, wxLC_REPORT, wxDefaultValidator, _T("mainWindowID"));
    BoxSizer1->Add(mainWindowV, 1, wxALL|wxEXPAND, 5);
    SetSizer(BoxSizer1);
    ToolBar1 = new wxToolBar(this, ID_TOOLBAR1, wxDefaultPosition, wxDefaultSize, wxTB_HORIZONTAL, _T("ID_TOOLBAR1"));
    ToolBarItem1 = ToolBar1->AddTool(addWx, _("Adding"), wxArtProvider::GetBitmap(wxART_MAKE_ART_ID_FROM_STR(_T("wxART_ADD_BOOKMARK")),wxART_TOOLBAR), wxNullBitmap, wxITEM_NORMAL, _("Adding"), wxEmptyString);
    ToolBarItem2 = ToolBar1->AddTool(deleteWx, _("Deleting"), wxArtProvider::GetBitmap(wxART_MAKE_ART_ID_FROM_STR(_T("wxART_DEL_BOOKMARK")),wxART_TOOLBAR), wxNullBitmap, wxITEM_NORMAL, _("Deleting"), wxEmptyString);
    ToolBarItem8 = ToolBar1->AddTool(editWx, _("Editing"), wxArtProvider::GetBitmap(wxART_MAKE_ART_ID_FROM_STR(_T("wxART_PASTE")),wxART_TOOLBAR), wxNullBitmap, wxITEM_NORMAL, _("Editing"), wxEmptyString);
    ToolBarItem7 = ToolBar1->AddTool(filterWx, _("Filtering"), wxArtProvider::GetBitmap(wxART_MAKE_ART_ID_FROM_STR(_T("wxART_LIST_VIEW")),wxART_TOOLBAR), wxNullBitmap, wxITEM_NORMAL, _("Filtering"), wxEmptyString);
    ToolBarItem3 = ToolBar1->AddTool(searchWx, _("Searching"), wxArtProvider::GetBitmap(wxART_MAKE_ART_ID_FROM_STR(_T("wxART_FIND")),wxART_TOOLBAR), wxNullBitmap, wxITEM_NORMAL, _("Searching"), wxEmptyString);
    ToolBarItem4 = ToolBar1->AddTool(sortASCWx, _("SortingASC"), wxArtProvider::GetBitmap(wxART_MAKE_ART_ID_FROM_STR(_T("wxART_GO_UP")),wxART_TOOLBAR), wxNullBitmap, wxITEM_NORMAL, _("SortingASC"), wxEmptyString);
    ToolBarItem5 = ToolBar1->AddTool(SortDESCWx, _("SortingDESC"), wxArtProvider::GetBitmap(wxART_MAKE_ART_ID_FROM_STR(_T("wxART_GO_DOWN")),wxART_TOOLBAR), wxNullBitmap, wxITEM_NORMAL, _("SortingDESC"), wxEmptyString);
    ToolBarItem9 = ToolBar1->AddTool(photoWx, _("ViewPhoto"), wxArtProvider::GetBitmap(wxART_MAKE_ART_ID_FROM_STR(_T("wxART_HELP_PAGE")),wxART_TOOLBAR), wxNullBitmap, wxITEM_NORMAL, _("ViewPhoto"), wxEmptyString);
    ToolBarItem6 = ToolBar1->AddTool(moreWx, _("More"), wxArtProvider::GetBitmap(wxART_MAKE_ART_ID_FROM_STR(_T("wxART_TIP")),wxART_TOOLBAR), wxNullBitmap, wxITEM_NORMAL, _("More"), wxEmptyString);
    ToolBar1->Realize();
    SetToolBar(ToolBar1);
    SetSizer(BoxSizer1);
    Layout();
    Center();

    Connect(mainWindowID,wxEVT_COMMAND_LIST_BEGIN_DRAG,(wxObjectEventFunction)&Family_Phone_BookFrame::OnmainWindowVBeginDrag);
    Connect(addWx,wxEVT_COMMAND_TOOL_CLICKED,(wxObjectEventFunction)&Family_Phone_BookFrame::addingButton);
    Connect(deleteWx,wxEVT_COMMAND_TOOL_CLICKED,(wxObjectEventFunction)&Family_Phone_BookFrame::deletingButton);
    Connect(editWx,wxEVT_COMMAND_TOOL_CLICKED,(wxObjectEventFunction)&Family_Phone_BookFrame::editingButton);
    Connect(filterWx,wxEVT_COMMAND_TOOL_CLICKED,(wxObjectEventFunction)&Family_Phone_BookFrame::filteringButton);
    Connect(searchWx,wxEVT_COMMAND_TOOL_CLICKED,(wxObjectEventFunction)&Family_Phone_BookFrame::searchingButton);
    Connect(sortASCWx,wxEVT_COMMAND_TOOL_CLICKED,(wxObjectEventFunction)&Family_Phone_BookFrame::sortingASCButton);
    Connect(SortDESCWx,wxEVT_COMMAND_TOOL_CLICKED,(wxObjectEventFunction)&Family_Phone_BookFrame::sortingDESCButton);
    Connect(photoWx,wxEVT_COMMAND_TOOL_CLICKED,(wxObjectEventFunction)&Family_Phone_BookFrame::viewphotoButton);
    Connect(moreWx,wxEVT_COMMAND_TOOL_CLICKED,(wxObjectEventFunction)&Family_Phone_BookFrame::moreButton);
    //*)


    if(hv){
        LoginWindow dlg(this);
        if(login){
            if(dlg.ShowModal()==wxID_OK)
            {
                path=dlg.pathtoFile;
                login=false;
            }
            else
                Close();
            }
            readDataBase(path,db);
        }


    wxString line;
    long counter=1;
    mainWindowV->InsertColumn(0, "ID");
    mainWindowV->InsertColumn(1, "Name");
    mainWindowV->InsertColumn(2, "Last Name");
    mainWindowV->InsertColumn(3, "Street Name");
    mainWindowV->InsertColumn(4, "House Number");
    mainWindowV->InsertColumn(5, "Postcode");
    mainWindowV->InsertColumn(6, "City");
    mainWindowV->InsertColumn(7, "Phone number");
    mainWindowV->InsertColumn(8, "Relationship");
    for(long long int i=(db.size()-1);i>=0;i--)
    {
        wxListItem id, name, last_name, street_name, house_number, postcode, city, phone_number, relationship;
        id.SetColumn(0);
        id.SetId(counter);
        counter=mainWindowV->InsertItem(id);
        PersonWx p=convertToWx(i, db);
        mainWindowV->SetItem(counter, 0, p.id, -1);
        mainWindowV->SetItem(counter, 1, p.name, -1);
        mainWindowV->SetItem(counter, 2, p.last_name, -1);
        mainWindowV->SetItem(counter, 3, p.street_name, -1);
        mainWindowV->SetItem(counter, 4, p.house_number, -1);
        mainWindowV->SetItem(counter, 5, p.postcode, -1);
        mainWindowV->SetItem(counter, 6, p.city, -1);
        mainWindowV->SetItem(counter, 7, p.phone_number, -1);
        mainWindowV->SetItem(counter, 8, p.relationship, -1);
    }
}

Family_Phone_BookFrame::~Family_Phone_BookFrame()
{
    //(*Destroy(Family_Phone_BookFrame)
    //*)
}


void Family_Phone_BookFrame::userListButton(wxCommandEvent& event)
{
    UsersListD dlg(this);
    int res = dlg.ShowModal();
}

void Family_Phone_BookFrame::createUserButton(wxCommandEvent& event)
{
}

void Family_Phone_BookFrame::signInButton(wxCommandEvent& event)
{
}


void Family_Phone_BookFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void Family_Phone_BookFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

void Family_Phone_BookFrame::OnmainWindowVBeginDrag(wxListEvent& event)
{

}

void Family_Phone_BookFrame::viewphotoButton(wxCommandEvent& event)
{
    if(hv){
        PersonWx w;
        ViewingD dlg(this);
        if(dlg.ShowModal()==wxID_OK){
            w=dlg.GetResult();
            for(unsigned long long int lic=1;db.size()+1;lic++){
            wxString temp_lic;
            int tmp;
            tmp=wxAtoi(w.id);
            temp_lic<<lic;
            if(tmp<=0||tmp>db.size()+1){
                wxMessageBox("Wrong identifier!");
                break;
            }
            if(w.id==temp_lic){
                wxString pp;
                pp<<db[lic-1].photo_path;
                w.photo_path=pp;
                PhotoD dlg2(w,this);
                dlg2.ShowModal();
                break;
            }
            }

        }
        }
    hv=true;
    db.clear();
    this->Destroy();
    Family_Phone_BookFrame* mainF = new Family_Phone_BookFrame(0);
    mainF->Show();
}

void Family_Phone_BookFrame::addingButton(wxCommandEvent& event)
{
    if(hv){
        PersonWx w;
        AddingD dlg(this);
        if(dlg.ShowModal()== wxID_OK){
            w=dlg.GetResult();
        }
        if(w.choose=="1"){
            int cntp=db.size()+1;
            struct Person n=convertToCpp(w);
            addPerson(db,path, cntp, n);
            wxMessageBox("Adding completed successfully!");
        }
    }
    hv=true;
    db.clear();
    this->Destroy();
    Family_Phone_BookFrame* mainF = new Family_Phone_BookFrame(0);
    mainF->Show();
}

void Family_Phone_BookFrame::deletingButton(wxCommandEvent& event)
{
    if(hv){
        PersonWx w;
        DeletingD dlg(this);
        if(dlg.ShowModal()== wxID_OK){
            w=dlg.GetResult();
        }
        if(w.choose=="1"||w.choose=="2"||w.choose=="3"){
            struct Person n=convertToCpp(w);
            if(w.choose=="1")
                deletePerson(db, n.id);
            if(w.choose=="2")
                deletePersonbyFirstLastName(db, n.name, n.last_name);
            if(w.choose=="3")
                deletePersonbyPhoneNumber(db, n.phone_number);
            saveDataBase(db, path);
            wxMessageBox("Deleting completed successfully!");
        }
    }
    hv=true;
    db.clear();
    this->Destroy();
    Family_Phone_BookFrame* mainF = new Family_Phone_BookFrame(0);
    mainF->Show();
}

void Family_Phone_BookFrame::searchingButton(wxCommandEvent& event)
{
    if(hv){
        PersonWx w;
        SearchingD dlg(this);
        if(dlg.ShowModal()== wxID_OK){
            w=dlg.GetResult();
        }
        if(w.choose=="1"){
            searchPerson(w, db);
            wxMessageBox("Searching completed successfully!");
            hv=false;
            this->Destroy();
            Family_Phone_BookFrame* mainF = new Family_Phone_BookFrame(0);
            mainF->Show();
        }
        else{
            db.clear();
            this->Destroy();
            Family_Phone_BookFrame* mainF = new Family_Phone_BookFrame(0);
            mainF->Show();
        }
    }
    else{
        db.clear();
        hv=true;
        this->Destroy();
        Family_Phone_BookFrame* mainF = new Family_Phone_BookFrame(0);
        mainF->Show();
    }
}

void Family_Phone_BookFrame::sortingASCButton(wxCommandEvent& event)
{
    if(hv){
        short chs;
        SortingD dlg(this);
        if(dlg.ShowModal()== wxID_OK){
            chs=dlg.GetResult();
        }
        if(chs>0&&chs<10){
            if(chs==1)
                sortByIDAsc(db);
            if(chs==2)
                sortByNAMEAsc(db);
            if(chs==3)
                sortByLASTNAMEAsc(db);
            if(chs==4)
                sortBySTREETNAMEAsc(db);
            if(chs==5)
                sortByHOUSENUMBERAsc(db);
            if(chs==6)
                sortByPOSTCODEAsc(db);
            if(chs==7)
                sortByCITYAsc(db);
            if(chs==8)
                sortByPHONENUMBERAsc(db);
            if(chs==9)
                sortByRELATIONSHIPAsc(db);
            wxMessageBox("Sorting completed successfully!");
            hv=false;
            this->Destroy();
            Family_Phone_BookFrame* mainF = new Family_Phone_BookFrame(0);
            mainF->Show();
        }
        else{
            db.clear();
            this->Destroy();
            Family_Phone_BookFrame* mainF = new Family_Phone_BookFrame(0);
            mainF->Show();
        }
    }
    else{
        db.clear();
        hv=true;
        this->Destroy();
        Family_Phone_BookFrame* mainF = new Family_Phone_BookFrame(0);
        mainF->Show();
    }
}

void Family_Phone_BookFrame::sortingDESCButton(wxCommandEvent& event)
{
    if(hv){
        short chs;
        SortingD dlg(this);
        if(dlg.ShowModal()== wxID_OK){
            chs=dlg.GetResult();
        }
        if(chs>0&&chs<10){
            if(chs==1)
                sortByIDDesc(db);
            if(chs==2)
                sortByNAMEDesc(db);
            if(chs==3)
                sortByLASTNAMEDesc(db);
            if(chs==4)
                sortBySTREETNAMEDesc(db);
            if(chs==5)
                sortByHOUSENUMBERDesc(db);
            if(chs==6)
                sortByPOSTCODEDesc(db);
            if(chs==7)
                sortByCITYDesc(db);
            if(chs==8)
                sortByPHONENUMBERDesc(db);
            if(chs==9)
                sortByRELATIONSHIPDesc(db);
            wxMessageBox("Sorting completed successfully!");
            hv=false;
            this->Destroy();
            Family_Phone_BookFrame* mainF = new Family_Phone_BookFrame(0);
            mainF->Show();
        }
        else{
            db.clear();
            this->Destroy();
            Family_Phone_BookFrame* mainF = new Family_Phone_BookFrame(0);
            mainF->Show();
        }
    }
    else{
        db.clear();
        hv=true;
        this->Destroy();
        Family_Phone_BookFrame* mainF = new Family_Phone_BookFrame(0);
        mainF->Show();
    }
}

void Family_Phone_BookFrame::moreButton(wxCommandEvent& event)
{
    wxMessageBox("Authors: Daniel Cieslak, Wiktoria Wojcik, Kamil Wyderski");
}

void Family_Phone_BookFrame::editingButton(wxCommandEvent& event)
{
    if(hv){
        PersonWx w;
        EditingD dlg(this);
        if(dlg.ShowModal()== wxID_OK){
            w=dlg.GetResult();
        }
        if(w.choose=="1"||w.choose=="2"||w.choose=="3"||w.choose=="4"||w.choose=="5"||w.choose=="6"||w.choose=="7"||w.choose=="8"||w.choose=="9"){
            struct Person n=convertToCpp(w);
            if(w.choose=="1")
                editPersonbyNAME(db, n.id , n.name);
            if(w.choose=="2")
                editPersonbyLAST_NAME(db, n.id , n.last_name);
            if(w.choose=="3")
                editPersonbySTREET_NAME(db, n.id , n.street_name);
            if(w.choose=="4")
                editPersonbyHOUSE_NUMBER(db, n.id , n.house_number);
            if(w.choose=="5")
                editPersonbyPOSTCODE(db, n.id , n.postcode);
            if(w.choose=="6")
                editPersonbyCITY(db, n.id , n.city);
            if(w.choose=="7")
                editPersonbyRELATIONSHIP(db, n.id , n.relationship);
            if(w.choose=="8")
                editPersonbyPHONE_NUMBER(db, n.id , n.phone_number);
            if(w.choose=="9")
                editPersonbyPHOTO_PATH(db, n.id, n.photo_path);
            saveDataBase(db,path);
            wxMessageBox("Editing completed successfully!");
        }
    }
    hv=true;
    db.clear();
    this->Destroy();
    Family_Phone_BookFrame* mainF = new Family_Phone_BookFrame(0);
    mainF->Show();
}

void Family_Phone_BookFrame::filteringButton(wxCommandEvent& event)
{
    if(hv){
        PersonWx w;
        FilteringD dlg(this);
        if(dlg.ShowModal()== wxID_OK){
            w=dlg.GetResult();
        }
        if(w.choose=="1"||w.choose=="2"||w.choose=="3"||w.choose=="4"||w.choose=="5"||w.choose=="6"||w.choose=="7"||w.choose=="8"||w.choose=="9"){
            if(w.choose=="1")
                filterPersonbyID(w, db);
            if(w.choose=="2")
                filterPersonbyNAME(w, db);
            if(w.choose=="3")
                filterPersonbyLASTNAME(w, db);
            if(w.choose=="4")
                filterPersonbySTREETNAME(w, db);
            if(w.choose=="5")
                filterPersonbyHOUSENUMBER(w, db);
            if(w.choose=="6")
                filterPersonbyPOSTCODE(w, db);
            if(w.choose=="7")
                filterPersonbyCITY(w, db);
            if(w.choose=="8")
                filterPersonbyPHONENUMBER(w, db);
            if(w.choose=="9")
                filterPersonbyRELATIONSHIP(w, db);
            wxMessageBox("Filtering completed successfully!");
            hv=false;
            this->Destroy();
            Family_Phone_BookFrame* mainF = new Family_Phone_BookFrame(0);
            mainF->Show();
        }
        else{
            db.clear();
            this->Destroy();
            Family_Phone_BookFrame* mainF = new Family_Phone_BookFrame(0);
            mainF->Show();
        }
    }
    else{
        db.clear();
        hv=true;
        this->Destroy();
        Family_Phone_BookFrame* mainF = new Family_Phone_BookFrame(0);
        mainF->Show();
    }
}
