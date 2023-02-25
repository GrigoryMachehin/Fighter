#include "FighterLibrary.h"

void Intro()
{
    cout << "                                                 X@@@@@@@@@@@@@@@@_                                                  \n                                           r@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#=                                        \n                                   x0$$0Q@@@@@@@@@@@@@0eeeeeeM@@@@@@@@@@@Q8888;                                      \n                                !yyg@@@@@@@@@xvxxx?||_      `??|||L@@@@@@@@@@OIj_                                   \n                              ^^e@@@@@@@@B,,,                       ````M##@@@@@@ur<                                 \n                           ``-@@@@@@QER.                                   vW#@@@@@8``                               \n";
    Sleep(1000);
    cout << "                          `#@@@@@@QV                                        !^*@@@@@@V                              \n                        )##@@@@@@,                                             =3@@@@#8g:                           \n                      }H$@@@@@Bv`                                                `-@@@@@@6Px                         \n                       E@@@@@#w                                                       L@@@@@M                        \n                   -,,g@@@@e*             `]YVkwsU?                           ,xUywY!@@@@@D:,.                      \n                   E@@@@@@@<              vqLzVKU3r^YWu<               .]auvuD3GXmKR) @@@@@@@@z                      \n                   E@@@@@8`               `>eMWzycx)(]yL`           `x30g$$8QgOKx:,`  `Y@@@@@@z                      \n                   E@@@@@8                 -jyuY*vki)<*Tz:`      `~z$$$$$$$8QBH        ~P@@@@@z                      \n";
    Sleep(1000);
    cout << "                  =GG#@@@@y*                }i^c}}Til3Pjx*~rV<.,xX98Qgggg8QQ8Mwx.          Q@@@@$YL-                 \n                 (@@@@@@@:                 LlviuTxx}VIR$6mwY|iVKEg$g8Q8dw|-`              Q@@@@@@@~                  \n                 (@@@@@@@:                  .*cj}ckwkRB###BBR3PRMQQQZ)`                   M#@@@@@@~                  \n                 (@@@@@@@:                     -*cMB#Q8$$8QBQg8QBE)-                       m@@@@@@                  \n                 (@@@@@@@:                       `*#g$gggggg8Q0y,                          K@@@@@@~                  \n                 )@@@@@@@:                        `gQ8QQQBBBQr`                           _M@@@@@@~                  \n                 |@@@@@@@:                         W8QQQBBBB3                             Q@@@@@@@;                  \n                 |@@@@@@@:                         qQ$8QQBQ#-                             Q@@@@@@@;                  \n";
    Sleep(1000);
    cout << "                   0@@@@Ek                        _B8g$g8Q#                              Q@@@@v                      \n                  0@@@@@Q                        `0Qg$gQQd                            v#@@@@@v                      \n                   0@@@@@#\-                       Gg$$$8QQ                           *Z@@@@@@v                      \n                   R@@@@@@@*                      ,Q$$$$gQ#:                          D@@@@#WW=                      \n                     !@@@@@BO`                    MQ$$$$gQB3                         <#@@@@g                         \n                       :@@@@@@@@::`                =OBQ8BBBBc                         L@@@@@g                       \n                       `^^6@@@@@@@@PwwwwwwwwwwwwwwwwwK#96Q##BwwwwwwwwwwwwwwwwwwwwwwwwwwE@@@u^!                       \n                          `````````````````````````````````````````````````````````````````                          \n";
    Sleep(1000);
    cout << "            !iiiiiiiiii=  *iii^     `!xVwkyc|_    `iiii:    *iii| -iiiiiiiiiiiii: :iiiiiiiiiii=  ^iiiiiiiiv<.        \n            y@@@@@@@@@@m  D@@@O   `j@@@@@@@@@@Q,  _@@@@}    R@@@B ^@@@@@@@@@@@@@c }@@@@@@@@@@@h  9@@@@@@@@@@@O`      \n            y@@@@!:::::-  D@@@O  .8@@@Q*_-^R#QDy  _@@@@}    R@@@B -LLLL8@@@#LLLL! }@@@@:::::::-  9@@@g.._u@@@@r      \n            y@@@@yVVVVr   D@@@O  w@@@@.  _::::::` _@@@@#8888@@@@B      G@@@B      }@@@@333333s`  9@@@BvvYD@@@#_      \n            y@@@@@@@@@Z   D@@@O  M@@@@   0@@@@@@! _@@@@@@@@@@@@@B      G@@@B      }@@@@#######`  9@@@@@@@@@8}.       \n            y@@@@`````    D@@@O  x@@@@~  <vvQ@@@! _@@@@l````D@@@B      G@@@B      }@@@@          9@@@$`)@@@@b-       \n            y@@@@         D@@@O   k@@@@5TxyO@@@@! _@@@@}    R@@@B      G@@@B      }@@@@GGGGGGGV  9@@@$  ~@@@@#-      \n            y@@@@         D@@@O    ~d#@@@@@@@Qh~  _@@@@}    R@@@B      G@@@B      }@@@@@@@@@@@8  9@@@$   ~#@@@B.     \n";
    Sleep(2000);
}

