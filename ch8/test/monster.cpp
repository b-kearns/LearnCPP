//Ch8 Test Question 1
#include <iostream>

enum class MonsterType
{
    ogre,
    dragon,
    orc,
    giant_spider,
    slime
};

struct Monster
{
    MonsterType type{};
    std::string name{"???"};
    int maxHealth{};
};

std::string printType(MonsterType type)
{
    std::string result{"???"};
    switch(type)
    {
        case MonsterType::ogre:
            result = "Ogre";
            break;
        case MonsterType::dragon:
            result = "Dragon";
            break;
        case MonsterType::orc:
            result = "Orc";
            break;
        case MonsterType::giant_spider:
            result = "Giant Spider";
            break;
        case MonsterType::slime:
            result = "Slime";
            break;
        default:
            result = "???";
            break;
    }
    return result;
}

void printMonster(Monster m)
{
    std::cout << "This " << printType(m.type) << " is named " << m.name << " and has " << m.maxHealth << " health." << std::endl;
}

int main()
{
    Monster ogre{MonsterType::ogre, "Ted", 100};
    Monster slime{MonsterType::slime, "Jerry", 25};

    printMonster(ogre);
    printMonster(slime);
}