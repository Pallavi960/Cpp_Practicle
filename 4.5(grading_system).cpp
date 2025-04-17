#include<vector>
#include<iostream>
using namespace std;

class Student{
protected:
    int marks;
public:
    void get_mark(int mark)
    {
        marks=mark;
    }

    virtual char grading_system()=0;//pure virtual function
};
class Under_graduate : public Student{
    public:
   char grading_system() override//here if dont write override its okay
    {
        if(marks>=85)return 'A';
        else if(marks>=70) return 'B';
        else if(marks>=50) return 'C';
        else return 'D';
    }

};
class Post_graduate : public Student{
    public:
    char grading_system() override//here if don't write override its okay
    {
        if(marks>=95) return 'A';
        else if(marks>=80) return 'B';
        else if(marks>=65) return 'C';
        else return 'D';
    }
};

int main()
{
    int student,type,Marks;
    vector<Student*>students;


    cout<<"Enter number of student:";
    cin>>student;


    for(int i=0;i<student;i++)
    {
        cout<<"Enter 1 for undergraduate student and 2 for Post graduate student:";
        cin>>type;

        cout<<"Enter marks:";
        cin>>Marks;
        Student* s =NULL;
        if(type==1)
        {
          s=new Under_graduate();//callocate memory dynamically
        }
        else if(type==2)
        {

            s=new Post_graduate();
        }
        else{
            cout<<"Invalid Entery skpping....."<<endl;
        }
        s->get_mark(Marks);
        students.push_back(s);
    }

    for(int i=0;i<students.size();i++)
    {
        cout<<"Student: "<<i+1<<" Grade:"<< students[i]->grading_system()<<endl;
    }
    for(int i=0;i<students.size();i++)
    {
        delete(students[i]);
    }

    cout<<"ID:24CE140";


    return 0;
}
/*In an educational setting, an advanced grading system was conceptualized to accommodate the
diverse evaluation criteria for students at different academic levels. At the heart of the system is an
abstract base class that defines the grading framework. This class includes a protected member to
store marks and declares a pure virtual function for computing grades, ensuring that specific grading
logic is implemented by derived classes.
Two distinct derived classes were introduced to handle the unique grading needs of undergraduate
and postgraduate students. Each class defines its own implementation of the grade computation
method, reflecting the varying academic expectations for these groups. The system enables users to
input student data, compute grades based on the respective criteria, and manage a collection of
student records.*/
