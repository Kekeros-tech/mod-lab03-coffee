#include <iostream>
#include <string>
#include "Automata.h"

using namespace std;

int main()
{
    Automata automata = new Automata();
    automata.on();
    automata.coin(140);
    automata.choice(3);
    automata.check();
    automata.cook();
    automata.finish();
    automata.off();
    return 0;
}