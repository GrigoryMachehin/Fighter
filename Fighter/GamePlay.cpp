#include "FighterLibrary.h"

void Fight(int playerHp, int enemyHp, int round, int playerType, int enemyShield, int wins, int playerDmgMod, int enemyDmgMod)
{
    system("cls");
    int dicePlayer, diceEnemy, enemyKick, playerShield, key;


    while (playerHp > 0 || enemyHp > 0)
    {
        playerShield = 0;
        dicePlayer = RandNum(2, 12);
        diceEnemy = RandNum(2, 12);
        enemyKick = RandNum(1, 10);


        Presets(1, round, playerHp, enemyHp, wins, playerType);
        key = _getch();
        system("cls");

        if (key == 72) //вверх - Блок
        {
            playerShield = 1; Presets(1, round, playerHp, enemyHp, wins, playerType); cout << "Вы поставили блок"; Sleep(1000);
        }
        if (key == 77) //вправо - хук справа
        {
            if (enemyShield == 0)
            {
                if (dicePlayer < 5) { Presets(2, round, playerHp, enemyHp, wins, playerType); cout << "Вы промахнулись\n"; Sleep(1000);}
                if (dicePlayer > 4 && dicePlayer < 12) { enemyHp -= 2 * playerDmgMod; Presets(2, round, playerHp, enemyHp, wins, playerType); cout << "Вы нанесли урон: \n" << 2 * playerDmgMod; Sleep(1000);}
                if (dicePlayer == 12) { enemyHp -= 3 * playerDmgMod; Presets(2, round, playerHp, enemyHp, wins, playerType); cout << "Вы нанесли урон: \n" << 3 * playerDmgMod; Sleep(1000);}
                Presets(1, round, playerHp, enemyHp, wins, playerType);
            }
            if (enemyShield == 1)
            {
                if (dicePlayer < 12) { Presets(7, round, playerHp, enemyHp, wins, playerType); cout << "Противник отбивает ваш удар\n"; Sleep(1000); }
                if (dicePlayer == 12) { enemyHp -= 2 * playerDmgMod; Presets(2, round, playerHp, enemyHp, wins, playerType); cout << "Вы нанесли урон: \n" << 2 * playerDmgMod;Sleep(1000);}
                Presets(1, round, playerHp, enemyHp, wins, playerType);
            }
            enemyShield = 0;
        }
        if (key == 75) //влево - хук слева
        {
            if (enemyShield == 0)
            {
                if (dicePlayer < 6) { Presets(2, round, playerHp, enemyHp, wins, playerType); cout << "Вы промахнулись\n"; Sleep(1000);}
                if (dicePlayer > 4 && dicePlayer < 12) { enemyHp -= 1 * playerDmgMod; Presets(2, round, playerHp, enemyHp, wins, playerType);  cout << "Вы нанесли урон:1\n" << 1 * playerDmgMod; Sleep(1000);}
                if (dicePlayer == 12) { enemyHp -= 2 * playerDmgMod; Presets(2, round, playerHp, enemyHp, wins, playerType); cout << "Вы нанесли урон: \n" << 2 * playerDmgMod; Sleep(1000);}
                Presets(1, round, playerHp, enemyHp, wins, playerType);
            }
            if (enemyShield == 1)
            {
                if (dicePlayer < 12) { Presets(7, round, playerHp, enemyHp, wins, playerType);  cout << "Противник отбивает ваш удар\n";Sleep(1000);}
                if (dicePlayer == 12) { enemyHp -= 1 * playerDmgMod; Presets(2, round, playerHp, enemyHp, wins, playerType); cout << "Вы нанесли урон: 1\n" << 1 * playerDmgMod;Sleep(1000);}
                Presets(1, round, playerHp, enemyHp, wins, playerType);
            }
            enemyShield = 0;
        }
        if (key == 80) //вниз - лоукик
        {
            if (enemyShield == 0)
            {
                if (dicePlayer < 9) { Presets(4, round, playerHp, enemyHp, wins, playerType); cout << "Вы промахнулись\n"; Sleep(1000);}
                if (dicePlayer > 8 && dicePlayer < 12) { enemyHp -= 3 * playerDmgMod; Presets(4, round, playerHp, enemyHp, wins, playerType); cout << "Вы нанесли урон: \n" << 3 * playerDmgMod; Sleep(1000);}
                if (dicePlayer == 12) { enemyHp -= 4 * playerDmgMod; Presets(4, round, playerHp, enemyHp, wins, playerType); cout << "Вы нанесли урон: 4\n" << 4 * playerDmgMod; Sleep(1000);}
                Presets(1, round, playerHp, enemyHp, wins, playerType);
            }
            if (enemyShield == 1)
            {
                if (dicePlayer < 12) { Presets(10, round, playerHp, enemyHp, wins, playerType); cout << "Противник отбивает ваш удар\n";Sleep(1000);}
                if (dicePlayer == 12) { enemyHp -= 3 * playerDmgMod;  Presets(4, round, playerHp, enemyHp, wins, playerType); cout << "Вы нанесли урон: \n" << 3 * playerDmgMod;Sleep(1000);}
                Presets(1, round, playerHp, enemyHp, wins, playerType);
            }
            enemyShield = 0;
        }
        if (key != 72 && key != 75 && key != 77 && key != 80) { continue; }

        if (enemyHp < 1)
        {
            system("pause");
            round += 1; wins += 1;
            if (round < 6) { Fight(10 + (round - 1) * 2, 10 + (round - 1) * 2, round, playerType, round % 2, wins, playerDmgMod, enemyDmgMod); }
            if (wins > 2) { Presets(9, round, playerHp, enemyHp, wins, playerType); MainMenu(1); }
            else { Presets(11, round, playerHp, enemyHp, wins, playerType); MainMenu(1); }
        }


        if (enemyKick == 1 || enemyKick == 2) //вверх - Блок
        {
            enemyShield = 1;
        }
        if (enemyKick == 3 || enemyKick == 4 || enemyKick == 5 || enemyKick == 6) //вправо - хук справа
        {
            if (playerShield == 0)
            {
                if (diceEnemy < 5) { Presets(6, round, playerHp, enemyHp, wins, playerType); cout << "Противник промахнулся\n"; Sleep(1000);}
                if (diceEnemy > 4 && diceEnemy < 12) { playerHp -= 2 * enemyDmgMod; Presets(6, round, playerHp, enemyHp, wins, playerType); cout << "Вам нанесли урон: \n" << 2 * enemyDmgMod; Sleep(1000);}
                if (diceEnemy == 12) { playerHp -= 3 * enemyDmgMod; Presets(6, round, playerHp, enemyHp, wins, playerType); cout << "Вам нанесли урон: \n" << 3 * enemyDmgMod; Sleep(1000);}
                Presets(1, round, playerHp, enemyHp, wins, playerType);
            }
            if (playerShield == 1)
            {
                if (diceEnemy < 12) { Presets(3, round, playerHp, enemyHp, wins, playerType); cout << "Вы отбили удар противника\n";Sleep(1000);}
                if (diceEnemy == 12) { playerHp -= 2 * enemyDmgMod; Presets(1, round, playerHp, enemyHp, wins, playerType); cout << "Вам нанесли урон: \n" << 2 * enemyDmgMod;Sleep(1000);}
                Presets(1, round, playerHp, enemyHp, wins, playerType);
            }
        }
        if (enemyKick == 7) //влево - хук слева
        {
            if (playerShield == 0)
            {
                if (diceEnemy < 5) { Presets(6, round, playerHp, enemyHp, wins, playerType); cout << "Противник промахнулся\n"; Sleep(1000);}
                if (diceEnemy > 4 && diceEnemy < 12) { playerHp -= 1 * enemyDmgMod; Presets(6, round, playerHp, enemyHp, wins, playerType); cout << "Вам нанесли урон: \n" << 1 * enemyDmgMod; Sleep(1000);}
                if (diceEnemy == 12) { playerHp -= 2 * enemyDmgMod; Presets(6, round, playerHp, enemyHp, wins, playerType); cout << "Вам нанесли урон: \n" << 2 * enemyDmgMod; Sleep(1000);}
                Presets(1, round, playerHp, enemyHp, wins, playerType);
            }
            if (playerShield == 1)
            {
                if (diceEnemy < 12) { Presets(3, round, playerHp, enemyHp, wins, playerType); cout << "Вы отбили удар противника\n";Sleep(1000);}
                if (diceEnemy == 12) { playerHp -= 1 * enemyDmgMod;  Presets(6, round, playerHp, enemyHp, wins, playerType); cout << "Вам нанесли урон: \n" << 1 * enemyDmgMod;Sleep(1000);}
                Presets(1, round, playerHp, enemyHp, wins, playerType);
            }
        }
        if (enemyKick == 8 || enemyKick == 9 || enemyKick == 10) //вниз - лоукик
        {
            if (playerShield == 0)
            {
                if (diceEnemy < 9) { Presets(6, round, playerHp, enemyHp, wins, playerType); cout << "Противник промахнулся\n"; Sleep(1000);}
                if (diceEnemy > 8 && diceEnemy < 12) { playerHp -= 3 * enemyDmgMod; Presets(8, round, playerHp, enemyHp, wins, playerType); cout << "Вам нанесли урон: \n" << 3 * enemyDmgMod; Sleep(1000);}
                if (diceEnemy == 12) { playerHp -= 4 * enemyDmgMod; Presets(8, round, playerHp, enemyHp, wins, playerType); cout << "Вам нанесли урон: \n" << 4 * enemyDmgMod; Sleep(1000);}
                Presets(1, round, playerHp, enemyHp, wins, playerType);
            }
            if (playerShield == 1)
            {
                if (diceEnemy < 12) { Presets(5, round, playerHp, enemyHp, wins, playerType);  cout << "Вы отбили удар противника\n";Sleep(1000); }
                if (diceEnemy == 12) { playerHp -= 3 * enemyDmgMod;  Presets(8, round, playerHp, enemyHp, wins, playerType); cout << "Вам нанесли урон: \n" << 3 * enemyDmgMod;Sleep(1000);}
                Presets(1, round, playerHp, enemyHp, wins, playerType);
            }
        }
        if (playerHp < 1)
        {
            system("pause");
            round += 1;
            if (round < 6) { Fight(10 + (round - 1) * 2, 10 + (round - 1) * 2, round, playerType, round % 2, wins, playerDmgMod, enemyDmgMod); }
            if (wins > 2) { Presets(9, round, playerHp, enemyHp, wins, playerType); MainMenu(1); }
            else { Presets(11, round, playerHp, enemyHp, wins, playerType); MainMenu(1); }
        }
    }
    if (wins > 2) Presets(9, round, playerHp, enemyHp, wins, playerType);
    else Presets(11, round, playerHp, enemyHp, wins, playerType);
}

