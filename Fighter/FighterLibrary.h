#pragma once
#include "conio.h"
#include "windows.h"
#include "ctime"
#include <iostream>
#include <locale>
#include <iomanip>
#include <audiere.h>

using namespace std;
using namespace audiere;

void Intro();

void MainMenu(int switcher);
void Rules();
void Cheats(int switcher);

void Fight(int fighterHp, int enemyHp, int round, int playerType, int enemyShield, int wins, int PlayerDmgMod, int EnemyDmgMod);
void WinMenu(int wins, int round);
void StatusBar(int round, int playerHp, int enemyHp, int wins);
int RandNum(int min, int max);
void Presets(int switcher, int round, int playerHp, int enemyHp, int wins, int PlayerType);