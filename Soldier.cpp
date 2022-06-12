#include "Soldier.h"

Soldier::Soldier(string firstName,
                 string lastName,
                 int age,
                 int height,
                 int weight,
                 string gender,
                 string email,
                 enum mRank militaryRank,
                 enum arsenal weaponry,
                 enum typeOfMilitaryService typeOfMilitary,
                 int lifeTime,
                 int fights)
                :Person(firstName, lastName, age, height, weight, gender, email),
                 militaryRank(militaryRank),
                 weaponry(weaponry),
                 typeOfMilitary(typeOfMilitary),
                 lifeTime(lifeTime),
                 fights(fights) {}

void Soldier::battle()
{
    if(typeOfMilitary == reserve)
    {
        return;
    }
    fights++;
    if(0<=fights && fights<=2)
    {
        militaryRank = Rookie;
    }
    else if(3<=fights && fights<=7)
    {
        militaryRank = Foreman;
    }

    else if(8<=fights && fights<=15)
    {
        militaryRank = Corporal;
    }

    else if(16<=fights && fights<=25)
    {
        militaryRank = Sergeant;
    }

    else if(26<=fights)
    {
        militaryRank = General;
    }
}
void Soldier::stock()
{
   typeOfMilitary = reserve;
}
string Soldier::Info() const
{
    string out;
    out = Person::Info() +
          "Military rank: " + getMilitaryRank()            + "\n" +
          "Weaponry: "      + getWeaponry()                + "\n" +
          "Type Of Military Service: " + getTypeOfMilitaryService()  + "\n" +
          "Life time: "     + to_string(getLifeTime()) + "\n" +
          "Fights: "        + to_string(fights)        + "\n";

    return out;
}