void MainMenu(int switcher)
{
    AudioDevicePtr device = OpenDevice();
    OutputStreamPtr button = OpenSound(device, "button.wav", false);
    button->play();

    int key;
    system("cls");
  
    switch (switcher)
    {
    case 1:
        cout << "`@@I                   R@B                                                                     `@@I                   R@B \n 6@#`     ,eQB8z-     ,@@o                                                                      6@#`     ,eQB8z-     ,@@o \n :@@d    .#@@@@@#`   `8@B.                                                                      :@@d    .#@@@@@#`   `8@B. \n  <#@$    #@@@@@Q`   B@B                                                                        :@@d    .#@@@@@#`   `8@B. \n   _d@@Z^`.uO$d}``)E@@a                                                                           _d@@Z^`.uO$d}``)E@@a'   \n     :K#@@8$$$$$8@@Bz_                                                                             :K#@@8$$$$$8@@Bz_      \n        !#@@@@@@@#                                                                                     !#@@@@@@@#         \n         #@@@@@@@Q                                                                                       @@@@@@@Q         \n         #@@@@@@@Q                                                                                      #@@@@@@@Q         \n         #@@@@@@@Q                                                                                      #@@@@@@@Q         \n         #@@@@@@@Q                                                                                       #@@@@@@@Q        \n        .@@@@@@@@#                                                                                      .@@@@@@@@#        \n        =@@@8`#@@@.                                                                                     =@@@8`#@@@.       \n        v@@@q E@@@=                                                                                     v@@@q E@@@=       \n        z@@@c h@@@x                                                                                     z@@@c h@@@x       \n        O@@@r i@@@z                                                                                     O@@@r i@@@z       \n        B@@@  ;@@@O                                                                                     B@@@  ;@@@O       \n        @@@#` -@@@B                                                                                     @@@#` -@@@B       \n       !@@@Q   #@@@                                                                                    !@@@Q   #@@@       \n       !@@@h   M@@#.                                                                                   !@@@h   M@@#.      \n";
        cout << "\r                  \t\t\t\t <<  АРКАДНЫЙ РЕЖИМ  >>\n\n                         \t\t\t\tПРАВИЛА\n\n                            \t\t\t\t  ЧИТЫ\n\n                              \t\t\t\t  ВЫХОД\n\n";
        break;
    case 2:
        cout << "\n\n\n\n\n\n              -?T}*`                                                                                `*}T\-                \n             c@@@@@#=                                                                              =#@@@@@c               \n             @@@@@@@H                                                                              H@@@@@@@               \n       )DB#Bxv#@@@@Q                                                                                Q@@@@#vxB#BD)         \n      Z@EB#8d  :*^-                                                                                  -^*:  d8#BE@Z        \n     W@@#8Q@@Bu-                                                                                        .uB@@Q8#@@W       \n    r@@@@@@}V#@@b^                                                                                    ^b@@#V}@@@@@@r      \n    D@@@@#D<)VgBBBau,                                                                              ,uaBBBgV)<D#@@@@D      \n    #@@@@@@@@@@@@@#9@$|`                                                                        `\$@9#@@@@@@@@@@@@@#      \n    b@@@@@@@BDO@@@@*K#@z                                                                        z@#K*@@@@ODB@@@@@@@b      \n     <k@@@@Q! .@@@@! `-                                                                          -` !@@@@. !Q@@@@k<       \n  `rxxxI@@@@@k`@@@@*                                                                                *@@@@`k@@@@@Ixxxr`    \n  #@@@@@@@@@@@9Q@@@x                                                                                x@@@#9@@@@@@@@@@@#    \n  vO000000000M~^D85-                                                                                -58Dr~M000000000Ov    \n";
        cout << "\r                     \t\t\t\t     АРКАДНЫЙ РЕЖИМ\n\n                     \t\t\t\t    <<  ПРАВИЛА  >>\n\n                            \t\t\t\t  ЧИТЫ\n\n                           \t\t\t\t  ВЫХОД\n\n";
        break;
    case 3:
        cout << "`@@I                   R@B                                                                     `@@I                   R@B \n 6@#`     ,eQB8z-     ,@@o                                                                      6@#`     ,eQB8z-     ,@@o \n :@@d    .#@@@@@#`   `8@B.                                                                      :@@d    .#@@@@@#`   `8@B. \n  <#@$    #@@@@@Q`   B@B                                                                        :@@d    .#@@@@@#`   `8@B. \n   _d@@Z^`.uO$d}``)E@@a                                                                           _d@@Z^`.uO$d}``)E@@a'   \n     :K#@@8$$$$$8@@Bz_                                                                             :K#@@8$$$$$8@@Bz_      \n        !#@@@@@@@#                                                                                     !#@@@@@@@#         \n         #@@@@@@@Q                                                                                       @@@@@@@Q         \n         #@@@@@@@Q                                                                                      #@@@@@@@Q         \n         #@@@@@@@Q                                                                                      #@@@@@@@Q         \n         #@@@@@@@Q                                                                                       #@@@@@@@Q        \n        .@@@@@@@@#                                                                                      .@@@@@@@@#        \n        =@@@8`#@@@.                                                                                     =@@@8`#@@@.       \n        v@@@q E@@@=                                                                                     v@@@q E@@@=       \n        z@@@c h@@@x                                                                                     z@@@c h@@@x       \n        O@@@r i@@@z                                                                                     O@@@r i@@@z       \n        B@@@  ;@@@O                                                                                     B@@@  ;@@@O       \n        @@@#` -@@@B                                                                                     @@@#` -@@@B       \n       !@@@Q   #@@@                                                                                    !@@@Q   #@@@       \n       !@@@h   M@@#.                                                                                   !@@@h   M@@#.      \n";
        cout << "\r                      \t\t\t\t     АРКАДНЫЙ РЕЖИМ\n\n                         \t\t\t\tПРАВИЛА\n\n                       \t\t\t\t      <<  ЧИТЫ  >>\n\n                           \t\t\t\t  ВЫХОД\n\n";
        break;
    case 4:
        cout << "\n\n\n\n\n\n              -?T}*`                                                                                `*}T\-                \n             c@@@@@#=                                                                              =#@@@@@c               \n             @@@@@@@H                                                                              H@@@@@@@               \n       )DB#Bxv#@@@@Q                                                                                Q@@@@#vxB#BD)         \n      Z@EB#8d  :*^-                                                                                  -^*:  d8#BE@Z        \n     W@@#8Q@@Bu-                                                                                        .uB@@Q8#@@W       \n    r@@@@@@}V#@@b^                                                                                    ^b@@#V}@@@@@@r      \n    D@@@@#D<)VgBBBau,                                                                              ,uaBBBgV)<D#@@@@D      \n    #@@@@@@@@@@@@@#9@$|`                                                                        `\$@9#@@@@@@@@@@@@@#      \n    b@@@@@@@BDO@@@@*K#@z                                                                        z@#K*@@@@ODB@@@@@@@b      \n     <k@@@@Q! .@@@@! `-                                                                          -` !@@@@. !Q@@@@k<       \n  `rxxxI@@@@@k`@@@@*                                                                                *@@@@`k@@@@@Ixxxr`    \n  #@@@@@@@@@@@9Q@@@x                                                                                x@@@#9@@@@@@@@@@@#    \n  vO000000000M~^D85-                                                                                -58Dr~M000000000Ov    \n";
        cout << "\r                      \t\t\t\t     АРКАДНЫЙ РЕЖИМ\n\n                         \t\t\t\tПРАВИЛА\n\n                            \t\t\t\t  ЧИТЫ\n\n                      \t\t\t\t      <<  ВЫХОД  >>\n\n";
        break;
    default: MainMenu(1);
    }

    key = _getch();
    if (key == 27)
    {
        Intro();
        _exit(0);
    }
    if (key == 72)
        if (switcher != 1)
            MainMenu(switcher - 1);
        else
            MainMenu(4);
    if (key == 80)
    {
        if (switcher != 4)
            MainMenu(switcher + 1);
        else
            MainMenu(1);
    }
    if (key == 13 || key == 32)
    {
        if (switcher == 1)
            Fight(10, 10, 1, 1, 0, 0, 1, 1);
        if (switcher == 2)
            Rules();
        if (switcher == 3)
            Cheats(1);
        if (switcher == 4)
        {
            Intro();
            _exit(0);
        }
    }
    else MainMenu(switcher);
}

