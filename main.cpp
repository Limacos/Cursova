#include <iostream>
#include <string>
#include <exception>
#include "Teacher.h"
#include "Soldier.h"
using namespace std;


int main()
{
    cout << endl;
    try{
        cout << "----------------------------Teachers----------------------------" << endl;
        Teacher teacher_1("Irina", "Mykhailovna", 41, 173, 61,
                          "female","irinam@gmail.com",15,3 ,8500);
        cout << teacher_1.Info();
        cout << "Payroll calculation - " << teacher_1.payrollCalculation() << endl;
        cout << "Graduation calculation  - "; teacher_1.graduationCalculation(20); cout << endl;
        cout << "Bolshe 18? - " << (teacher_1.isAgeMore18()?"Yes":"No"); cout << endl;
        cout << "Prizuvnoi? - " << (teacher_1.isGenderAgeMore18()?"Yes":"No");
        cout << "\n";
        cout << "--------------------------------------------------------" << endl;


        Teacher teacher_2("Olga", "Myk", 26, 177, 64,
                          "female","iidsjisd@gmail.com",2,1 ,5200);
        cout << teacher_2.Info() << endl;
        cout << "Payroll calculation - " << teacher_2.payrollCalculation() << endl;
        cout << "Graduation calculation  - "; teacher_2.graduationCalculation(10); cout << endl;
        cout << "Bolshe 18? - " << (teacher_2.isAgeMore18()?"Yes":"No"); cout << endl;
        cout << "Prizuvnoi? - " << (teacher_2.isGenderAgeMore18()?"Yes":"No");
        cout << "\n";
        cout << "--------------------------------------------------------" << endl;


        Teacher teacher_3("3", "mygik", 58, 186, 82,
                          "male","ooooorr@gmail.com",28,4 ,9800);
        cout << teacher_3.Info() << endl;
        cout << "Payroll calculation - " << teacher_3.payrollCalculation() << endl;
        cout << "Graduation calculation  - "; teacher_3.graduationCalculation(20); cout << endl;
        cout << "Bolshe 18? - " << (teacher_3.isAgeMore18()?"Yes":"No"); cout << endl;
        cout << "Prizuvnoi? - " << (teacher_3.isGenderAgeMore18()?"Yes":"No");
        cout << "\n\n\n";

        cout << "----------------------------Soldiers----------------------------" << endl;

        Soldier soldier_1("Vadim", "Peap", 30, 180, 68, "male","peap228@gmail.com",
                          Foreman, pistol, contract, 5, 6);
        cout << soldier_1.Info();
        soldier_1.battle();
        soldier_1.stock();
        cout << soldier_1.Info();
        cout<< "Is Adult? - "<<(soldier_1.isAgeMore18()?"Yes":"No");
        cout<<endl;
        cout<< "Is military age? - "<<(soldier_1.isGenderAgeMore18()?"Yes":"No");
        cout<<"\n";


    }

    catch(const exception& ex)
    {
        cerr<< ex.what();
    }
}