using namespace std;

struct student {
    std::string name;
    float gpa;
    int age;

    student *next;
};


int addfirst(student*&university,std::string Newname,float Newgpa, int Newage);
int addlast(student*&university,std::string Newname,float Newgpa, int Newage);
int AddAfter(student*&university,std::string Newname,float Newgpa, int Newage, std::string NameAfter);
int AddBefore(student*&university,std::string Newname,float Newgpa, int Newage, std::string NameBefore);
int delElement(student*&university,std::string nameDelete);
int printName(student *university,std::string printName);
int printList(student*university);


