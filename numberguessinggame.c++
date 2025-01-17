#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
    system("cls");
    cout<<"\n\n";
    cout << "\t\t\t\033[34m*************************************************************************************************\033[0m" << endl;
    cout << "\t\t\t\033[34m*\033[0m\t\t\t\t\033[32m    Welcome to number guessing game \t\t\t\t\033[0m\033[34m*\033[0m" <<endl;
    cout << "\t\t\t\033[34m*************************************************************************************************\033[0m" << endl;
    //  << endl;

    cout << "\033[34m\t\t\t\t\t*****************************************************************\033[0m" << endl;
    cout << "\t\t\t\t\t\033[34m*\033[0m\t\t\t\033[31m      Rules \033[0m\t\t\t\t\033[34m*\033[0m" << endl;
    cout << "\033[34m\t\t\t\t\t*\t\t\t\t\t\t\t\t*\033[0m" << endl;
    cout << "\t\t\t\t\t\033[34m*\033[0m\t    \033[32mAttempts will be based on difficulty level\033[0m \t\t\033[34m*\033[0m" << endl;
    cout << "\t\t\t\t\t\033[34m*\t     \033[0m   \033[32m Guess a number between 0 and 100\033[0m \033[34m\t\t*\033[0m" << endl;
    cout << "\t\t\t\t\t\033[34m*\033[0m\t       \033[32mOne hints available after each guess\033[0m \t\t\033[34m*\033[0m" << endl;
    cout << "\t\t\t\t\t\033[34m*\033[0m   \033[32m \t      Three one-time special hints available\033[0m \033[34m\t\t*\033[0m" << endl;
    cout << "\t\t\t\t\t\033[34m*\033[0m\t\t\t\t\t\t\t\t\033[34m*\033[0m" << endl;
    cout << "\t\t\t\t\t\033[34m*****************************************************************\033[0m" << endl
         << endl;
    int start;         // To start or end game
    int random;        // To store random numer
    int attempts;      // To set game difficulty
    bool stop = false; // While loop for keep game running
    int number=-23;        // To store user input
	int evenorodd = 0;
	int greaterorless = 0;
	int isdivisible = 0;
