#include<iostream>
using namespace std;
int main(){
//Artemis:Lunar solar calendar matching
time_t now = time(0);
   char* dt = ctime(&now);
   cout << "\nThe local date and time is: " << dt;
   tm *gmtm = gmtime(&now);
   dt = asctime(gmtm);
   //cout << "The NTP date and time is:"<< dt << endl;
    std::cout << "seconds calculation" << now << "\n";
    int min = now / 60;
    //std::cout << "Minute" << min << "\n";
    int hour = min / 60;
    //std::cout << "Hour" << hour << "\n";
    int days;days = hour / 24;
    //std::cout << "Day" << days << "\n";
    int mon0,mon1;mon0 = 30;mon1 = 31;
    double yc;
    yc = days/365.25;
    //std::cout << "Years" << yc << "\n";
    int sy = 2024 - yc;
    std::cout << "starting year " << sy << "\n";
    int nye23=19722;
int d24=days-19722;
cout << "\ntotal days from 23 newyear eve : " << d24;         
double chY,co,co2,foW,fiW,sfW,bfW,toF,toFi,tFo,tFi,ry,nry,tm,spa;
    chY=365.25;co=1;co2=1;toF=0;toFi=0;tFo=0;tFi=0;ry=0;nry=0;spa=0;foW=14;fiW=15;
    for (int yl=1;yl<10;yl++){cout << "Year "<< co2 << " = " << nry << " days\r";nry+=ry;co2+=1;
    //spa=yl;
        //switch(spa){default:        
        //break;}
    }
    for (int hy=1;hy<10;hy++){cout << "Year "<< co << " = " << chY << " days\r";chY+=365.25;co+=1;}
//for (int ass=1;ass<7;ass++){foW[ass]=14;tFo+=foW[ass];toF+=foW[ass];//cout << "fourteen days week " << ass << ":" << foW[ass] << "\r";
/*switch(foW[ass]){
    case (1):cout<<"Month 1 Tagu";break;
    case (2):cout<<"Month 3 Nayon";break;
    case (3):cout<<"Month 5 Wagaung";break;
    case (4):cout<<"Month 7 Thadinyut";break;
    case (5):cout<<"Month 9 Nadaw";break;
    case (6):cout<<"Month 11 Tabodwe";break;
    default:break;
    }
    }
    ass-=1;cout << "total fourteen days week in burmese year " << ass << "\r" << tFo << "days" << "\r";*/
    //for (int afi=1;afi<19;afi++){fiW[afi]=15;tFi+=fiW[afi];toFi+=fiW[afi];//cout << "fiftheen days week " << afi << ":" << fiW[afi] << "\r";
   // }afi-=1;cout << "total fiftheen days week in burmese year " << afi << "\r" << tFi << "days" << "\r";
   // ry=tFo+tFi;cout << "Regular burmese year " << ry << " days" << "\r";nry=ry;
//end Artemis
//basic c++
cout << "greed is good.!\r";
/*advance c++
double b,a;
//netsted loop:112   212
for(b = 1;b < 3;b++){
    cout << b;
for(a = 1;a < 3;a++){
    cout << a;
    }
    cout << endl;
    }
//switch calculator
double valA, valB, ops, res;
    cout << "Calculation: 1.+    2.-    3.x    4.÷\rChoose operation\r";// ÷ = / & * = x
    //cin >> ops;
    cout << "Enter Value A\r";
    //cin >> valA;
    valB = 3;
    switch(ops){case (1): res = valA + valB; cout << "\rResult : "<< valA << " + " << valB << " = " << res << "\r";break;
        case (2): res = valA - valB;cout << "\rResult : " << valA << " - " << valB << " = " << res << "\r";break;
        case (3): res = valA * valB;cout << "\rResult : " << valA << " x " << valB << " = " << res << "\r";break;
        case (4): res = valA / valB;cout << "\rResult : " << valA << " / " << valB << " = " << res << "\r";break;} */
return 0;}