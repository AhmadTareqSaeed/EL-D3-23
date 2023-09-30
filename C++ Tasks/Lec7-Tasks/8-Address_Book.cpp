#include <cstddef>
#include <cstdio>
#include <iostream>
#include <fstream>
#include <ostream>
#include <stdlib.h>
#include <string>
#include <vector>

std::string fname , lname  ;
double number ;

void List();
void Add();
void Del();
void Delete_all();
void Search();
int  Close();

int main()
{
    std::cout<<"welcome to your favourite address book!"<<std::endl; 
    std::cout<<"what do you want to do ?"<<std::endl<<std::endl; 
    std::cout<<"1- List             | List all the users"<<std::endl;
    std::cout<<"2- Add              | Add an user"<<std::endl; 
    std::cout<<"3- Delete           | Delete an user"<<std::endl;
    std::cout<<"4- Delete all       | Delete all users"<<std::endl; 
    std::cout<<"5- Search           | Search for user"<<std::endl; 
    std::cout<<"6- Close            | Closes the address book"<<std::endl; 
    std::cout<<"Select the action by entering it's number: ";
    int input = 0 ; 
    std::cin >> input ;
    std::cin.ignore();
    switch (input) {
    case 1:
    List();
    break;
    case 2:
    Add();
    break;
    case 3:
    Del();
    break;
    case 4:
    Delete_all();
    break;
    case 5:
    Search();
    break;
    case 6:
    Close();
    break;
    default:
    std::cout<<"Error please try again!";
    }
    return 0;
}
void Add()
{
    
    std::ofstream oFile("Addressbook.txt", std::ios::app);
    std::cout<<"Enter first name: " ; 
    std::cin >> fname ; 
    std::cout<<"Enter last name: " ; 
    std::cin >> lname ; 
    std::cout<<"Enter contact number: " ; 
    std::cin >> number ; 
    std::cout<<fname<<" "<<lname<<" "<<number<<std::endl ; 
    if (oFile.is_open()) {
    oFile<<fname<<" "<<lname<<" "<<number ;
    oFile<<std::endl;
    }
    oFile.close();
    main();
}


void List()
{
    std::cout<<"List all the users:"<<std::endl;
    std::ifstream file("Addressbook.txt");
	file.open("Addressbook.txt"); //text file i.e.(rj.txt) 
	if (file.is_open()){
        std::cout << file.rdbuf(); 
	}
    main();
}

void Delete_all()
{
    std::fstream file;
    file.open("Addressbook.txt", std::ios::out | std::ios::trunc);
    file<<"";
    file.close(); 
    main();
}

void Search()
{
    bool found = false;
    std::ifstream oFile("Addressbook.txt");
    std::string contact  ;
    std::cout<<"Enter contact name: "; 
    std::cin>>contact ; 
    while (oFile >> fname >> lname >> number) 
    {
        if(contact == lname || contact == fname)
        {
            std::cout <<std::endl<<"First Name : " << fname<<std::endl;
            std::cout << "Last Name : " << lname<<std::endl;
            std::cout << "Phone Number : " << number<<std::endl<<std::endl;
            std::cout << "Back to Main menu" <<std::endl;
            std::cout << "-------Main menu-------" <<std::endl;
            found = true;
            break;
        }
    }
    if(found == false )
    {
        std::cout<<"No contact matched";
    }
    main();
}

void Del()
{  

    std::vector<std::string> lines;
    std::string line;
    int lineNum;

    std::ifstream oFile("Addressbook.txt");
    while (getline(oFile, line))
    {
        lines.push_back(line);
    }
    oFile.close();

    for(int i = 0; i < lines.size(); ++i)
    {
        std::cout << i+1 << "  " << lines[i] << std::endl;
    }

    std::cout << "Which contact would you like to delete?: ";  
    if ((std::cin >> lineNum) && (lineNum > 0) && (lineNum <= lines.size()))
    {
        lines.erase(lines.begin()+(lineNum-1));

        std::ofstream oFile("Addressbook.txt");

        for(int i = 0; i < lines.size(); ++i)
        {
            oFile << lines[i] << std::endl;
        }

        oFile.close();
    }
    main();
}


int Close()
{
    return 0 ;
}
