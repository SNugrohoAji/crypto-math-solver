#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;

//variable
int pilih;
string kembali;

//modular exponentation function
int modexp(int a, int b, int n)
{
    int r = pow(a,b);
    r = r % n;
    cout << "result  : " << r;
    return r;
}

//modinv
int modInverse(int a, int m) 
{ 
	a = a%m; 
	for (int x=1; x<m; x++)
    {
        if ((a*x) % m == 1)
        {
            return x;
        }
    }
    return 0;
}

//title banner
void title()
{
    cout << R"(

 .----------------.    .----------------.    .----------------.
| .--------------. |  | .--------------. |  | .--------------. |
| |     ______   | |  | | ____    ____ | |  | |    _______   | |
| |   .' ___  |  | |  | ||_   \  /   _|| |  | |   /  ___  |  | |
| |  / .'   \_|  | |  | |  |   \/   |  | |  | |  |  (__ \_|  | |
| |  | |         | |  | |  | |\  /| |  | |  | |   '.___`-.   | |
| |  \ `.___.'\  | |  | | _| |_\/_| |_ | |  | |  |`\____) |  | |
| |   `._____.'  | |  | ||_____||_____|| |  | |  |_______.'  | |
| |              | |  | |              | |  | |              | |
| '--------------' |  | '--------------' |  | '--------------' |
 '----------------'    '----------------'    '----------------'
                       Crypto Math solver
)" << endl;
}

int main()
{
    menu:
        system("clear");
        title();
        cout<<"[1] Rsa"<<endl;
        cout<<"[2] elgamal"<<endl;
        cout<<"[3] Curva Eliptik"<<endl;
        cout<<"[4] Modular Exponen"<<endl;
        cout<<"[5] Modular Inverse"<<endl;
        cout<<"[6] Prime Check"<<endl;
        cout << endl;
        cout << "--> ";
        cin >> pilih;

        switch (pilih)
        {
            case 1:
            {
                cout << "rsa";
                break;
            }
            case 2:
            {
                cout << "elgamal";
                break;
            }
            case 3:
            {
                cout << "kurva";
                break;
            }
            case 4:
            {
                modexp:
                    system("clear");
                    cout << "modexp" << endl;
                    cout << "================="<< endl;
                    int a,b,n;
                    cout << "input a : ";
                    cin >> a;
                    cout << "input b : ";
                    cin >> b;
                    cout << "input n : ";
                    cin >> n;
                    modexp(a,b,n);
                    cout << endl <<"=================" << endl << endl;
                    cout << "[back] goto menu" << endl;
                    cout << "[00] go to top" << endl << endl;
                    cout << "--> ";
                    cin >> kembali;
                    if (kembali == "back")
                    {
                        goto menu;
                    }else
                    {
                        goto modexp;
                    }
                    
            }
            case 5:
            {
                cout << "modinv";
				int a, m;
			    cout << "a = ";
			    cin >> a;
                cout << "m = ";
                cin >> m;
			    cout << modInverse(a, m);
            }
            case 6:
            {
                cout << "prime";
                break;
            }
            default:
            {
                cout << "input salah";
            }
        }
}