#include<iostream>
using namespace std;
int main(int argc, char* argv[]){
//basic c++ 
/* similar two Cards will be there, for example is is 2233*/
cout << "greed is good.!\r";

int ace[13];//ace priority 1
int hrt[13];//heart p2
int did[14];//diamond p3
int clu[13];//club p4
int deck[52];//cards amount in deck
int acp[13];//ace prioirty assignment
int hep[13];//heart prioirty assignment
int dip[13];//diamond priority assignment
int sf;int c;int lo;lo = 1;c=13;
ace[0] = 1;ace[1] = 2;ace[2] = 3;ace[3] = 4;ace[4] = 5;ace[5] = 6;ace[6] = 7;ace[7] = 8;ace[8] = 9;ace[9] = 10;ace[10] = 11;ace[11] = 12;ace[12] = 13;//initialised ace
hrt[0] = 1;hrt[1] = 2;hrt[2] = 3;hrt[3] = 4;hrt[4] = 5;hrt[5] = 6;hrt[6] = 7;hrt[7] = 8;hrt[8] = 9;hrt[9] = 10;hrt[10] = 11;hrt[11] = 12;hrt[12] = 13;//initialised heart
//initialised diamond did[0] = 1;did[1] = 2;did[2] = 3;did[3] = 4;did[4] = 5;did[5] = 6;did[6] = 7;did[7] = 8;did[8] = 9;did[9] = 10;did[10] = 11;did[11] = 12;did[12] = 13;

//advance c++
for(did[13] = 0; did[13] < c; did[13]++){//loop initializing
    did[did[13]] = lo ; lo += 1;//cout << did[did[13]];
}

clu[0] = 1;clu[1] = 2;clu[2] = 3;clu[3] = 4;clu[4] = 5;clu[5] = 6;clu[6] = 7;clu[7] = 8;clu[8] = 9;clu[9] = 10;clu[10] = 11;clu[11] = 12;clu[12] = 13;//initialised club
/*int lp,lop; lop = 1;for(lp = 0; lp < 13; lp++){switch(ace[lp]){case (lop): acp[lp] = 4;}lop += 1;}*///cout << ace[3] << "&" << acp[3];
switch(ace[0]){
    case (1): acp[0] = 4;
    }
switch(ace[1]){case (2): acp[1] = 4;}switch(ace[2]){case (3) : acp[2] = 4;}switch(ace[3]){case (4) : acp[3] = 4;}switch(ace[4]){case (5) : acp[4] = 4;}switch(ace[5]){case (6) : acp[5] = 4;}switch(ace[6]){case (7) : acp[6] = 4;}switch(ace[7]){case (8) : acp[7] = 4;}switch(ace[8]){case (9) : acp[8] = 4;}switch(ace[9]){case (10) : acp[9] = 4;}switch(ace[10]){case (11) : acp[10] = 4;}switch(ace[11]){case (12) : acp[11] = 4;}switch(ace[12]){case (13) : acp[12] = 4;}

switch(hrt[0]){case (1): hep[0] = 3;}switch(hrt[1]){case (2): hep[1] = 3;}switch(hrt[2]){case (3) : hep[2] = 3;}switch(hrt[3]){case (4) : hep[3] = 3;}switch(hrt[4]){case (5) : hep[4] = 3;}switch(hrt[5]){case (6) : hep[5] = 3;}switch(hrt[6]){case (7) : hep[6] = 3;}switch(hrt[7]){case (8) : hep[7] = 3;}switch(hrt[8]){case (9) : hep[8] = 3;}switch(hrt[9]){case (10) : hep[9] = 3;}switch(hrt[10]){case (11) : hep[10] = 3;}switch(hrt[11]){case (12) : hep[11] = 3;}switch(hrt[12]){case (13) : hep[12] = 3;}

switch(did[0]){case (1): dip[0] = 2;}switch(did[1]){case (2): dip[1] = 2;}switch(did[2]){case (3) : dip[2] = 2;}switch(did[3]){case (4) : dip[3] = 2;}switch(did[4]){case (5) : dip[4] = 2;}switch(did[5]){case (6) : dip[5] = 2;}switch(did[6]){case (7) : dip[6] = 2;}switch(did[7]){case (8) : dip[7] = 2;}switch(did[8]){case (9) : dip[8] = 2;}switch(did[9]){case (10) : dip[9] = 2;}switch(did[10]){case (11) : dip[10] = 2;}switch(did[11]){case (12) : dip[11] = 2;}switch(did[12]){case (13) : dip[12] = 2;}

sf = 1212;
/*((deck*3)+[1 || 2 || 4 || 7 || 9 ])/[3 || 5] = m1&2 ((p1c*p2c)+1)/2;*/
//random mixing. shuffle. deck splitting&reposition. spreading 12 player
/*char scA[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
char gs[8];
gs[0] = scA[0];
gs[1] = scA[17];
gs[2] = scA[3];
gs[3] = scA[18];
gs[4] = scA[7];
gs[5] = scA[4];
gs[6] = scA[12];
gs[7] = scA[24];
int lo, sl, tl, fl, fil, sil, sel, ei, co, reqn, loop[9];
//a r d s h y m e, 0, 17, 3, 18, 7, 24, 12, 4 | 2, 3, 4, 5, 6, 7, 8 combination
    for(lo = 0; lo < 8; lo++){
        for(sl = 0; sl < 8; sl++){
        co += 1;
        cout << co << gs[lo] << gs[sl] << "\r";}}*/
return 0;
}