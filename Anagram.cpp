//Note:The template file will be copied to a new file. When you change the code of the template file you can create new file with this base code. 
#include <iostream>
using namespace std;int main(int argc, char* argv[]) {//variable declaration var nested loop var array
int num,tc;
double expo, base, sbase, res;
num = 26;expo = 19;tc = 0;
long long int lop[678];//loop unit
sbase = base + 1;res = 1;cout << "Exponent printing." << endl << num << " exponent 0 will be:1" << endl;
for(base = 0;base <= expo; base++){res *= num;cout << num << " exponent " << sbase << " will be:" << res << endl;sbase += 1;}
char scA[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
char gs[26];//array reassignment
int count=0;long long int co;int in=co;int val=0;int i;//example counter repeat & parameter
int ap[80];//maximum character appearance 8 char breakConsiderCase12
int rc[30];//immediate char repeat max 2 and 3 pair (e.g:2ch breakDiffChar 2ch BDC 2ch)BCcase8
    //LOL full abbreviation 3~19 character. stop after 5 repeated character appearance either side by side or individual and maximum 2 side by side repetiation. immediateRepeatCounter2max TotalRepetiationCharacterCount5max. 3char 1immediate repeat and skip. char counter loop (5 char counted notify continue) then charloop
    for (i=0;i<26;i++){gs[i]=scA[i];count+=1;std::cout << gs[i];}co=0;
/*8 words
for(int lo = 0; lo < 26; lo++){
    for(int sl = 0; sl < 26; sl++){
        for(int tl = 0; tl < 26; tl++){
            for(int fl = 0; fl < 26; fl++){
                for(int fil = 0; fil < 26; fil++){
                    for(int sil = 0; sil < 26; sil++){
                        for(int sel = 0; sel < 26; sel++){
                            for(int ei = 0;ei < 26; ei++){co += 1;
        //cout << co << gs[lo] << gs[sl] << gs[tl] << gs[fl] << gs[fil] << gs[sil] << gs[sel] << gs[ei] << "\t";
}}}}}}}}*/
lop[500]=0;//alpha A
lop[600]=0;//total counter
for(lop[0]=0;lop[0]<26;lop[0]++){
    switch(lop[0]){case(0): //a x
    for(lop[1]=0;lop[1]<26;lop[1]++){lop[600]+=1;}break;
    case(1): //bx
    for(lop[1]=0;lop[1]<26;lop[1]++){lop[600]+=1;}break;
    case(2): //cx
    for(lop[1]=0;lop[1]<26;lop[1]++){lop[600]+=1;}break;
    case(3): //dx
    for(lop[1]=0;lop[1]<26;lop[1]++){lop[600]+=1;}break;
    case(4): //ex
    for(lop[1]=0;lop[1]<26;lop[1]++){lop[600]+=1;}break;
    case(5): //fx
    for(lop[1]=0;lop[1]<26;lop[1]++){lop[600]+=1;}break;
    case(6): //gx
    for(lop[1]=0;lop[1]<26;lop[1]++){lop[600]+=1;}break;
    case(7): //hx
    for(lop[1]=0;lop[1]<26;lop[1]++){lop[600]+=1;}break;
    case(8): //ix
    for(lop[1]=0;lop[1]<26;lop[1]++){std::cout<<gs[lop[0]]<<gs[lop[1]];lop[600]+=1;}break;
    case(9): //jx
    for(lop[1]=0;lop[1]<26;lop[1]++){lop[600]+=1;}break;
    case(10): //kx
    for(lop[1]=0;lop[1]<26;lop[1]++){lop[600]+=1;}break;
    case(11): //lx
    for(lop[1]=0;lop[1]<26;lop[1]++){lop[600]+=1;}break;
    case(12): //mx
    for(lop[1]=0;lop[1]<26;lop[1]++){lop[600]+=1;}break;
    case(13): //nx
    for(lop[1]=0;lop[1]<26;lop[1]++){lop[600]+=1;}break;
    case(14): //ox
    for(lop[1]=0;lop[1]<26;lop[1]++){lop[600]+=1;}break;
    case(15): //px
    for(lop[1]=0;lop[1]<26;lop[1]++){lop[600]+=1;}break;
    case(16): //qx
    for(lop[1]=0;lop[1]<26;lop[1]++){lop[600]+=1;}break;
    case(17): //rx
    for(lop[1]=0;lop[1]<26;lop[1]++){lop[600]+=1;}break;
    case(18): //sx
    for(lop[1]=0;lop[1]<26;lop[1]++){lop[600]+=1;}break;
    case(19): //tx
    for(lop[1]=0;lop[1]<26;lop[1]++){lop[600]+=1;}break;
    case(20): //ux
    for(lop[1]=0;lop[1]<26;lop[1]++){lop[600]+=1;}break;
    case(21): //vx
    for(lop[1]=0;lop[1]<26;lop[1]++){lop[600]+=1;}break;
    case(22): //wx
    for(lop[1]=0;lop[1]<26;lop[1]++){lop[600]+=1;}break;
    case(23): //Xx
    for(lop[1]=0;lop[1]<26;lop[1]++){lop[600]+=1;}break;
    case(24): //yx
    for(lop[1]=0;lop[1]<26;lop[1]++){lop[600]+=1;}break;
    case(25): //zx
    for(lop[1]=0;lop[1]<26;lop[1]++){lop[600]+=1;}break;}}
std::cout/*<<co<<"\t"*/<<lop[600];system ("exit");}
