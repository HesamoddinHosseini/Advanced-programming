                                          // in the name of god
                                          // professor:Dr. shakeri
                                          // producer: seyed hesammodin hosseini
                                          // project:  answer dietl book


/*
//3.12
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

double calculatecharges(double);

int main() {
    double hour,currentcharge,totalhours=0.0,totalcharges=0.0;
    int first=1;
    for(int i=1;i<=3;i++){
        cin>>hour;
        totalhours+=hour;
        if(first){
            cout<<"car"<<"hours"<<"charge";
            first=0;
        }
        totalcharges+=(currentcharge=calculatecharges(hour));
        cout<<i<<currentcharge;
    }
    cout<<"total"<<totalhours<<totalcharges<<endl;
    return 0;
}
double calculatecharges(double hours){
    double charge;
    if(hours<3.0)
        charge=2.0;
    else if(hours<19.0)
        charge=2.0+.5*ceil(hours-3.0);
    else
        charge = 10.0;
    return charge;
}
*/

/*
//3.13
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void roundtolntegers(void);

int main(){
    roundtolntegers();
    return 0;
}
void roundtolntegers(void){
    double x,y;
    for(int i=1;i<=5;i++){
        cin>>x;
        y=floor(x+5);
        cout<<x<<y<<endl;
    }
}

 */

/*
//3.14
#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

double roundtolnteger(double);
double roundtotenths(double);
double roundtohundredths(double);
double roundtothousandths(double);

int main(){
    int count;
    double number;
    cin>>count;
    for(int i=0;i<count;i++){
        cin>>number;
        cout<<number<<roundtolnteger(number)<<roundtotenths(number)<<roundtohundredths(number)<<roundtothousandths(number);
    }
    return 0;
}
double roundtolnteger(double x){
    return floor(x+.5);
}
double roundtotenths(double x){
    return floor(x*10+.5)/10;
}
double roundtohundredths(double x){
    return floor(x*100+.5)/100;
}
double roundtothousandths(double x){
    return floor(x*1000+.5)/1000.0;
}
 */

/*
//3.18
#include <iostream>
using namespace std;

int integerpower(int,int);

int main(){
    int exp,base;
    cin>>exp>>base;
    cout<<base<<exp<<endl;
    return 0;
}
int integerpower(int b,int e){
    int tolide =1;
    for(int i=1;i<=e;i++)
        tolide*=b;
    return tolide;
}
*/

/*
//3.19
#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

double hypotenuse(double,double);

int main(){
    double side1,side2;
    for(int i=1;i<=3;i++){
        cin>>side1>>side2;
        cout<<"hypotenuse"<<hypotenuse(side1,side2)<<endl;
    }
    return 0;
}
double hypotenuse (double s1,double s2){
    return sqrt( s1*s1+s2*s2);
}
*/
/*
//3.20
#include<iostream>
using namespace std;

bool multiple(int,int);

int main(){
    int x,y;
    for(int i=1;i<=3;i++){
        cin>>x>>y;
        if(multiple(x,y))
            cout<<y<<"multiple nist"<<x;
        else
            cout<<y<<"multiple ast"<<x;
    }
    cout<<endl;
    return 0;
}
bool multiple (int a,int b){
    return(b%a);
}
*/

/*
//3.21
#include<iostream>
using namespace std;

bool even(int);

int main(){
    int x;
    for(int i=1;i<=3;i++){
        cin>>x;
        if(even(x))
            cout<<x<<"ast odd integer";
        else
            cout<<x<<"ast even integer";
    }
    cout<<endl;
    return 0;
}
bool even(int a){
    return(a%2);
}
*/


/*
//3.22
#include <iostream>
using namespace std;

void sqrt(int);

int main(){
    int side;
    cin>>side;
    sqrt(side);
    cout<<endl;
    return 0;
}
void sqrt(int s){
    for(int radif=1;radif<=s;radif++){
        for(int col=1;col<=s;col++)
            cout<<'*';
    }
}
*/

/*
//3.23
#include <iostream>
using namespace std;

void sqrt(int,char);

int main(){
    int s;
    char c;
    cin>>c>>s;
    sqrt(s,c);
    cout<<endl;
    return 0;
}
void sqrt(int side,char fillcharacter){
    for(int radif=1;radif<=side;radif++){
        for(int col=1;col<=side;col++)
            cout<<fillcharacter;
    }
}
*/

