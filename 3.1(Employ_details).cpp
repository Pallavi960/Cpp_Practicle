#include<iostream>
#include<vector>
using namespace std;
class Employe{
    string name;
    double salary;
    double bonus;
    double total_salary;
    public:

    Employe(string name,double salary,double bonus)
    {
     this->name=name;
     this->salary=salary;
     this->bonus=bonus;
    }

    Employe(string name,double salary)//default bonus
     {
         this->name=name;
         this->salary=salary;
         this->bonus=15000;
     }

    void total(double salary,double bonus)
    {
        total_salary=salary+bonus;
    }


    void display()
    {
        cout<<"Name:"<<name<<endl;
        total(salary,bonus);
        cout<<"Total salary:"<<total_salary<<endl;
    }

};
int main()
{
    vector<Employe>emp;//vector to store details of multiple employes
    int n;
    string name;
    double salary;
    double bonus;

    cout<<"Enter numer of employes:";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"Ente name:";
        cin>>name;

        cout<<"Enter salary:";
        cin>>salary;

        cout<<"Enter bonus:";
        cin>>bonus;
        cout<<endl;
        emp.emplace_back(Employe(name,salary,bonus));

    }

    //show details
    cout<<"Employe details:"<<endl;
    for(auto &it:emp)
    {
      cout<<"---------------------"<<endl;
      it.display();
      cout<<"---------------------"<<endl;
      cout<<endl;

    }
}