void Rules()
{
    system("cls");
    cout << "                                                         ПРАВИЛА\n                      1. Бей, чтобы победить (\"RIGHT\", \"LEFT\", \"DOWN\"), защищайся, чтобы не быть битым.\n\n                      2. Бой длится 5 раундов, по количеству выигрышей определяется победитель.\n\n                      3. Ничьи, как в отдельном раунде, так и итоге боя, не существует -\n\n                                                 победитель только один.\n\n                      4. Бой должен быть окончен\n\n\n\n\n\n\n                                     \"НАЖАТЬ КНОПКУ ЧТОБЫ ВЫЙТИ ИЗ МЕНЮ ПРАВИЛ\n\n";
    _getch();
}


void Cheats(int switcher)
{
    {
        int key;
        system("cls");

        AudioDevicePtr device = OpenDevice();
        OutputStreamPtr button = OpenSound(device, "button.wav", false);
        button->play();

        switch (switcher)
        {
        case 1:
            cout << "\n\n                               Одноименному персонажу быстро надоела его сила, вам наскучит тоже.\n\n                                    Однако, возможно, вы не любите сильно марать руки.\n\n                                         Тогда стократный урон придется вам как раз.\n\n                                                 Комплексы можно лечить";
            cout << "\r\n\n\n\n\n\n\n\n\n\n\n\n\n                  \t\t\t\t <<  ONE PUNCH MAN  >>\n\n                         \t\t\t  Я БЬЮ ЖЕНЩИН И ДЕТЕЙ\n\n                            \t\t\t\t ВЫХОД\n\n";
            break;
        case 2:
            cout << "\n\n                               Если первый пункт граничит с комплексами, то этот тем более.\n\n                                          Но, возможно, вы их не стесняетесь.\n\n                                  Как насчет противников, которые вас и не поцарапают?\n\n";
            cout << "\r\n\n\n\n\n\n\n\n\n\n\n\n\n                     \t\t\t\t     ONE PUNCH MAN\n\n                     \t\t\t      <<  Я БЬЮ ЖЕНЩИН И ДЕТЕЙ  >>\n\n                           \t\t\t\t ВЫХОД\n\n";
            break;
        case 3:
            cout << "\n\n                                                     Прекраный выбор.\n\n\n\n\n\n";
            cout << "\r\n\n\n\n\n\n\n\n\n\n\n\n\n                      \t\t\t\t     ONE PUNCH MAN\n\n                         \t\t\t  Я БЬЮ ЖЕНЩИН И ДЕТЕЙ\n\n                      \t\t\t\t     <<  ВЫХОД  >>\n\n";
            break;
        default: Cheats(1);
        }

        key = _getch();
        if (key == 27) Cheats(1);
        if (key == 72)
            if (switcher != 1)
                Cheats(switcher - 1);
            else
                Cheats(3);
        if (key == 80)
        {
            if (switcher != 3)
                Cheats(switcher + 1);
            else
                Cheats(1);
        }
        if (key == 13 || key == 32)
        {
            if (switcher == 1) Fight(10, 10, 1, 2, 0, 0, 100, 1);
            if (switcher == 2) Fight(10, 10, 1, 3, 0, 0, 1, 0);
            if (switcher == 3) MainMenu(1);
        }
        else Cheats(switcher);
    }
}