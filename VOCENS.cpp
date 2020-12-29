#include<iostream>
#include<string.h>
#include<cstdlib>
#include<time.h>
using namespace std;

main()
{
    system("cls");
    int score=0;

    //randomize games ID
    int gamesID[]={0,1,2,3,4,5,6,7,8,9};
    int rd1, rd2, rd3, rd4;
    srand(time(NULL));
    
    for (int i=0; i<1; i++)
    {
        //randomizing ID
        rd1=rand()%10;
        rd2=rand()%10;
        rd3=rand()%10;
        rd4=rand()%10;
    }

    //welcoming user with their name
    cout << "Welcome to VOCENS Mini Games!" << endl;
    cout << "What's your name?" << endl;
    char name[100];        
    cin.getline(name, sizeof(name));
    system("cls");
    cout << "Goodluck, " << name << "!" << endl;

    //while loop (for back to menu)
    char menu;
    while(menu!='n')
    {
        
        int level;
        for (int i=0; i<1; i++)
        {
            cout << "Your Games ID : " << gamesID[rd1] << gamesID[rd2] << gamesID[rd3] << gamesID[rd4] << endl << endl;
        }
        cout << "<<--   VOCENS's    Level     Menu  -->>" << endl
             << "=======================================" << endl
             << "  --   1. Easy     (4 characters)  --  " << endl
             << "  --   2. Moderate (6 characters)  --  " << endl
             << "  --   3. Hard     (9 characters)  --  " << endl
             << "=======================================" << endl << endl
             << "Please choose level you wanna play : "; cin >> level;


        switch(level)
        {

            //level 1 of the game ==============================================================================
            case 1:
            {
                system("cls");
                int score1=0;
                
                //the game's started
                cout << "<<--      VOCENS's  Level-1 (Easy)      -->>" << endl
                     << "============================================" << endl << endl;

                string vocab1[]={"mine","make","boom","feel","love"};  
                                //vocabs library
                string str;
                string answer;

                //for randomizing
                srand(time(NULL));

                for (int i=0; i<5; i++)
                {

                    //randomizing
                    int ch1=rand()%4;

                    //temporary of output (censored)
                    str=vocab1[i];
                    str[ch1]='*';
                    cout << str; cout << endl;

                    //user's answer
                    cout << "The true word above is : "; cin >> answer;

                    //scoring
                    if (answer==vocab1[i]){
                        score1++;
                        score++;
                        cout << "Good, " << name << "!" << endl << endl;
                    }
                    else{
                        cout << "Ouch, sorry!" << endl << endl;
                    }
                    
                }

                system("cls");

                cout << "<<--      VOCENS's  Level-1 (Easy)      -->>" << endl
                     << "============================================" << endl << endl;

                //sum of scores
                if (score1<1){
                    cout << "Oops, sorry!" << endl << "You have no scores right now :(" << endl << endl;
                }
                else{
                    cout << "Congratulation!" << endl << "Your score(s) right now : " << score1 << endl << endl;
                }

            }break;


            //level 2 of the game ==============================================================================
            case 2:
            {
                system("cls");
                int score2=0;

                //the game's started
                cout << "<<--    VOCENS's  Level-2 (Moderate)    -->>" << endl
                     << "============================================" << endl << endl;

                string vocab2[]={"praise","admire","refuse","answer","repair",
                                "accept","punish","advise","remind","arrive"}; 
                                //vocabs library
                string str;
                string answer;

                //for randomizing
                srand(time(NULL));

                for (int i=0; i<10; i++)
                {

                    //randomizing
                    int ch1=rand()%6;
                    int ch2=rand()%6;

                    //checking randomized
                    while(ch2==ch1)
                    ch2=rand()%6;

                    //temporary of output (censored)
                    str=vocab2[i];
                    str[ch1]='*'; str[ch2]='*';
                    cout << str; cout << endl;

                    //user's answer
                    cout << "The true word above is : "; cin >> answer;

                    //scoring
                    if (answer==vocab2[i]){
                        score2=score2+2;
                        score=score+2;
                        cout << "Perfect, " << name << "!" << endl << endl;
                    }
                    else{
                        cout << "Ouch, sorry!" << endl << endl;
                    }
                    
                }

                system("cls");

                cout << "<<--    VOCENS's  Level-2 (Moderate)    -->>" << endl
                     << "============================================"<< endl << endl;

                //sum of scores
                if (score2<1){
                    cout << "Oops, sorry!" << endl << "You have no scores right now :(" << endl << endl;
                }
                else{
                    cout << "Congratulation!" << endl << "Your score(s) right now : " << score2 << endl << endl;
                }

            }break;


            //level 3 of the game ==============================================================================
            case 3:
            {
                system("cls");
                int score3=0;

                //the game's started
                cout << "<<--      VOCENS's  Level-3 (Hard)      -->>" << endl
                     << "============================================" << endl << endl;

                string vocab3[]={"sometimes","challenge","dangerous","different","disappear",
                                "knowledge","ambiguous","neighbour","newspaper","broadcast",
                                "champions","accompany","encourage","introduce","themselves"}; 
                                //vocabs library
                string str;
                string answer;

                //for randomizing
                srand(time(NULL));

                for (int i=0; i<15; i++)
                {

                    //randomizing
                    int ch1=rand()%9;
                    int ch2=rand()%9;
                    int ch3=rand()%9;

                    //checking randomized
                    while(ch2==ch1&&ch3==ch1&&ch3==ch2)
                    {
                        ch1=rand()%9;
                        ch2=rand()%9;
                        ch3=rand()%9;
                    }
                    
                    //temporary of output (censored)
                    str=vocab3[i];
                    str[ch1]='*'; str[ch2]='*'; str[ch3]='*';
                    cout << str; cout << endl;

                    //user's answer
                    cout << "The true word above is : "; cin >> answer;

                    //scoring
                    if (answer==vocab3[i]){
                        score3=score3+3;
                        score=score+3;
                        cout << "Excellent, " << name << "!" << endl << endl;
                    }
                    else{
                        cout << "Ouch, sorry!" << endl << endl;
                    }
                    
                }

                system("cls");

                cout << "<<--      VOCENS's  Level-3 (Hard)      -->>" << endl
                     << "============================================" << endl << endl;

                //sum of scores
                if (score3<1){
                    cout << "Oops, sorry!" << endl << "You have no scores right now :(" << endl << endl;
                }
                else{
                    cout << "Congratulation!" << endl << "Your score(s) right now : " << score3 << endl << endl;
                }

            }break;

        }

        //for get user's initial from their name
        char front_initial[1];
        strncat(front_initial,name,1);
        strupr(front_initial);

        cout << "============================================" << endl;
        cout << "User Initial        : " << front_initial << endl;
        cout << "Your total score(s) : " << score << endl << endl;
        
        //ends program or back to menu
        cout << "Back to menu? (y/n) : "; cin >> menu;

        system("cls");

    }

    cout << "Have a good day, " << name << "!" << endl << "See you soon ^^" << endl << endl;
    return(0);
}
