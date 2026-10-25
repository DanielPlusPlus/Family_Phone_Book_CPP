#include "Library.h"

void dataBase(const string line,Person& person, int cntp)
{
    stringstream linestream(line);
    string tmp;
    short cnt=0;
    while(getline(linestream,tmp,';'))
    {
        if(cnt==0)
            person.id=cntp;
        else if(cnt==1)
            person.name=tmp;
        else if(cnt==2)
            person.last_name=tmp;
        else if(cnt==3)
            person.street_name=tmp;
        else if(cnt==4)
            person.house_number=atoi(tmp.c_str());
        else if(cnt==5)
            person.postcode=atoi(tmp.c_str());
        else if(cnt==6)
            person.city=tmp;
        else if(cnt==7)
            person.phone_number=atoi(tmp.c_str());
        else if(cnt==8)
            person.relationship=tmp;
        else if(cnt==9)
            person.photo_path=tmp;
        ++cnt;
    }
}

int readDataBase(string f,vector<Person> &db)
{
    int cntp=1;
    ifstream file;
    file.open(f);
    if(file)
    {
        string line;
        while(getline(file,line,'\n'))
        {
            Person nP;
            dataBase(line,nP,cntp);
            db.push_back(nP);
            cntp++;
        }
        file.close();
    }
    return cntp;
}

PersonWx convertToWx(long long int i, vector<Person> db){
    PersonWx w;
    struct Person n=db[i];
    w.id<<n.id;
    w.house_number<<n.house_number;
    w.postcode<<n.postcode;
    w.phone_number<<n.phone_number;
    wxString name(n.name);
    w.name=name;
    wxString last_name(n.last_name);
    w.last_name=last_name;
    wxString street_name(n.street_name);
    w.street_name=street_name;
    wxString city(n.city);
    w.city=city;
    wxString relationship(n.relationship);
    w.relationship=n.relationship;
    wxString photo_path(n.photo_path);
    w.photo_path=n.photo_path;
    return w;
}

AccountWx UserConvertToWx(long long int i, vector<Account> ACCdb){
    AccountWx w;
    struct Account n = ACCdb[i];
    wxString login(n.login);
    w.login=login;
    wxString password(n.password);
    w.password=password;
    wxString file(n.file);
    w.file=file;
    return w;
}


struct Person convertToCpp(PersonWx w){
    struct Person n;
    n.id=wxAtoi(w.id);
    n.house_number=wxAtoi(w.house_number);
    n.postcode=wxAtoi(w.postcode);
    n.phone_number=wxAtoi(w.phone_number);
    n.name=string(w.name.mb_str());
    n.last_name=string(w.last_name.mb_str());
    n.street_name=string(w.street_name.mb_str());
    n.city=string(w.city.mb_str());
    n.relationship=string(w.relationship.mb_str());
    n.photo_path=string(w.photo_path.mb_str());
    return n;
}

void addPerson(vector<Person> &db,string f, int cntp, struct Person p)
{
    if(db.empty())
    {
    ofstream file;
    p.id=cntp;
    file.open(f,ios::out | ios::app);
    db.push_back(p);
    file<<p.id<<";"<<p.name<<";"<<p.last_name<<";"<<p.street_name<<";"<<p.house_number<<";"<<p.postcode<<";"<<p.city<<";"<<p.phone_number<<";"<<p.relationship<<";"<<p.photo_path;
    file.close();
    }

    else{
    ofstream file;
    p.id=cntp;
    file.open(f,ios::out | ios::app);
    db.push_back(p);
    file<<"\n"<<p.id<<";"<<p.name<<";"<<p.last_name<<";"<<p.street_name<<";"<<p.house_number<<";"<<p.postcode<<";"<<p.city<<";"<<p.phone_number<<";"<<p.relationship<<";"<<p.photo_path;
    file.close();
    }
}

