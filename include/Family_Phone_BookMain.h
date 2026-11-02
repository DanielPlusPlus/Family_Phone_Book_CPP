/***************************************************************
 * Name:      Family_Phone_BookMain.h
 * Purpose:   Defines Application Frame
 * Author:    Daniel Cieślak, Wiktoria Wójcik, Kamil Wyderski ()
 * Created:   2022-12-15
 * Copyright: Daniel Cieślak, Wiktoria Wójcik, Kamil Wyderski ()
 * License:
 **************************************************************/

#ifndef FAMILY_PHONE_BOOKMAIN_H
#define FAMILY_PHONE_BOOKMAIN_H

//(*Headers(Family_Phone_BookFrame)
#include <wx/frame.h>
#include <wx/listctrl.h>
#include <wx/sizer.h>
#include <wx/toolbar.h>
//*)

#include<string.h>

class Family_Phone_BookFrame: public wxFrame
{
    public:

        Family_Phone_BookFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~Family_Phone_BookFrame();

    private:

        //(*Handlers(Family_Phone_BookFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnListCtrl1BeginDrag(wxListEvent& event);
        void OnmainWindowVBeginDrag(wxListEvent& event);
        void addingButton(wxCommandEvent& event);
        void deletingButton(wxCommandEvent& event);
        void searchingButton(wxCommandEvent& event);
        void sortingASCButton(wxCommandEvent& event);
        void sortingDESCButton(wxCommandEvent& event);
        void moreButton(wxCommandEvent& event);
        void editingButton(wxCommandEvent& event);
        void filteringButton(wxCommandEvent& event);
        void userListButton(wxCommandEvent& event);
        void createUserButton(wxCommandEvent& event);
        void signInButton(wxCommandEvent& event);
        void viewphotoButton(wxCommandEvent& event);


        //*)

        //(*Identifiers(Family_Phone_BookFrame)
        static const long mainWindowID;
        static const long addWx;
        static const long deleteWx;
        static const long editWx;
        static const long filterWx;
        static const long searchWx;
        static const long sortASCWx;
        static const long SortDESCWx;
        static const long photoWx;
        static const long moreWx;
        static const long ID_TOOLBAR1;
        //*)

        //(*Declarations(Family_Phone_BookFrame)
        wxListCtrl* mainWindowV;
        wxToolBar* ToolBar1;
        wxToolBarToolBase* ToolBarItem1;
        wxToolBarToolBase* ToolBarItem2;
        wxToolBarToolBase* ToolBarItem3;
        wxToolBarToolBase* ToolBarItem4;
        wxToolBarToolBase* ToolBarItem5;
        wxToolBarToolBase* ToolBarItem6;
        wxToolBarToolBase* ToolBarItem7;
        wxToolBarToolBase* ToolBarItem8;
        wxToolBarToolBase* ToolBarItem9;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // FAMILY_PHONE_BOOKMAIN_H
