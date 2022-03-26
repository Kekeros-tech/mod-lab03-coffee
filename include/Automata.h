// Copyright 2022 UNN-IASR
#pragma once
#include <iostream>
#include <string>

using std::cout;

const int MENU_DIMENSION = 7;

enum STATES {
    OFF,
    WAIT,
    ACCEPT,
    CHEAK,
    COOK
};

class Automata
{
private:
    STATES stateOfAutomata;
    double cash;
    const string menu[MENU_DIMENSION];
    const int prices[MENU_DIMENSION];
    int positionOfCheak;

public:
    Automata();
    void on();
    void off();
    void coin(double);
    void getMenu();
    STATES getState();
    double getCash();
    void printInfoAboutState();
    void choice(int);
    void check();
    int cancel();
    void cook();
    void finish();
};
