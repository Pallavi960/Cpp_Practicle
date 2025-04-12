#include<iostream>
using namespace std;
class Student{
    int rollno;
    string name;
    float marks[3];
    float per;
    public:
    Student()//default constructor
    {
        rollno=0;
        name="default";
        marks[0]=marks[1]=marks[2]=0;
        per=0;

    }
    //constructor overloding
    Student(int roll,string name,int m1,int m2,int m3)
    {
        rollno=roll;
        name=name;
        marks[0]=m1;
        marks[1]=m2;
        marks[3]=m3;
    }
    //caculate average
     float calculate_ave()
     {
     return (marks[0]+marks[1]+marks[2])/3;
    }

    //display data
    void display()
    {
     cout<<"Roll No:"<<rollno<<endl;
     cout<<"Name:"<<name<<endl;
     cout<<"Marks:"<<marks[0]<<","<<marks[1]<<","<<marks[2]<<endl;
     cout<<"Average:"<<calculate_ave()<<endl;
     cout<<endl;
    }
    //entering data
    void get_data()
    {
    cout<<"Enter the Roll No:";
    cin>>rollno;
    cout<<"Enter the name:";
    cin>>name;
    cout<<"Enter the marks"<<endl;

    cout<<"Subject 1:";
    cin>>marks[0];

    cout<<"Subject 2:";
    cin>>marks[1];

    cout<<"Subject 3:";
    cin>>marks[2];

    Student(rollno,name,marks[0],marks[1],marks[2]);
    cout<<endl;
    }
};

int main()
{
    int i;
    Student s[3];//here the program is for 3 students data we can increse number of student manualy
    for(i=0;i<3;i++)
    {
        s[i].get_data();
    }
    
    for(i=0;i<3;i++)
    {
        cout<<"-------------------------------"<<endl;
        cout<<"Details of sytudent:"<<i+1<<endl;
        cout<<"-------------------------------"<<endl;
        s[i].display();
        cout<<endl;
    }

    return 0;
}
