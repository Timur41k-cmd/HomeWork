#include <iostream>
#include "studentFunctions.h"


string m_alredy_in_list = "Alredy in List";

int addfirst(student*&university,string Newname,float Newgpa, int Newage){
    student *newstudent = new student;
    newstudent->name = Newname;
    student *tmp = university;

    while(tmp!=NULL){
        if(tmp->name==Newname){
            cout<<m_alredy_in_list;
            return 0;
        }
        tmp = tmp->next;
    }
    newstudent ->age = Newage;
    newstudent->gpa = Newgpa;
    newstudent->next=university;
    university=newstudent;
    return 0;
}

int addlast(student*&university,string Newname,float Newgpa, int Newage){
    student *tmp = university;
    if (university==NULL){
        addfirst(university,Newname,Newgpa,Newage);
        return 0;
    }
    student *newstudent = new student;
    newstudent->name = Newname;
    while(tmp!=NULL){
        if(tmp->name==Newname){
            cout<<m_alredy_in_list;
            return 0;
        }
        tmp = tmp->next;
    }
    newstudent ->age = Newage;
    newstudent->gpa = Newgpa;
    newstudent->next=NULL;
    tmp->next=newstudent;
    return 0;
}

int AddAfter(student*&university,string Newname,float Newgpa, int Newage, string NameAfter){
    if(university==NULL){
        cout<<"List is empty";
        return 0;
    }
    student *tmp = new student;
    student *newstudent = new student;
    newstudent->name=Newname;
    while(tmp!=NULL){
        if(tmp->name==Newname){
            cout<<m_alredy_in_list;
            return 0;
        }
        tmp = tmp->next;
    }
    tmp = university->next;
    while(tmp!=NULL && tmp->name!=NameAfter){
        tmp = tmp->next;

    }
    if(tmp==NULL){
        return 0;
    }
    newstudent->age=Newage;
    newstudent->gpa=Newgpa;
    newstudent->next=tmp->next;
    tmp->next=newstudent;
    return 0;
}

int AddBefore(student*&university,string Newname,float Newgpa, int Newage, string NameBefore){
    if(university==NULL){
        return 0;
    }
    if (university->name == NameBefore){
        addfirst(university,Newname,Newgpa,Newage);
        return 0;
    }
    if(university->next == NULL){
        return 0;
    }
    student *prev = university;
    student *tmp = university->next;
    student *newstudent = new student;
    newstudent->name=Newname;

    while(tmp->next!=NULL && tmp->name!=NameBefore){
        if(tmp->name == Newname){
            cout << m_alredy_in_list;
            return 0;
        }
        prev = prev->next;
        tmp = tmp->next;
    }
    if (tmp->next==NULL && tmp ->name!=NameBefore){
        cout << "Element is not in list";
        return 0;
    }
    newstudent->age = Newage;
    newstudent->gpa = Newgpa;
    newstudent->next = tmp; 
    prev->next=newstudent;
    return 0;
}

int delElement(student*&university,string nameDelete){
    if(university==NULL){
        return 0;
    }
    student*tmp = university;
    if(university->name==nameDelete){
        university=university->next;
        delete tmp;
        return 0;
    }
    if(university->next == NULL){
        return 0;
    }
    student*prev = university;
    tmp = university->next;
    while(tmp->next!=NULL && tmp->name != nameDelete){
        prev = prev->next;
        tmp = tmp->next;
    }
    if(tmp->next==NULL && tmp->name!=nameDelete){
        return 0;
    }
    prev->next=tmp->next;
    delete tmp;
    return 0;
}

int printList(student *university){
    if(university==NULL){
        cout << "List is empty";
        return 0;
    }
    student *tmp = university;
    while(tmp!=NULL){
        cout << "Student: " << tmp->name<<
        "\nGPA: "<<tmp->gpa<<
        "\nAge: "<<tmp->age << "\n";
        tmp = tmp->next;
    }
    return 0;
}

int printName(student *university,string printName){
    bool stat = false;
    if(university==NULL){
        cout << "List is empty";
        return 0;
    }
    student *tmp = university;
    while(tmp!=NULL){
        if(tmp->name == printName){
            cout << "Student: " << tmp->name<<
            "\nGPA: "<<tmp->gpa<<
            "\nAge: "<<tmp->age << "\n";
            stat = true;
        }
        tmp = tmp->next;
    }
    if (stat == false){
        cout << "Element is not in list";
    }
    return 0;
}