// Used for hints
    int k = 0; // To choose hints
    srand(time(0));
    while (!stop)
    {
        cout << "\033[36mPress 1 to start the game \nPress 2 to exit the game\nEnter choice : ";
        cin >> start;
    	cout<<"\033[0m";
	    system("cls");
		int number=-23;        // To store user input
	int evenorodd = 0;
	int greaterorless = 0;
	int isdivisible = 0;
// Used for hints
    int k = 0; // To choose hints
        switch (start)
        {

        case 1:
        {
            cout << "\033[36mChoose difficulty level \n\n1) Easy   ----- 15 attempts\n2) Medium ----- 10 attempts\n3) Hard   ----- 5 attempts" << endl;
            cout << "Choose any : ";
            cin >> attempts;
            cout << "\033[0m";
            system("cls");
            if (attempts == 1)
            {
                attempts = 15;
            }
            else if (attempts == 2)
            {
                attempts = 10;
            }
            if (attempts == 3)
            {
                attempts = 5;
            }
            random = rand() % 101 + 1;

            int n = 0; // To check the loop

            while (n != attempts && number != random)
            {
                // cout<<n<<endl<<endl; // Check working
                // cout<<attempts<<endl<<endl; //Check attempts working
                cout << "\033[32mIf you want special hint press -1\033[0m" << endl;
                cout << "\033[34mGuess the number : ";
                cin >> number;
                system("cls");
                cout << "\033[0m";

                while (number != -1)
                {
                    if (number > 0 && number < 100)
                    {

                        if (number == random)
                        {
                            cout << "\033[32mYou nailed it! Well done!\033[0m"<<endl;
                            break;
                        }

                        else if (number != random && n == attempts - 1)
                        {
    cout<<"\n\n";                        
   	cout << "\t\t\t\033[34m*************************************************************************************************\033[0m" << endl;
    cout << "\t\t\t\033[34m*\033[0m\t\t\t\t\033[32m      Out of attempts. Game over\t\t\t\t\033[0m\033[34m*\033[0m" <<endl;
    cout << "\t\t\t\033[34m*\033[0m\t\t\t\t\033[32m        Correct answer was : " << random <<"\t\t\t\t\033[0m\033[34m\t*\033[0m" <<endl;
    cout << "\t\t\t\033[34m*************************************************************************************************\033[0m" << endl;
	    	
   
    cout << "\t\t\t\033[34m*************************************************************************************************\033[0m" << endl;
    cout << "\t\t\t\033[34m*\033[0m\t\t\t\t\033[32m      Made by : Abdul Razzaque \t\t\t\t\033[0m\033[34m\t*\033[0m" <<endl;
    cout << "\t\t\t\033[34m*\033[0m\t\t\t\t\033[32m    GitHub : abdulrazzaquememon1  \t\t\t\t\033[0m\033[34m*\033[0m" <<endl;
    cout << "\t\t\t\033[34m*\033[0m\t\t\t\t\033[32m   LinkdIn : Abdul Razzaque Memon  \t\t\t\t\033[0m\033[34m*\033[0m" <<endl;
    cout << "\t\t\t\033[34m*************************************************************************************************\033[0m" << endl<<endl;
							n++;
                            break;
                        }

                        else if (number != random && (number < random - 10 || number > random + 10))
                        {
                            cout << "\033[35mNot close \033[0m" << endl;
                            n++;
                            cout << "\033[36mAttempts used : " << n << "" << endl;
                            break;
                        }

                        else if (number != random && (number >= random - 10 || number <= random + 10))
                        {
                            cout << "\033[36mAlmost there \033[0m" << endl;
                            n++;
                            cout << "\033[36mAttempts used : " << n << "" << endl;
                            break;
                        }
                    }
                    else
                    {
                        cout << "\033[31mInput should be between 0 and 100 \033[0m" << endl;
                    }

                    break;
                }
                if (number == -1)
                {

                    cout << "\033[34mWhich option do you want to choose ( Remember each hint can be used once only ) \n1) Is number is even or odd\n2) Is number greater or less than the number I guess\n3) Is number divisible by 5\033[0m " << endl;
                    cout << "\033[32mEnter your choice : ";
                    cin >> k;
                    cout << "\033[0m";
                    system("cls");
                    if (k == 1)
                    {
                        if (evenorodd == 0)
                        {
                            if (random % 2 == 0)
                            {
                                cout << "\033[32mNumber is even\033[0m" << endl;
                            }
                            else if (random % 3 == 0)
                            {
                                cout << "\033[32mNumber is odd\033[0m" << endl;
                            }
                            evenorodd++;
                        }
                        else
                            cout << "\033[31mHint already used\033[0m " << endl;
                    }
                    else if (k == 2)
                    {
                        if (greaterorless == 0)
                        {
                            int no;
                            cout << "\033[32mEnter the number you want to check : \033[0m";
                            cin >> no;
                            if (random > no)
                            {
                                cout << "\033[32mHigher\033[0m" << endl;
                            }
                            else if (random < no)
                            {
                                cout << "\033[32mLower\033[0m" << endl;
                            }
                            else if (random == no)
                            {
                                cout << "\033[32mEqual\033[0m" << endl;
                            }
                            greaterorless++;
                        }
                        else
                            cout << "\033[31mHint already used\033[0m " << endl;
                    }
                    else if (k == 3)
                    {
                        if (isdivisible == 0)
                        {
                            if (random % 5 == 0)
                            {
                                cout << "\033[32mThis number is divisible by 5\033[0m " << endl;
                            }
                            else if (random % 5 != 0)
                            {
                                cout << "\033[32mThis number is not divisible by 5\033[0m " << endl;
                            }
                            isdivisible++;
                        }
                        else
                            cout << "\033[31mHint already used\033[0m " << endl;
                    }
                }
            }
        }
        break;
        case 2:
        	//cout<<"\033[34mThanks for playing\033[0m"<<endl;
    cout<<"\n\n";
	cout << "\t\t\t\033[34m*************************************************************************************************\033[0m" << endl;
    cout << "\t\t\t\033[34m*\033[0m\t\t\t\t\033[32m        Thanks for playing\t\t\t\t\033[0m\033[34m\t*\033[0m" <<endl;
    cout << "\t\t\t\033[34m*************************************************************************************************\033[0m" << endl;
	    	
    cout << "\t\t\t\033[34m*************************************************************************************************\033[0m" << endl;
    cout << "\t\t\t\033[34m*\033[0m\t\t\t\t\033[32m      Made by : Abdul Razzaque \t\t\t\t\033[0m\033[34m\t*\033[0m" <<endl;
    cout << "\t\t\t\033[34m*\033[0m\t\t\t\t\033[32m    GitHub : abdulrazzaquememon1  \t\t\t\t\033[0m\033[34m*\033[0m" <<endl;
    cout << "\t\t\t\033[34m*\033[0m\t\t\t\t\033[32m   LinkdIn : Abdul Razzaque Memon  \t\t\t\t\033[0m\033[34m*\033[0m" <<endl;
    cout << "\t\t\t\033[34m*************************************************************************************************\033[0m" << endl;
			return 0;
            break;

        default:
            break;
        }
    }
}
