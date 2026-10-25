/***************************************************************
 * Name:      Family_Phone_BookApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Daniel Cieślak, Wiktoria Wójcik, Kamil Wyderski ()
 * Created:   2022-12-15
 * Copyright: Daniel Cieślak, Wiktoria Wójcik, Kamil Wyderski ()
 * License:
 **************************************************************/

#include "Family_Phone_BookApp.h"

//(*AppHeaders
#include "Family_Phone_BookMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(Family_Phone_BookApp);

bool Family_Phone_BookApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	Family_Phone_BookFrame* Frame = new Family_Phone_BookFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
