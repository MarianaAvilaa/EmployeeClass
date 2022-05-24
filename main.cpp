#include <iostream>
#include <string>
using namespace std;
class EmployeeClass{
public:
    EmployeeClass(string name, string lastname,int monthly){
        setEmployeeName(name);
        setEmployeeLastName(lastname);
        setEmployeeMonthly(monthly);

    }
    void setEmployeeName(string name){
        employename=name;
    }
    string getEmployeName(){
        return  employename;
    }
    void setEmployeeLastName(string lastname){
         employelastname=lastname;
    }
    string getEmployeeLastName(){
        return employelastname;
    }
    void setEmployeeMonthly(int monthly){
        if(monthly<0){
            monthly=0;
        }
        else{
            employemonthly=monthly;
        }
    }
    int getEmployeeMonthly(){
        return employemonthly;
    }
private:
    string employename;
    string employelastname;
    int employemonthly;
};
int main() {
    EmployeeClass employe1("Mariana","Avila",100);
    cout<<employe1.getEmployeName()<<","<<employe1.getEmployeeLastName()<<","<<employe1.getEmployeeMonthly();
    cout<<endl;

    employe1.setEmployeeMonthly(employe1.getEmployeeMonthly()+employe1.getEmployeeMonthly()*10/100);
    cout<<employe1.getEmployeeMonthly();
}