void saveDataBase(vector<Person> &db,string f)
{
    ofstream file;
    file.open(f,ios::out | ios::trunc);
    for(unsigned long long int i=0;i<db.size();++i)
    {
        if(i<(db.size()-1))
            file<<db[i].id<<";"<<db[i].name<<";"<<db[i].last_name<<";"<<db[i].street_name<<";"<<db[i].house_number<<";"<<db[i].postcode<<";"<<db[i].city<<";"<<db[i].phone_number<<";"<<db[i].relationship<<";"<<db[i].photo_path<<"\n";
        if(i==(db.size()-1))
            file<<db[i].id<<";"<<db[i].name<<";"<<db[i].last_name<<";"<<db[i].street_name<<";"<<db[i].house_number<<";"<<db[i].postcode<<";"<<db[i].city<<";"<<db[i].phone_number<<";"<<db[i].relationship<<";"<<db[i].photo_path;
    }
    file.close();
}

void deletePerson(vector<Person> &db,int id)
{
    db.erase(remove_if(db.begin(),db.end(),[&](Person const &person)
    {
        return person.id==id;
    }),db.end());
}

void deletePersonbyFirstLastName(vector<Person> &db,string fName,string lName)
{
    for(unsigned long long int i=0;i<db.size();++i)
    {
        if((db[i].name==fName)&&(db[i].last_name==lName))
            deletePerson(db,db[i].id);
    }
}

void deletePersonbyPhoneNumber(vector<Person> &db,unsigned int phone)
{
    db.erase(remove_if(db.begin(),db.end(),[&](Person const &person)
    {
        return person.phone_number==phone;
    }),db.end());
}

void searchPerson(PersonWx w, vector<Person> &db)
{
    struct Person n=convertToCpp(w);
    vector<Person> hp;
    for(unsigned long long int i=0;i<db.size();++i)
    {
        if((db[i].name==n.name)&&(db[i].last_name==n.last_name))
            hp.push_back(db[i]);
    }
    db.clear();
    for(unsigned long long int i=0;i<hp.size();++i)
    {
            db.push_back(hp[i]);
    }
}

void editPersonbyNAME(vector<Person> &db,int ID, string NEW_NAME)
{
    for(unsigned long long int i=0;i<db.size();++i)
    {
        if(db[i].id==ID)
        {
            db[i].name=NEW_NAME;
        }
    }
}

void editPersonbyPHOTO_PATH(vector<Person> &db,int ID, string NEW_NAME)
{
    for(unsigned long long int i=0;i<db.size();++i)
    {
        if(db[i].id==ID)
        {
            db[i].photo_path=NEW_NAME;
        }
    }
}

void editPersonbyLAST_NAME(vector<Person> &db,int ID, string NEW_NAME)
{
    for(unsigned long long int i=0;i<db.size();++i)
    {
        if(db[i].id==ID)
        {
            db[i].last_name=NEW_NAME;
        }
    }
}

void editPersonbySTREET_NAME(vector<Person> &db,int ID, string NEW_NAME)
{
    for(unsigned long long int i=0;i<db.size();++i)
    {
        if(db[i].id==ID)
        {
            db[i].street_name=NEW_NAME;
        }
    }
}

void editPersonbyHOUSE_NUMBER(vector<Person> &db,int ID, unsigned int NEW_NAME)
{
    for(unsigned long long int i=0;i<db.size();++i)
    {
        if(db[i].id==ID)
        {
            db[i].house_number=NEW_NAME;
        }
    }
}

void editPersonbyPOSTCODE(vector<Person> &db,int ID, unsigned int NEW_NAME)
{
    for(unsigned long long int i=0;i<db.size();++i)
    {
        if(db[i].id==ID)
        {
            db[i].postcode=NEW_NAME;
        }
    }
}

void editPersonbyCITY(vector<Person> &db,int ID, string NEW_NAME)
{
    for(unsigned long long int i=0;i<db.size();++i)
    {
        if(db[i].id==ID)
        {
            db[i].city=NEW_NAME;
        }
    }
}

