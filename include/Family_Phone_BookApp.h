/***************************************************************
 * Name:      Family_Phone_BookApp.h
 * Purpose:   Defines Application Class
 * Author:    Daniel Cieślak, Wiktoria Wójcik, Kamil Wyderski ()
 * Created:   2022-12-15
 * Copyright: Daniel Cieślak, Wiktoria Wójcik, Kamil Wyderski ()
 * License:
 **************************************************************/

#ifndef FAMILY_PHONE_BOOKAPP_H
#define FAMILY_PHONE_BOOKAPP_H

#include <wx/app.h>

class Family_Phone_BookApp : public wxApp
{
    public:
        virtual bool OnInit();
};

#endif // FAMILY_PHONE_BOOKAPP_H
