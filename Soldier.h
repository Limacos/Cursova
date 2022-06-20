//
// Created by Макс on 12.06.2022.
//

#ifndef LIMACOS_CURSOVA_SOLDIER_H
#define LIMACOS_CURSOVA_SOLDIER_H


#include "Person.h"

enum mRank
{
    Rookie,   //новобранец
    Foreman,  //старшина
    Corporal, //капрал
    Sergeant, //сержант
    General   //генерал
};
enum arsenal
{
    automatic,
    pistol,
    knife,
    shotgun
};

enum typeOfMilitaryService
{
    enlisted,
    reserve,
    contract
};

class Soldier : public Person
{
private:
    mRank militaryRank;
    arsenal weaponry;
    typeOfMilitaryService typeOfMilitary;
    int lifeTime, fights;
public:
    Soldier(string firstName,
            string lastName,
            int age,
            int height,
            int weight,
            string gender,
            string email,
            mRank militaryRank,
            arsenal weaponry,
            typeOfMilitaryService typeOfMilitary,
            int lifeTime,
            int fights);

    string getMilitaryRank() const
    {
        string enumMilitaryRank[] = {
                                    "Rookie",   //новобранец
                                    "Foreman",  //старшина
                                    "Corporal", //капрал
                                    "Sergeant", //сержант
                                    "General"   //генерал
                                    };
        return enumMilitaryRank[militaryRank];
    }
    string getWeaponry() const
    {
        string enumArsenal[] = {
                                "automatic", //автомат
                                "pistol",    //пистолет
                                "knife",     //нож
                                "shotgun"    //дробовик
                               };
        return enumArsenal[weaponry];

    }
    string getTypeOfMilitaryService() const
    {
        string enumTypeOfMilitaryService[] = {
                                              "enlisted",
                                              "reserve",
                                              "contract"
                                             };
        return enumTypeOfMilitaryService[typeOfMilitary];
    }
    int    getLifeTime() const
    {
        return lifeTime;
    }
    int    getFights() const
    {
        return  fights;
    }
    void   battle();
    void   stock();

    virtual string Info() const;

};


#endif //LIMACOS_CURSOVA_SOLDIER_H