void editPersonbyRELATIONSHIP(vector<Person> &db,int ID, string NEW_NAME)
{
    for(unsigned long long int i=0;i<db.size();++i)
    {
        if(db[i].id==ID)
        {
            db[i].relationship=NEW_NAME;
        }
    }
}

void editPersonbyPHONE_NUMBER(vector<Person> &db,int ID, unsigned int NEW_NAME)
{
    for(unsigned long long int i=0;i<db.size();++i)
    {
        if(db[i].id==ID)
        {
            db[i].phone_number=NEW_NAME;
        }
    }
}

void filterPersonbyID(PersonWx w, vector<Person> &db)
{
    struct Person n=convertToCpp(w);
    vector<Person> hp;
    for(unsigned long long int i=0;i<db.size();++i)
    {
        if(db[i].id==n.id)
            hp.push_back(db[i]);
    }
    db.clear();
    for(unsigned long long int i=0;i<hp.size();++i)
    {
            db.push_back(hp[i]);
    }
}

void filterPersonbyNAME(PersonWx w, vector<Person> &db)
{
    struct Person n=convertToCpp(w);
    vector<Person> hp;
    for(unsigned long long int i=0;i<db.size();++i)
    {
        if(db[i].name==n.name)
            hp.push_back(db[i]);
    }
    db.clear();
    for(unsigned long long int i=0;i<hp.size();++i)
    {
            db.push_back(hp[i]);
    }
}

void filterPersonbyLASTNAME(PersonWx w, vector<Person> &db)
{
    struct Person n=convertToCpp(w);
    vector<Person> hp;
    for(unsigned long long int i=0;i<db.size();++i)
    {
        if(db[i].last_name==n.last_name)
            hp.push_back(db[i]);
    }
    db.clear();
    for(unsigned long long int i=0;i<hp.size();++i)
    {
            db.push_back(hp[i]);
    }
}

void filterPersonbySTREETNAME(PersonWx w, vector<Person> &db)
{
    struct Person n=convertToCpp(w);
    vector<Person> hp;
    for(unsigned long long int i=0;i<db.size();++i)
    {
        if(db[i].street_name==n.street_name)
            hp.push_back(db[i]);
    }
    db.clear();
    for(unsigned long long int i=0;i<hp.size();++i)
    {
            db.push_back(hp[i]);
    }
}

void filterPersonbyHOUSENUMBER(PersonWx w, vector<Person> &db)
{
    struct Person n=convertToCpp(w);
    vector<Person> hp;
    for(unsigned long long int i=0;i<db.size();++i)
    {
        if(db[i].house_number==n.house_number)
            hp.push_back(db[i]);
    }
    db.clear();
    for(unsigned long long int i=0;i<hp.size();++i)
    {
            db.push_back(hp[i]);
    }
}

void filterPersonbyPOSTCODE(PersonWx w, vector<Person> &db)
{
    struct Person n=convertToCpp(w);
    vector<Person> hp;
    for(unsigned long long int i=0;i<db.size();++i)
    {
        if(db[i].postcode==n.postcode)
            hp.push_back(db[i]);
    }
    db.clear();
    for(unsigned long long int i=0;i<hp.size();++i)
    {
            db.push_back(hp[i]);
    }
}

void filterPersonbyCITY(PersonWx w, vector<Person> &db)
{
    struct Person n=convertToCpp(w);
    vector<Person> hp;
    for(unsigned long long int i=0;i<db.size();++i)
    {
        if(db[i].city==n.city)
            hp.push_back(db[i]);
    }
    db.clear();
    for(unsigned long long int i=0;i<hp.size();++i)
    {
            db.push_back(hp[i]);
    }
}