/*
//3.25
#include<iostream>
#include<iomanip>
using namespace std;

int q(int,int);
int r(int,int);

int main(){
    int n,d=10000;
    cin>>n;
    while(n>=1){
        if(n>=d){
            cout<<q(n,d);
            n=r(n,d);
            d=q(d);
        }
        else
            d=q(d);
    }
    cout<<endl;
    return 0;
}
int q(int a, int b){
    return a/b;
}
int r(int a,int b{
    return a%b;
}
*/

/*
//3.26
#include<iostream>
using namespace std;

unsigned seconds(unsigned,unsigned,unsigned);

int main(){
    unsigned hours,minutes,secs,temp;
    cin>>hours>>minutes,secs;
    temp=seconds(hours,minutes,secs);
    cout<<"enter the second time as three integers";
    cin>>hours>>minutes>>secs;
    cout<<seconds(hours,minutes,secs)-temp<<"seconds"<<endl;
    return 0;
}
unsigned seconds(unsigned h,unsigned m,unsigned s){
    return 3600*(h>=12?h-12:h)+60*m+s;

}
*/

/*
//3.27
#include<iostream>
using namespace std;

int celcius(int);
int fahrenheit(int);

int main(){
    for(int i=0;i<100;i++)
        cout<<i<<fahrenheit(i);
    for(int j=32;j<=212;j++)
        cout<<j<<celcius(j);
    cout<<endl;
    return 0;
}
int celcius(int ftemp){
    return static_cast <int>(5.0/9.0*(ftemp-32));
}
int fahrenheit(int ctemp){
    return static_cast<int>(9.0/5.0*ctemp+32);
}
*/

/*
//3.28
#include<iostream>
using namespace std;

double smallest3(double,double,double);

int main(){
    double x,y,z;
    cin>>x>>y>>z;
    cout<<smallest3(x,y,z)<<endl;
    return 0;
}
double smallest3(double smallest,double b,double c){
    if(b<smallest && c>smallest)
        return b;
    else if(c<smallest)
        return c;
    return smallest;
}
*/

/*
//3.29
#include<iostream>
using namespace std;

bool perfect(int);

int main(){
    for(int j=2;j<=1000;j++)
        if (perfect(j))
            cout<<j<<endl;
    return 0;
}
bool perfect(int value){
    int factorsum=1;
    for(int i=2;i<=value/2;i++)
        if(value%i==0)
            factorsum+=i;
    return factorsum==value?true:false;
}
*/

/*
//3.30
#include<iostream>
#include<iomanip>
using namespace std;

bool prime(int);

int main(){
    int count=0;
    for(int loop=2;loop<=10000;loop++)
        if(prime(loop)){
        count++;
        cout<<loop;
        if(count%10==0)
            cout<<endl;
    }
    return 0;
}
bool prime(int n){
    for(int loop2=2;loop2<=n/2;loop2++)
        if(n%loop2==0)
            return false;
    return true;
}
*/

/*
//3.31
#include<iostream>
#include<iomanip>
using namespace std;

int reversedigits(int);
int width(int);

int main(){
    int number;
    cin>>number;
    cout<<reversedigits<<endl;
    return 0;
}
int reversedigits(int n){
    int reverse=0,divisor=1000,multiplier=1;
    while(n>10){
        if(n>=divisor){
            reverse+=n/divisor*multiplier;
            n%=divisor;
            divisor/=10;
            multiplier*=10;
        }
        else
            divisor/=10;
    }
    reverse+=n*multiplier;
    return reverse;
}
int width(int n){
    if(n/=1000)
        return 4;
    else if(n/=100)
        return 3;
    else if(n/=10)
        return 2;
    else
        return 1;
}
*/

/*
//3.32
#include <iostream>
using namespace std;

int gcd(int,int);

int main(){
    int a,b;
    for(int j=1;j<=5;j++){
        cin>>a>>b;
        cout<<a<<b<<gcd(a,b);
    }
    return 0;
}
int gcd(int x,int y){
    int greatest=1;
    for(int i=2;i<=((x<y)?x:y);i++)

    if(x%i==0 && y%i==0)
        greatest=i;
    return greatest;
}
*/

/*
//3.33
#include<iostream>
using namespace std;

int qualitypoints(int);

int main() {
    int avg;
    for (int loop = 1; loop <= 5; loop++) {
        cin >> avg;
        cout << qualitypoints(avg);
    }
    cout<<endl;
    return 0;
}
int qualitypoints(int avg){
    if(avg>=90)
        return 4;
    else if(avg>=80)
        return 3;
    else if(avg>70)
        return 2;
    else if(avg>=60)
        return 1;
    else
        return 0;
}
*/







