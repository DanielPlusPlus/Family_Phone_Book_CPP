#ifndef Library_h
#define Library_h
#include <wx/msgdlg.h>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <string.h>
using namespace std;

struct Person
{
    int choose;
    int id;
    std::string name;
    std::string last_name;
    std::string street_name;
    unsigned int house_number;
    unsigned int postcode;
    std::string city;
    unsigned int phone_number;
    std::string relationship;
    std::string photo_path;
};

struct Account
{
    int userid;
    std::string login;
    std::string password;
    std::string file;
};

typedef struct PersonWx
{
    wxString choose;
    wxString id;
    wxString name;
    wxString last_name;
    wxString street_name;
    wxString house_number;
    wxString postcode;
    wxString city;
    wxString phone_number;
    wxString relationship;
    wxString photo_path;
}PersonWx;

typedef struct AccountWx
{
    wxString userid;
    wxString login;
    wxString password;
    wxString file;
}AccountWx;

void dataBase(const std::string line,Person& person, int cntp);

int readDataBase(std::string f,std::vector<Person> &db);

PersonWx convertToWx(long long int i, std::vector<Person> db);

AccountWx UserConvertToWx(long long int i, std::vector<Account> ACCdb);

struct Person convertToCpp(PersonWx w);

void addPerson(std::vector<Person> &db,std::string f, int cntp, struct Person n);

void saveDataBase(std::vector<Person> &db,std::string f);

void deletePerson(std::vector<Person> &db,int id);

void deletePersonbyFirstLastName(std::vector<Person> &db,std::string fName,std::string lName);

void deletePersonbyPhoneNumber(std::vector<Person> &db,unsigned int phone);

void searchPerson(PersonWx w, std::vector<Person> &db);

void editPersonbyPHOTO_PATH(std::vector<Person> &db,int ID, std::string NEW_NAME);

void editPersonbyNAME(std::vector<Person> &db,int ID, std::string NEW_NAME);

void editPersonbyLAST_NAME(std::vector<Person> &db,int ID, std::string NEW_NAME);

void editPersonbySTREET_NAME(std::vector<Person> &db,int ID, std::string NEW_NAME);

void editPersonbyHOUSE_NUMBER(std::vector<Person> &db,int ID, unsigned int NEW_NAME);

void editPersonbyPOSTCODE(std::vector<Person> &db,int ID, unsigned int NEW_NAME);

void editPersonbyCITY(std::vector<Person> &db,int ID, std::string NEW_NAME);

void editPersonbyRELATIONSHIP(std::vector<Person> &db,int ID, std::string NEW_NAME);

void editPersonbyPHONE_NUMBER(std::vector<Person> &db,int ID, unsigned int NEW_NAME);

void filterPersonbyID(PersonWx w, std::vector<Person> &db);

void filterPersonbyNAME(PersonWx w, std::vector<Person> &db);

void filterPersonbyLASTNAME(PersonWx w, std::vector<Person> &db);

void filterPersonbySTREETNAME(PersonWx w, std::vector<Person> &db);

void filterPersonbyHOUSENUMBER(PersonWx w, std::vector<Person> &db);

void filterPersonbyPOSTCODE(PersonWx w, std::vector<Person> &db);

void filterPersonbyCITY(PersonWx w, std::vector<Person> &db);

void filterPersonbyPHONENUMBER(PersonWx w, std::vector<Person> &db);

void filterPersonbyRELATIONSHIP(PersonWx w, std::vector<Person> &db);

void sortByIDAsc(std::vector<Person> &db);

void sortByIDDesc(std::vector<Person> &db);

void sortByNAMEAsc(std::vector<Person> &db);

void sortByNAMEDesc(std::vector<Person> &db);

void sortByLASTNAMEAsc(std::vector<Person> &db);

void sortByLASTNAMEDesc(std::vector<Person> &db);

void sortBySTREETNAMEAsc(std::vector<Person> &db);

void sortBySTREETNAMEDesc(std::vector<Person> &db);

void sortByHOUSENUMBERAsc(std::vector<Person> &db);

void sortByHOUSENUMBERDesc(std::vector<Person> &db);

void sortByPOSTCODEAsc(std::vector<Person> &db);

void sortByPOSTCODEDesc(std::vector<Person> &db);

void sortByPHONENUMBERAsc(std::vector<Person> &db);

void sortByPHONENUMBERDesc(std::vector<Person> &db);

void sortByCITYAsc(std::vector<Person> &db);

void sortByCITYDesc(std::vector<Person> &db);

void sortByRELATIONSHIPAsc(std::vector<Person> &db);

void sortByRELATIONSHIPDesc(std::vector<Person> &db);

void deleteAccount(std::vector<Account> &acc, std::string login, std::string password);

void readAccount(std::string f,std::vector<Account> &ACCdb);

void dataBaseForAccount(const std::string line,Account& ACCdb);

void SaveAccDB(std::vector<Account> &acc,std::string f);
#endif