void filterPersonbyPHONENUMBER(PersonWx w, vector<Person> &db)
{
    struct Person n=convertToCpp(w);
    vector<Person> hp;
    for(unsigned long long int i=0;i<db.size();++i)
    {
        if(db[i].phone_number==n.phone_number)
            hp.push_back(db[i]);
    }
    db.clear();
    for(unsigned long long int i=0;i<hp.size();++i)
    {
            db.push_back(hp[i]);
    }
}

void filterPersonbyRELATIONSHIP(PersonWx w, vector<Person> &db)
{
    struct Person n=convertToCpp(w);
    vector<Person> hp;
    for(unsigned long long int i=0;i<db.size();++i)
    {
        if(db[i].relationship==n.relationship)
            hp.push_back(db[i]);
    }
    db.clear();
    for(unsigned long long int i=0;i<hp.size();++i)
    {
            db.push_back(hp[i]);
    }
}

void sortByIDAsc(vector<Person> &db)
{
    vector<Person> pom;
    for(unsigned long long int j=0;j<db.size();++j)
        pom.push_back(db[j]);
    bool bChange;
    do{
        bChange=false;
        for(unsigned long long int i=0;i<db.size()-1;++i)
        {
            if(pom[i].id>pom[i+1].id)
            {
                struct Person tmp;
                tmp=pom[i];
                pom[i]=pom[i+1];
                pom[i+1]=tmp;
                bChange=true;
            }
        }
    }while(bChange);
    db.clear();
    for(unsigned long long int i=0;i<pom.size();++i)
    {
            db.push_back(pom[i]);
    }
}

void sortByIDDesc(vector<Person> &db)
{
    vector<Person> pom;
    for(unsigned long long int j=0;j<db.size();++j)
        pom.push_back(db[j]);
    bool bChange;
    do{
        bChange=false;
        for(unsigned long long int i=0;i<db.size()-1;++i)
        {
            if(pom[i].id<pom[i+1].id)
            {
                struct Person tmp;
                tmp=pom[i];
                pom[i]=pom[i+1];
                pom[i+1]=tmp;
                bChange=true;
            }
        }
    }while(bChange);
    db.clear();
    for(unsigned long long int i=0;i<pom.size();++i)
    {
            db.push_back(pom[i]);
    }
}

void sortByNAMEAsc(vector<Person> &db)
{
    vector<Person> pom;
    for(unsigned long long int j=0;j<db.size();++j)
        pom.push_back(db[j]);
    bool bChange;
    do{
        bChange=false;
        for(unsigned long long int i=0;i<db.size()-1;++i)
        {
            if(pom[i].name>pom[i+1].name)
            {
                struct Person tmp;
                tmp=pom[i];
                pom[i]=pom[i+1];
                pom[i+1]=tmp;
                bChange=true;
            }
        }
    }while(bChange);
    db.clear();
    for(unsigned long long int i=0;i<pom.size();++i)
    {
            db.push_back(pom[i]);
    }
}

void sortByNAMEDesc(vector<Person> &db)
{
    vector<Person> pom;
    for(unsigned long long int j=0;j<db.size();++j)
        pom.push_back(db[j]);
    bool bChange;
    do{
        bChange=false;
        for(unsigned long long int i=0;i<db.size()-1;++i)
        {
            if(pom[i].name<pom[i+1].name)
            {
                struct Person tmp;
                tmp=pom[i];
                pom[i]=pom[i+1];
                pom[i+1]=tmp;
                bChange=true;
            }
        }
    }while(bChange);
    db.clear();
    for(unsigned long long int i=0;i<pom.size();++i)
    {
            db.push_back(pom[i]);
    }
}

void sortByLASTNAMEAsc(vector<Person> &db)
{
    vector<Person> pom;
    for(unsigned long long int j=0;j<db.size();++j)
        pom.push_back(db[j]);
    bool bChange;
    do{
        bChange=false;
        for(unsigned long long int i=0;i<db.size()-1;++i)
        {
            if(pom[i].last_name>pom[i+1].last_name)
            {
                struct Person tmp;
                tmp=pom[i];
                pom[i]=pom[i+1];
                pom[i+1]=tmp;
                bChange=true;
            }
        }
    }while(bChange);
    db.clear();
    for(unsigned long long int i=0;i<pom.size();++i)
    {
            db.push_back(pom[i]);
    }
}

