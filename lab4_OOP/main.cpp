#include "func.h"

int main() {
    system("chcp 65001 > nul");
    PopularHero* my_hero = new PopularHero("strength", "Axe", "One by one the soldiers of the Red Mist fell, some in battle, others to Mogul Khan's ambitions");
    delete my_hero;
    return 0;
}
