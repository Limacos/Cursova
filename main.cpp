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
        Teacher teacher_1("Irina", "Sotsenko", 41, 173, 61,
                          "female","irinam@gmail.com", 21, 18,
                          chemistry, Highest, 14, 2893);
        cout << teacher_1.Info() << endl;
        teacher_1.Expif();
        teacher_1.Gradeif();
        cout << "Category - "  << teacher_1.getCtgr() << endl;
        cout << "Oklad - "     << teacher_1.oklad     << endl;
        cout << "Payroll calculation - " << teacher_1.payrollCalculation() << endl;
        cout << "Graduation calculation - " ; teacher_1.graduationCalculation(56); cout << endl;
        cout << "Bolshe 18? - " << (teacher_1.isAgeMore18()?"Yes":"No"); cout << endl;
        cout << "Prizuvnoi? - " << (teacher_1.isGenderAgeMore18()?"Yes":"No");
        cout << endl;
        cout << "-----------------------------------------------------------" << endl;


        Teacher teacher_2("Olga", "Krupa", 26, 177, 64,
                          "female","olga37@gmail.com",11, 27,
                          algebra, First, 13 ,2893);
        cout << teacher_2.Info() << endl;
        teacher_2.Expif();
        teacher_2.Gradeif();
        cout << "Category - "  << teacher_2.getCtgr() << endl;
        cout << "Oklad - "     << teacher_2.oklad     << endl;
        cout << "Payroll calculation - " << teacher_2.payrollCalculation() << endl;
        cout << "Graduation calculation - "; teacher_2.graduationCalculation(24); cout << endl;
        cout << "Bolshe 18? - " << (teacher_2.isAgeMore18()?"Yes":"No"); cout << endl;
        cout << "Prizuvnoi? - " << (teacher_2.isGenderAgeMore18()?"Yes":"No");
        cout << endl;
        cout << "-----------------------------------------------------------" << endl;


        Teacher teacher_3("Igor", "Kovalenko", 58, 186, 82,
                          "male","kovalenko@gmail.com",9, 21.5,
                          physics, AssociateDegree, 12 ,2893);
        cout << teacher_3.Info() << endl;
        teacher_3.Expif();
        teacher_3.Gradeif();
        cout << "Category - "  << teacher_3.getCtgr() << endl;
        cout << "Oklad - "     << teacher_3.oklad     << endl;
        cout << "Payroll calculation - " << teacher_3.payrollCalculation() << endl;
        cout << "Graduation calculation - "; teacher_3.graduationCalculation(24); cout << endl;
        cout << "Bolshe 18? - " << (teacher_3.isAgeMore18()?"Yes":"No"); cout << endl;
        cout << "Prizuvnoi? - " << (teacher_3.isGenderAgeMore18()?"Yes":"No");
        cout << endl << endl << endl;

        cout << "----------------------------Soldiers----------------------------" << endl;

        Soldier soldier_1("Bogdan", "Chumack", 21, 180, 68,
                          "male","vpeep228@gmail.com",Rookie,
                          pistol, contract, 2, 0);
        cout << soldier_1.Info();
        cout << " ---change---" << endl;
        soldier_1.battle();
        soldier_1.stock();
        cout << soldier_1.Info();
        cout << "Is adult? - " << (soldier_1.isAgeMore18()?"Yes":"No") << endl;
        cout << "Is military age? - " << (soldier_1.isGenderAgeMore18()?"Yes":"No");
        cout << endl;
        cout << "-----------------------------------------------------------" << endl;

        Soldier soldier_2("Maks", "Volkov", 48, 186, 72,
                          "male","volkov@gmail.com",Sergeant,
                          shotgun, enlisted, 23, 49);
        cout << soldier_2.Info();
        cout << " ---change---" << endl;
        soldier_2.battle();
        soldier_2.stock();
        cout << soldier_2.Info();
        cout << "Is adult? - " << (soldier_2.isAgeMore18()?"Yes":"No") << endl;
        cout << "Is military age? - " << (soldier_2.isGenderAgeMore18()?"Yes":"No");
        cout << endl;
        cout << "-----------------------------------------------------------" << endl;

        Soldier soldier_3("Alexandr", "Efimov", 37, 190, 95,
                          "male","alex190@gmail.com",Foreman,
                          automatic, reserve, 5, 6);
        cout << soldier_3.Info();
        cout << " ---change---" << endl;
        soldier_3.battle();
        soldier_3.stock();
        cout << soldier_3.Info();
        cout << "Is adult? - " << (soldier_3.isAgeMore18()?"Yes":"No") << endl;
        cout << "Is military age? - " << (soldier_3.isGenderAgeMore18()?"Yes":"No");
        cout << endl;
        cout << "-----------------------------------------------------------" << endl;

    }

    catch(const exception& ex)
    {
        cerr << ex.what();
    }
}