void sortByLASTNAMEDesc(vector<Person> &db)
{
    vector<Person> pom;
    for(unsigned long long int j=0;j<db.size();++j)
        pom.push_back(db[j]);
    bool bChange;
    do{
        bChange=false;
        for(unsigned long long int i=0;i<db.size()-1;++i)
        {
            if(pom[i].last_name<pom[i+1].last_name)
            {
                struct Person tmp;
                tmp=pom[i];
                pom[i]=pom[i+1];
                pom[i+1]=tmp;
                bChange=true;
            }
        }
    }while(bChange);
    db.clear();
    for(unsigned long long int i=0;i<pom.size();++i)
    {
            db.push_back(pom[i]);
    }
}

void sortBySTREETNAMEAsc(vector<Person> &db)
{
    vector<Person> pom;
    for(unsigned long long int j=0;j<db.size();++j)
        pom.push_back(db[j]);
    bool bChange;
    do{
        bChange=false;
        for(unsigned long long int i=0;i<db.size()-1;++i)
        {
            if(pom[i].street_name>pom[i+1].street_name)
            {
                struct Person tmp;
                tmp=pom[i];
                pom[i]=pom[i+1];
                pom[i+1]=tmp;
                bChange=true;
            }
        }
    }while(bChange);
    db.clear();
    for(unsigned long long int i=0;i<pom.size();++i)
    {
            db.push_back(pom[i]);
    }
}

void sortBySTREETNAMEDesc(vector<Person> &db)
{
    vector<Person> pom;
    for(unsigned long long int j=0;j<db.size();++j)
        pom.push_back(db[j]);
    bool bChange;
    do{
        bChange=false;
        for(unsigned long long int i=0;i<db.size()-1;++i)
        {
            if(pom[i].street_name<pom[i+1].street_name)
            {
                struct Person tmp;
                tmp=pom[i];
                pom[i]=pom[i+1];
                pom[i+1]=tmp;
                bChange=true;
            }
        }
    }while(bChange);
    db.clear();
    for(unsigned long long int i=0;i<pom.size();++i)
    {
            db.push_back(pom[i]);
    }
}

void sortByHOUSENUMBERAsc(vector<Person> &db)
{
    vector<Person> pom;
    for(unsigned long long int j=0;j<db.size();++j)
        pom.push_back(db[j]);
    bool bChange;
    do{
        bChange=false;
        for(unsigned long long int i=0;i<db.size()-1;++i)
        {
            if(pom[i].house_number>pom[i+1].house_number)
            {
                struct Person tmp;
                tmp=pom[i];
                pom[i]=pom[i+1];
                pom[i+1]=tmp;
                bChange=true;
            }
        }
    }while(bChange);
    db.clear();
    for(unsigned long long int i=0;i<pom.size();++i)
    {
            db.push_back(pom[i]);
    }
}

void sortByHOUSENUMBERDesc(vector<Person> &db)
{
    vector<Person> pom;
    for(unsigned long long int j=0;j<db.size();++j)
        pom.push_back(db[j]);
    bool bChange;
    do{
        bChange=false;
        for(unsigned long long int i=0;i<db.size()-1;++i)
        {
            if(pom[i].house_number<pom[i+1].house_number)
            {
                struct Person tmp;
                tmp=pom[i];
                pom[i]=pom[i+1];
                pom[i+1]=tmp;
                bChange=true;
            }
        }
    }while(bChange);
    db.clear();
    for(unsigned long long int i=0;i<pom.size();++i)
    {
            db.push_back(pom[i]);
    }
}

