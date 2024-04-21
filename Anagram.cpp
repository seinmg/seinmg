#include <iostream>
using namespace std;int main(int argc, char* argv[]) {//variable declaration var nested loop var array
int num,tc;
double expo, base, sbase, res;
num = 26;expo = 19;tc = 0;
int lop[678];//loop unit
sbase = base + 1;res = 1;cout << "Exponent printing." << endl << num << " exponent 0 will be:1" << endl;
for(base = 0;base <= expo; base++){res *= num;cout << num << " exponent " << sbase << " will be:" << res << endl;sbase += 1;}
char scA[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
char gs[26];//array reassignment
int count=0;long long int co;int in=co;int val=0;int i;//example counter repeat & parameter
int ap[80];//maximum character appearance 8 char breakConsiderCase12
int rc[30];//immediate char repeat max 2 and 3 pair (e.g:2ch breakDiffChar 2ch BDC 2ch)BCcase8
    //LOL full abbreviation 3~19 character. stop after 8 repeated character appearance either side by side or individual and maximum 2 side by side repetiation. immediateRepeatCounter3max TotalRepetiationCharacterCount8max | have to code7character 42 to 19char 168loop
    for (i=0;i<26;i++){gs[i]=scA[i];count+=1;std::cout << gs[i];}co=0;
//for(lop[tc]= 0; lop[tc] < 26; lop[tc]++){for(lop[sl]=0; lop[sl] < 26; lop[sl]++){co += 1;std::cout << gs[lop[tc]] << gs[lop[sl]] << "\t";}}
//8 words
for(int lo = 0; lo < 8; lo++){
    for(int sl = 0; sl < 8; sl++){
        for(int tl = 0; tl < 8; tl++){
            for(int fl = 0; fl < 8; fl++){
                for(int fil = 0; fil < 8; fil++){
                    for(int sil = 0; sil < 8; sil++){
                        for(int sel = 0; sel < 8; sel++){
                            for(int ei = 0;ei < 8; ei++){co += 1;
        //cout << co << gs[lo] << gs[sl] << gs[tl] << gs[fl] << gs[fil] << gs[sil] << gs[sel] << gs[ei] << "\t";
}}}}}}}}
std::cout<<co;system ("exit");}