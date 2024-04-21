#include<iostream>
using namespace std;int main(int argc, char* argv[]) {double dg[64];char aop[32];
//Algebra aop[0~7] dg[0~11 60~63]. 3 unknown value from 3 known equation.
std::cout << "First value : A\t";aop[0] = 'a';//std::cin >> aop[0];
    std::cout << "|\tSecond value : B\t";aop[1] = 'b';//std::cin >> aop[1];
    std::cout << "|\tThird value : X\r";aop[2] = 'x';//std::cin >> aop[2];
    std::cout << "First equation :";dg[0] = 80;//std::cin >> dg[0];22.10
    std::cout << "\t" <<  aop[0] << " + " << aop[1] << " = " << dg[0];
    std::cout << "\t|\tsecond eq :";dg[1] = 6;//std::cin >> dg[1];25.20
    std::cout << "\t" << aop[0] << " + " << aop[2] << " = " << dg[1];
    std::cout << "\t|\tthird eq :";dg[2] = 9;//std::cin >> dg[2];33.24
    std::cout << "\t" << aop[1] << " + " << aop[2] << " = " << dg[2] << std::endl;dg[6] = dg[1] - dg[2];    
    std::cout << "subtract EQ.III & EQ.II neutralize x = new EQ :\t" << aop[0] << " - " << aop[1] << " = " << dg[6] << std::endl;dg[8] = dg[0] + dg[6];
    std::cout << "add new EQ & EQ.I settle A:\r\t" << aop[0] << " + " << aop[1] << " = " << dg[0] << std::endl;dg[63] = 0;dg[62] = 0;dg[61] = 0;dg[60] = 0;aop[7] = '-';
    switch(dg[61]){//dg61 eq1 assignment. aop0 a dg63 record. aop1 b dg62 record. dg60 eq2. 
        case (0) :switch(aop[0]){case 'a' :dg[63] += 1;break;}
                        switch(aop[1]){case 'b' :dg[62] += 1;break;}break;}
    switch(dg[60]){
        case(0) :switch(aop[0]){case 'a' :dg[63] += 1;break;}
                        switch(aop[7]){case '-' :dg[62] -= 1;break;}break;}
    std::cout << "+\r" << "\t" << aop[0] << " " << aop[7] << " " << aop[1] << " = " << dg[6] << std::endl;
    std::cout << "--------------\r\t" << dg[63] << aop[0] << " = " << dg[8] << "\t|\t";dg[9] = dg[8]/dg[63];
    std::cout << "\t" << aop[0] << " = " << dg[9] << std::endl;
    std::cout << "insert A in EQ.I settle B :\t" << dg[9] << " + " << aop[1] << " = " << dg[0];dg[10] = dg[0] - dg[9];
    std::cout << "\t|\t" << aop[1] << " = " << dg[10] << std::endl;
    std::cout << "insert A in EQ.II settle X :\t" << dg[9] << " + " << aop[2] << " = " << dg[1];dg[11] = dg[1] - dg[9];
    std::cout << "\t|\t" << aop[2] << " = " << dg[11] << std::endl;
     //III.12 Circle calculation : calculating 9 circular retractable launcher 3 big 6 small total 3 segments.
double bca;
double slca;
double slcr;
double sca;
double scr;
slcr = 5 * 0.75;
slca = 3.14 * slcr * slcr;
scr = 5 * 0.25;
sca = 3.14 * scr * scr;
bca = 3.14 * 5 * 5;
std::cout << "\rBiggest circle area : " << bca;
std::cout << "\rSecond largest circle 75% : " << slca;
std::cout << "\rSmall circle 25% : " << sca << std::endl;
std::cout << "------------------------------------------------------------------------\r\t";
//------------------------------------------ Temporary 12 circle calculation --------------------------------
//END ---------------------3 unknown value from 3 known equation.--------------------
//Algebra aop[8~] dg[12~] 3 unknown value from 2 equation eqI Hei + CAT - Tur = 170  eqII Hei + Tur - CAT = 130 | eqI-II -2T-2c=40 .:t+c=-20 .:t=-20-c .:h+20+c=170 .:h+c=150 (entire c=subset h) .:h=150 | eqI+II 2h+2T=300 .:h+t=150 (whole t object is h subset) .:h=150
//if formula is trained easy to calculate. in order to have an exact value estimate calculation required
return 0;}