void sortByPOSTCODEAsc(vector<Person> &db)
{
    vector<Person> pom;
    for(unsigned long long int j=0;j<db.size();++j)
        pom.push_back(db[j]);
    bool bChange;
    do{
        bChange=false;
        for(unsigned long long int i=0;i<db.size()-1;++i)
        {
            if(pom[i].postcode>pom[i+1].postcode)
            {
                struct Person tmp;
                tmp=pom[i];
                pom[i]=pom[i+1];
                pom[i+1]=tmp;
                bChange=true;
            }
        }
    }while(bChange);
    db.clear();
    for(unsigned long long int i=0;i<pom.size();++i)
    {
            db.push_back(pom[i]);
    }
}

void sortByPOSTCODEDesc(vector<Person> &db)
{
    vector<Person> pom;
    for(unsigned long long int j=0;j<db.size();++j)
        pom.push_back(db[j]);
    bool bChange;
    do{
        bChange=false;
        for(unsigned long long int i=0;i<db.size()-1;++i)
        {
            if(pom[i].postcode<pom[i+1].postcode)
            {
                struct Person tmp;
                tmp=pom[i];
                pom[i]=pom[i+1];
                pom[i+1]=tmp;
                bChange=true;
            }
        }
    }while(bChange);
    db.clear();
    for(unsigned long long int i=0;i<pom.size();++i)
    {
            db.push_back(pom[i]);
    }
}

void sortByPHONENUMBERAsc(vector<Person> &db)
{
    vector<Person> pom;
    for(unsigned long long int j=0;j<db.size();++j)
        pom.push_back(db[j]);
    bool bChange;
    do{
        bChange=false;
        for(unsigned long long int i=0;i<db.size()-1;++i)
        {
            if(pom[i].phone_number>pom[i+1].phone_number)
            {
                struct Person tmp;
                tmp=pom[i];
                pom[i]=pom[i+1];
                pom[i+1]=tmp;
                bChange=true;
            }
        }
    }while(bChange);
    db.clear();
    for(unsigned long long int i=0;i<pom.size();++i)
    {
            db.push_back(pom[i]);
    }
}

void sortByPHONENUMBERDesc(vector<Person> &db)
{
    vector<Person> pom;
    for(unsigned long long int j=0;j<db.size();++j)
        pom.push_back(db[j]);
    bool bChange;
    do{
        bChange=false;
        for(unsigned long long int i=0;i<db.size()-1;++i)
        {
            if(pom[i].phone_number<pom[i+1].phone_number)
            {
                struct Person tmp;
                tmp=pom[i];
                pom[i]=pom[i+1];
                pom[i+1]=tmp;
                bChange=true;
            }
        }
    }while(bChange);
    db.clear();
    for(unsigned long long int i=0;i<pom.size();++i)
    {
            db.push_back(pom[i]);
    }
}

void sortByCITYAsc(vector<Person> &db)
{
    vector<Person> pom;
    for(unsigned long long int j=0;j<db.size();++j)
        pom.push_back(db[j]);
    bool bChange;
    do{
        bChange=false;
        for(unsigned long long int i=0;i<db.size()-1;++i)
        {
            if(pom[i].city>pom[i+1].city)
            {
                struct Person tmp;
                tmp=pom[i];
                pom[i]=pom[i+1];
                pom[i+1]=tmp;
                bChange=true;
            }
        }
    }while(bChange);
    db.clear();
    for(unsigned long long int i=0;i<pom.size();++i)
    {
            db.push_back(pom[i]);
    }
}

void sortByCITYDesc(vector<Person> &db)
{
    vector<Person> pom;
    for(unsigned long long int j=0;j<db.size();++j)
        pom.push_back(db[j]);
    bool bChange;
    do{
        bChange=false;
        for(unsigned long long int i=0;i<db.size()-1;++i)
        {
            if(pom[i].city<pom[i+1].city)
            {
                struct Person tmp;
                tmp=pom[i];
                pom[i]=pom[i+1];
                pom[i+1]=tmp;
                bChange=true;
            }
        }
    }while(bChange);
    db.clear();
    for(unsigned long long int i=0;i<pom.size();++i)
    {
            db.push_back(pom[i]);
    }
}