int RandNum(int min, int max)
{
    srand(time(NULL));
    int num = min + rand() % (max - min + 1);
    return num;
}

void WinMenu(int wins, int round)
{
    system("cls");
    cout << "Вы выиграли " << wins << " боев из " << round - 1 << endl;
    system("pause");
    MainMenu(1);
}

void StatusBar(int round, int playerHp, int enemyHp, int wins)
{
    if (playerHp < 0) { playerHp = 0; }
    if (enemyHp < 0) { enemyHp = 0; }
    cout << "========================================================================================================================\n| ###################################################### | РАУНД " << round << "| ################################################## |\n|                                                     =WINS " << wins << "   /  5=                                                  |\n|    UP - БЛОК                  DOWN - УДАР НОГОЙ                         RIGHT - ХУК С ПРАВОЙ      LEFT - ХУК С ЛЕВОЙ | \n| #################################################################################################################### | \n========================================================================================================================\n ЗДОРОВЬЕ БОЙЦА--> " << setw(2) << playerHp << "                                                                       " << setw(2) << enemyHp << " <--ЗДОРОВЬЕ ПРОТИВНИКА        \n";
}

void Presets(int switcher, int round, int playerHp, int enemyHp, int wins, int playerType)
{
    system("cls");
    switch (switcher)
    {
    case 1: //стартовая
    {
        StatusBar(round, playerHp, enemyHp, wins);
        cout << "                                                   yQBR*           !MBQm.         \n                                                  O@@@@@*         _@@@@@B         \n                                                  8@@@@@v         !@@@@@#`        \n                                                  _9@@#V           xB@@8!         \n                                                 LKHV\'   ^>      -   `}$6y`       \n                                                dQ#@Q})cQ@#`    h@g*,y@9#RQ       \n                                               ,@@QQ#@@@8T`     `KQ@@@D@@E@r      \n                                               c@@@@#B$OQ0       $@BQ$@@0#@Z      \n                                               H@@@@QM$$Mx       .}RBB88@@@8      \n                                               s@@@@m                 i@@@@0      \n                                               v@@@@b                 V@@@@o      \n                                               `@@@@@o`              }@@@@@_      \n                                               ,@@@@@@Q-           `O@@@@@@r      \n                                               3@@@Y@@@B`          E@@@u#@@g      \n                                              :@@@G *@@@X         v@@@T }@@@(     \n                                             'B@@#'  Z@@@`        B@@Q   g@@@    \n                                            .Q@@@;   ^@@@*       _@@@l   -#@@#:   \n                                           =#@@@^    .@@@T       ^@@@^    ,#@@@|  \n                                           a@@#!      #@@]       =@@@,     -Q@@g  \n                                            *r`       .v<         !v        *r`  \n";
        break;
    }
    case 2: //игрок бьет рукой
    {
        StatusBar(round, playerHp, enemyHp, wins);
        cout << "                                                  ^Z#@#D]                         \n                                                 ^@@@@@@@y              -mB@@BU.  \n                                                 v@@@@@@@a             `B@@@@@@Q` \n                                                  TB@@@#m`             .#@@@@@@#` \n                                              '_:=^*vT}]lzPd$Q#@@@@}    _M#@@#W-  \n                                           r$@@@@@@@@@@@@@@@@@@#QDK:'xd$OKcY!     \n                                          x@@@#g#@@@@@@@$^!_`    _o@@@@@@@@@q`   \n                                          B@@#'=@@@@@@@Q.       !q@@@@@@@@@@@@O   \n                                         ~@@@u`B@@@@@@#.     ~z#@@@#@@@@@@@@@@@X  \n                                         `wZw`c@@@@@@#!     c@@@@Z*x@@@@@@@MQ@@#` \n                                             `#@@@@@@^      -yU(' -#@@@@@@0`K@@@= \n                                              D@@@@@u            )B@@@@@@#. i@@@v \n                                              _@@@@@~          ]B@@@@@@@@M  'mgG_ \n                                             `0@@@@@@*       vB@@@@8v@@@@u        \n                                             O@@@@@@@B      x@@@@g^ !@@@@*        \n                                            y@@@@j@@@B      B@@@R   -#@@@Z        \n                                           v@@@@^u@@@0     !@@@@r    ;@@@@O`      \n                                          r@@@@? s@@@5     z@@@B`     >@@@@8`     \n                                          8@@@I  e@@@c     O@@@y       >#@@@)     \n                                          .xc^   `vc(      `xu)         -Yu*      \n";
        break;
    }
    case 3: //игрок блокирует удар
    {
        StatusBar(round, playerHp, enemyHp, wins);
        cout << "                                              b@@@@@@K        V#@@@@Q!               \n                                             @@@@@#d#Q!       )@@@@@@@`              \n                                              Z@@@@8Q@@Mg      !@@@@@@@8               \n                                              :}3MMy@@@dZ ,;`   =Z#@@Qw!*           \n                                           'WQQQQi}#@@M@~-@@@DT~     ~QQQ8@q`         \n                                           8B9@@@@@@Q0#)  _}0@@@@@#BB#@@@@Q8@g`        \n                                          v@@BQQQ8RZbL       :)ceMddMe6QQ#@@@M        \n                                          D@@@@@@i                     :@@@@@@@*       \n                                          #@@@@@@:                  :XMB@@@@@@@d       \n                                          Q@@@@@@                  }##QG@@@@@@#       \n                                          3@@@@@@!                       E@@@@@B       \n                                          _B@@@@@@$(                   `V@@@@@@:       \n                                           `Z@@@@@@@Br                ,B@@@@@@@-       \n                                             d@@@@@@@@d`             :#@@@@@@@@Y       \n                                             >@@@@#@@@@g`           `B@@@@*#@@@#`      \n                                             ?@@@@LV@@@@M           }@@@@} x@@@@d      \n                                            .B@@@#. 9@@@@          Q@@@@`  h@@@@O`    \n                                           _Q@@@@?  ^@@@@c         `@@@@D    G@@@@Q!   \n                                          =@@@@@x   -@@@@G         -@@@@3     }@@@@@|  \n                                          _8@@g!     O@@#r          E@@#^      _9@@B=  \n";
        break;
    }
    case 4: //игрок бьет ногой
    {
        StatusBar(round, playerHp, enemyHp, wins);
        cout << "                                             _9@@@#I             :Yy}~            \n                                            8@@@@@@l           P@@@@@$`           \n                                            I@@@@@@<          -@@@@@@@~           \n                                             *3EOk,            l@@@@@qvuwyv`      \n                                             :KD0q-             `(I5mbB@@d@#}     \n                                           `M@R@@dQ         x9gB#@@@@BQQQ#@@@Q!   \n                                           8@@BQ@@gr_^~      QBBBBBgZH}}@@@@@@@*  \n                                          =@@#@#8B@@@@@@@,   ,rx}}ixLi  -R@@@@@@: \n                                          =@@z#@@#QB$r<:=vzdQ#@@@@@@@@@-  Z@@@@@O \n                                           B@#*@@@@@@dg@@@@@@@@@@#Qg0OY`v$@@@@@#^ \n                                           ,Ph`=#@@@@@@@@#Ehi^ `      |#@@@@$l~   \n                                                .uQ@@@#v_           .R@@@@H,      \n                                                  :@@@@`           :#@@@$:        \n                                                   #@@@!          -#@@@K          \n                                                   Q@@@r          O@@@d           \n                                                   8@@@)          #@@@-           \n                                                   #@@@<          .|v-            \n                                                   @@@@-                          \n                                                  |@@@B                           \n                                                  )@@@x                           \n";
        break;
    }
    case 5: //игрок блокирует удар ногой
    {
        StatusBar(round, playerHp, enemyHp, wins);
        cout << "                                                 ?x*.      -Q@@6:               .*(<`   \n                                              .D@@@@@w     -Q@@@@I`           `Z@@@@@I  \n                                              V@@@@@@@: `_   L#@@@Q:          T@@@@@@@= \n                                              ,B@@@@@Z :@@UL  -8@@@@;         ,#@@@@@8` \n                                              =xPzyi:`}@@B8Q`   K@@@@rx@@~   ~lwKyIu~   \n                                            ^QQBQ0LwO@@@gBd`     z@@@@rB@#x:ZQQQB}      \n                                           _@8Q#@@@#QQQBQr        Z@@@#_h@@@@@#8Qo      \n                                           h@@@BBQM$QOV=          `B@@@dMBQBBQ#@d`      \n                                           Q@@@@@d                 r@@@@@@@@@@#r        \n                                           B@@@@@w                  #@@@@@@@BY`         \n                                           O@@@@@k                  @@@@@Qw!            \n                                           ^@@@@@#z                -@@@@!               \n                                            z@@@@@@@g=             :@@@@_               \n                                            )@@@@B@@@@I            !@@@@_               \n                                            }@@@B )@@@@9           _@@@@!               \n                                           `B@@@I  !@@@@}           @@@@?               \n                                          `E@@@#    T@@@#`          Q@@@s               \n                                         !Q@@@#!    _@@@@=          o@@@B               \n                                         Q@@@$-      @@@@;          :@@@@               \n                                         -YV^        :Vk^            =yy=               \n";
        break;
    }
    case 6: //противник бьет рукой
    {
        StatusBar(round, playerHp, enemyHp, wins);
        cout << "                                                                @@@@6_              \n                                          k#@@@9,             3@@@@@@Q            \n                                         y@@@@@@B             W@@@@@@Q            \n                                         j@@@@@@#             'W@@@@D_            \n                                         `G@@@@Q!    E@@#       xx~_-`           \n                                            '=vxikKu_ a#@@@@@@@@@@@@@@@@@#QW!      \n                                           !Q@@@@@@@H_ `-!^vTzG#@@@@@@@@@@@@=     \n                                          :@@@@@@@@@@@a_       ^@@@@@@@}_#@@d     \n                                         '#@@@@@@@@@@@@@q~      y@@@@@@#`k@@@-    \n                                         T@@@#@@@@@@Be#@@@Q*    `g@@@@@@c,#@@:    \n                                         Z@@B:@@@@@@@~`iQ@@U     _#@@@@@@.`!.     \n                                         Q@@6 }@@@@@@8.  --       r@@@@@@!        \n                                         #@@z  8@@@@@@#i`          X@@@@0         \n                                         ~Iu'  K@@@@@@@@Q^        '0@@@@T         \n                                               }@@@g*B@@@@M`     `g@@@@@@!        \n                                               *@@@# `x#@@@G     =@@@@@@@B.       \n                                              `6@@@0   =@@@@.    :@@@QK@@@9       \n                                              Z@@@#:    #@@@v    -@@@#`Q@@@}      \n                                             s@@@@~     3@@@Z    `@@@@`:@@@@!     \n                                            !@@@@~      *@@@#     #@@@- i@@@$     \n";
        break;
    }
    case 7: //противник блокирует удар
    {
        StatusBar(round, playerHp, enemyHp, wins);
        cout << "                                                     !g@@@@#V          K@@@@@@b     \n                                                     #@@@@@@@]       !8#9#@@@@@=    \n                                                      8@@@@@@@<      9M@@B8@@@@Z    \n                                                  ^xv!VQ@@#d=    ~, 3d@@@yMM3l:`    \n                                               `a@8QQQ*      =TR@@@ :@M@@#ui8QQQW.  \n                                              `D@88@@@@#BB#@@@@@0u_  )#08@@@@@@$BB  \n                                              M@@@#QQ6sMddMmc?:       `LZZR8QQQQ@@v \n                                             ~@@@@@@@:                     i@@@@@@D \n                                             H@@@@@@@BZX!                  :@@@@@@# \n                                             Q@@@@@@HQ##V                   @@@@@@Q \n                                             g@@@@@E                       !@@@@@@3 \n                                             _@@@@@@k`                   (0@@@@@@#_ \n                                             `@@@@@@@B:                rB@@@@@@@Z   \n                                             v@@@@@@@@@:              5@@@@@@@@D    \n                                            `B@@@#*@@@@B`            g@@@@#@@@@r    \n                                             d@@@@x }@@@@y           m@@@@Vv@@@@i   \n                                          `M@@@@G  `#@@@#          -@@@@g `#@@@#.   \n                                          Q@@@@d    Z@@@@.         i@@@@?  ?@@@@Q   \n                                        |@@@@@}     z@@@@:         I@@@@    )@@@@@= \n                                        =B@@9       =#@@$`         ^#@@O`    :g@@Q_ \n";
        break;
    }
    case 8: //противник бьет ногой
    {
        StatusBar(round, playerHp, enemyHp, wins);
        cout << "                                                     `rcyx_             ~g@@@#K`  \n                                                    <#@@@@@z           `@@@@@@@K  \n                                                    d@@@@@@@            g@@@@@@v  \n                                               ;yVy}xQ@@@@#x              GDOk:   \n                                             *Q@M@@#QmPWy*`              vR$Rc-   \n                                           -R@@@@QQQQ#@@@@#Qg9i         vQQ@$#@y  \n                                          :#@@@@@@R?k5dQBBBBBQv   :*:.`-OQ@@Z@@@3 \n                                         _#@@@@@#?  *}ixL}}xr,   `#@@@@@@@Qg@@#@@.\n                                         P@@@@@#_  e@@@@@@@@@#QOXx~:~*hBBB@@@d0@@ \n                                         !B@@@@@#o__KR$8B#@@@@@@@@@@Bq@@@@@@8r@@Z \n                                           :YZ@@@@@M_       :^iX9#@@@@@@@@@O`:Gh` \n                                              `}#@@@@u            .*D@@@@G*       \n                                                `c@@@@6`            R@@@d         \n                                                  !#@@@E            @@@@x         \n                                                   :@@@@}          `@@@@<         \n                                                    c@@@O           @@@@~         \n                                                     =x*`           @@@@)         \n                                                                    Q@@@j         \n                                                                    z@@@B         \n                                                                    _#@@Q         \n";
        break;
    }
    case 9: //игрок побеждает
    {
        StatusBar(round, playerHp, enemyHp, wins); 
        if (playerType == 1)
        {
            cout << "                                        `@@I                   R@B                           \n                                         6@#`     ,eQB8z-     ,@@o                           \n                                         :@@d    .#@@@@@#`   `8@B.                           \n                                          <#@$    #@@@@@Q`  ~B@B                             \n                                           _d@@Z^`.uO$d}``)E@@a                              \n                                             :K#@@8$$$$$8@@Bz_                               \n                                                !#@@@@@@@#             `*}T-                 \n                                                 #@@@@@@@Q            =#@@@@@c               \n                                                 #@@@@@@@Q            H@@@@@@@               \n                                                 #@@@@@@@Q             Q@@@@#vxB#BD)         \n                                                 #@@@@@@@Q              -^*:  d8#BE@Z        \n                                                .@@@@@@@@#                 .uB@@Q8#@@W       \n                                                =@@@8`#@@@.              ^b@@#V}@@@@@@r      \n                                                v@@@q E@@@=           ,uaBBBgV)<D#@@@@D      \n                                                z@@@c h@@@x          $@9#@@@@@@@@@@@@@#      \n                                                O@@@r i@@@z        z@#K*@@@@ODB@@@@@@@b      \n                                                B@@@  ;@@@O         -` !@@@@. !Q@@@@k<       \n                                                @@@#` -@@@B            *@@@@`k@@@@@Ixxxr`    \n                                               !@@@Q   #@@@            x@@@#9@@@@@@@@@@@#    \n                                               !@@@h   M@@#.           -58Dr~M000000000Ov    \n";
        }
        if (playerType == 2)
        {
            cout << "                                                ^Z#@#D]                         \n                                               ^@ @@@ @y                        \n                                               v@@|@@@@@                        \n                                                TB@@@#m`                        \n                                             _:=^*vT}]lzPd$Q#@@@@}               \n                                         r$@@@@@@@@@@@@@@@@@@#QDK:'             \n                                        x@@@#g#@@@@@@@$^!_`    _o@@@@@@@@@q`                                         \n                                       B@@# =@@@@@@@Q.       !q@@@@@@@@@@@@O   \n                                       ~@@@u`B@@@@@@#.     ~z#@@@#@@@@@@@@@@@X  \n                                       `wZw`c@@@@@@#!     c@@@@Z*x@@@@@@@MQ@@#` \n                                           `#@@@@@@^      -yU(  -#@@@@@@0`K@@@= \n                                            D@@@@@u            )B@@@@@@#. i@@@v \n                                            _@@@@@~          ]B@@@@@@@@M   mgG_ \n                                           `0@@@@@@*       vB@@@@8v@@@@u        \n                                           O@@@@@@@B      x@@@@g^ !@@@@*        \n                                          y@@@@j@@@B      B@@@R   -#@@@Z        \n                                         v@@@@^u@@@0     !@@@@r    ;@@@@O`      \n                                        r@@@@? s@@@5     z@@@B`     >@@@@8`     \n                                        8@@@I  e@@@c     O@@@y       >#@@@)     \n                                        .xc^   `vc(      `xu)         -Yu*      \n";
        }
        if (playerType == 3)
        {
            cout << "                                      `@@I                   R@B\n                                       6@#`     ,eQB8z-     ,@@o\n                                       :@@d    .#@@@@@#`   `8@B.\n                                        <#@$    #@@@@@Q`  ~B@B\n                                          _d@@Z^`.uO$d}``)E@@a\n                                            :K#@@8$$$$$8@@Bz_\n                                               !#@@@@@@@#\n                                               #@@@@@@@Q                    .xDVr`\n                                               #@@@@@@@Q                   ^@@@@@@^\n                                               #@@@@@@@Q                   Q@@@@@@q\n                                               #@@@@@@@Q           _PI<^   r@@@@@@d\n                                              .@@@@@@@@#            e@@#dhVmQ@@@@#}\n                                              =@@@8`#@@@.            `T#@@@@@@@@@@@@I\n                                              v@@@q E@@@=               `:v@@@@@@@@@@Z\n                                              z@@@c h@@@x                >@@@@@@@@8@@}\n                                              O@@@r i@@@z                R@@@@@@@@Or@@\n                                              B@@@  ;@@@O         `!:   _ZMZMaVxYB#Q@@_\n                                              @@@#` -@@@B          i@@$m@@@@$-   ~@@@@@@M\n                                             !@@@Q   #@@@          `@@@@@BQ##,   :rr}D@@@DBB~\n                                             !@@@h   M@@#.          wB0x     ____`    `d@8V,\n                                        ";
        }
        Sleep(2000);
        break;
    }
    case 10: //противник блокирует удар ногой
    {
        StatusBar(round, playerHp, enemyHp, wins);
        cout << "                                       `<(*-               :6@@Q-      .*x?           \n                                        y@@@@@Z`           `y@@@@B-     w@@@@@D.       \n                                       =@@@@@@@T          :Q@@@#L   _` :@@@@@@@V       \n                                       `0@@@@@#,     `'  ;@@@@8-  LU@@~ Z@@@@@B,       \n                                         ~uIymwl~   ~@@lr@@@@K   `Q8B@@}`:iyzPx=       \n                                            }BQQQZ!x#@B*@@@@3     `dBg@@@OwL0QBQQ^     \n                                            oB8#@@@@@h_B@@@Z        rQBQQQ#@@@#Qg@_    \n                                            `5@#QBBQBMd@@@B`          !VOQ$ZQBB@@@h    \n                                              r#@@@@@@@@@@r                 d@@@@@Q    \n                                               `YB@@@@@@@#                  w@@@@@B    \n                                                  :wQ@@@@@                  k@@@@@O    \n                                                     !@@@@-                y#@@@@@^    \n                                                     _@@@@:             =g@@@@@@@z     \n                                                     _@@@@!            I@@@@B@@@@)     \n                                                     !@@@@_           M@@@@x B@@@}     \n                                                     ?@@@@           }@@@@!  I@@@B`    \n                                                     s@@@Q          `#@@@T    #@@@E`   \n                                                     B@@@o          =@@@@_    !#@@@Q!  \n                                                     @@@@:          ;@@@@      -9@@@Q  \n                                                     =yy=            ^wV:        ^VY-  \n";
        break;
    }
    case 11: //противник побеждает
    {
        StatusBar(round, playerHp, enemyHp, wins);
        cout << "                                                                  B@R                   I@@` \n                                                                  o@@,     -z8BQe,     `#@6  \n                                                                  .B@8`    #@@@@@#.    d@@:  \n                                                                    B@B~   Q@@@@@#    $@#<   \n                                                                      a@@E)``}d$Ou.`^Z@@d_   \n                                                                       _zB@@Q$$$$$8@@#K:     \n                                                      -?T}*`             Q@@@@@@@#!          \n                                                     c@@@@@#=            $@@@@@@@#           \n                                                     @@@@@@@H            $@@@@@@@#           \n                                               )DB#Bxv#@@@@Q             $@@@@@@@#           \n                                              Z@EB#8d  :*^-              $@@@@@@@#           \n                                             W@@#8Q@@Bu-                 B@@@@@@@@.          \n                                            r@@@@@@}V#@@b^              .@@@#`8@@@=          \n                                            D@@@@#D<)VgBBBau,           =@@@E q@@@v          \n                                            #@@@@@@@@@@@@@#9@$|`        x@@@h c@@@k          \n                                            b@@@@@@@BDO@@@@*K#@z        z@@@i r@@@O          \n                                             <k@@@@Q! .@@@@! `-         O@@@;  @@@B          \n                                          `rxxxI@@@@@k`@@@@*            B@@@- `#@@@          \n                                          #@@@@@@@@@@@9Q@@@x            @@@#   Q@@@!         \n                                          vO000000000M~^D85-           .#@@M   h@@@!         \n";
        Sleep(2000);
        break;
    }
    }
}