void sortByRELATIONSHIPAsc(vector<Person> &db)
{
    vector<Person> pom;
    for(unsigned long long int j=0;j<db.size();++j)
        pom.push_back(db[j]);
    bool bChange;
    do{
        bChange=false;
        for(unsigned long long int i=0;i<db.size()-1;++i)
        {
            if(pom[i].relationship>pom[i+1].relationship)
            {
                struct Person tmp;
                tmp=pom[i];
                pom[i]=pom[i+1];
                pom[i+1]=tmp;
                bChange=true;
            }
        }
    }while(bChange);
    db.clear();
    for(unsigned long long int i=0;i<pom.size();++i)
    {
            db.push_back(pom[i]);
    }
}

void sortByRELATIONSHIPDesc(vector<Person> &db)
{
    vector<Person> pom;
    for(unsigned long long int j=0;j<db.size();++j)
        pom.push_back(db[j]);
    bool bChange;
    do{
        bChange=false;
        for(unsigned long long int i=0;i<db.size()-1;++i)
        {
            if(pom[i].relationship<pom[i+1].relationship)
            {
                struct Person tmp;
                tmp=pom[i];
                pom[i]=pom[i+1];
                pom[i+1]=tmp;
                bChange=true;
            }
        }
    }while(bChange);
    db.clear();
    for(unsigned long long int i=0;i<pom.size();++i)
    {
            db.push_back(pom[i]);
    }
}

void dataBaseForAccount(const string line,Account& ACCdb)
{
    stringstream linestream(line);
    string tmp;
    short cnt=0;
    while(getline(linestream,tmp,';'))
    {
        if(cnt==0)
            ACCdb.login=tmp;
        else if(cnt==1)
            ACCdb.password=tmp;
        else if(cnt==2)
            ACCdb.file=tmp;
        ++cnt;
    }
}

void readAccount(string f,vector<Account> &ACCdb)
{
    ifstream file;
    file.open(f);
    if(file)
    {
        string line;
        while(getline(file,line,'\n'))
        {
            Account nA;
            dataBaseForAccount(line,nA);
            ACCdb.push_back(nA);
        }
        file.close();
    }
    else
        puts("ERROR");
}

void addAccount(vector<Account> &ACCdb,string f,int cntp)
{
    ofstream file;
    file.open(f,ios::out | ios::app);
    Account tmp;
    cin>>tmp.login;
    cin.ignore();
    getline(cin,tmp.password);
    string namefile = tmp.login +".txt";
    tmp.file = namefile;
    ACCdb.push_back(tmp);
    file<<"\n"<<tmp.login<<";"<<tmp.password<<";"<<tmp.file;

    ofstream CreateFile(namefile);
    CreateFile.close();
}


void deleteAccount(vector<Account> &acc, string login, string password)
{

    for(unsigned long long int i=0;i<acc.size();++i)
    {
        if(acc[i].login == login && acc[i].password == password)
        {
            acc.erase(remove_if(acc.begin(),acc.end(),[&](Account const &account)
            {
                return account.login==login;
            }),
            acc.end());
        }
    }

}

void SaveAccDB(vector<Account> &acc,string f)
{
    ofstream file;
    file.open(f,ios::out | ios::trunc);
    for(unsigned long long int i=0;i<acc.size();++i)
    {
        if(i<(acc.size()-1))
            file<<acc[i].login<<";"<<acc[i].password<<";"<<acc[i].file<<"\n";
        if(i==(acc.size()-1))
            file<<acc[i].login<<";"<<acc[i].password<<";"<<acc[i].file;
    }
    file.close();
}


