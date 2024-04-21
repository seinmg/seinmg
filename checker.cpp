#include <iostream>
using namespace std;
//0-1564002944-1564002944-15640029441-1564002944-1564002944-15640029445
int main(){
    cout << "Greeting. CHECKERBOARD VERSION 1.0\r";
    int cou;int ply1;int ply2;int p1a;int mob;int lop;int ibgd;int lop2;int count;int p2a;int incs;int wpn;int nuc;int vacc;
    bool p2;bool gre;bool vic;bool vaca;char* res;char* gref;char* grel;char* tab;char* nl;//table creation purpose

//loop variable
tab = " . ";vic = 0;wpn = 0;incs = 0;
//shared variable
char* p1A[1];char* p2A[1];char* vac[1];
vacc = 0;mob = 0;p2a = 0;ibgd = 0;nl = "\r";p1a = 0;res = "<>";ply2 = 0;lop = 1;lop2 = 64;cou = 0;count = 0;nuc = 0;incs = 0;//cell. loop variable
vac[mob] = "OO";p2A[mob] = "VV";p1A[mob] = "XX";char ho[8]; ho[0] = 'a'; ho[1] = 'b'; ho[2] = 'c'; ho[3] = 'd'; ho[4] = 'e'; ho[5] = 'f'; ho[6]='g';ho[7]='h'; char col[8]; col[0] = '1'; col[1] = '2'; col[2] = '3'; col[3] = '4'; col[4] = '5'; col[5] = '6'; col[6] = '7'; col[7] = '8';//table mobilising, info

//end shared variable
int Dlea;int Dlec;int Dlee;int Dleg;int Sb;int Sd;int Sf;int Sh;int Sa;int Sc;int Se;int Sg;int Fb;int Fd;int Ff;int Fh;int Fa;int Fc;int Fe;int Fg;int Tb;int Td;int Tf;int Th;int Ta;int Tc;int Te;int Tg;int Dlob;int Dlod;int Dlof;int Dloh;int dLea;int dLec;int dLee;int dLeg;int sB;int sD;int sF;int sH;int sA;int sC;int sE;int sG;int fB;int fD;int fF;int fH;int fA;int fC;int fE;int fG;int tB;int tD;int tF;int tH;int tA;int tC;int tE;int tG;int dLob;int dLod;int dLof;int dLoh;int det;int p1c;int p2c;int rinit;int dic;

int tc;/*turn count*/int rc;/*counting reset*/int pi;/*turn input*/int ncb;/*nested checkerboar*/int row[24];/*detection 00-5com6-11DirectionCalc*/ int wa;/*winning advertisment*/ int ri;/*row identifier*/

int ol; int il; ol = 0; il = 0;//loop detection

tc = 0; rc = 0;p1c = 12;p2c = 12;wa = 0;ri = 0;//beated.neutralize checker count
for (rinit = 0; rinit < 24;rinit ++){//initilising battlefield player and checker location identifier (initial grid)
    row[rinit] = 0;//cout << row[rinit];
}

for(mob = 0; mob < 2;mob++){//repeated checkerboard creation
//cout << mob << rc << "\r";
//checkerboard labeling
for(int rol = 0; rol < 8; rol++){
    cout << "  " << ho[rol] << "  ";}

cout << nl;
//starting one row program table creation. primary table reset consideration (manual stop and run. surrender reset 4checker)
for(lop = 1; lop <= lop2; lop++ ){ cou += 1;
    //initial tablet & placement
    switch(lop){ case (1): cout << col[7];p1a = 1;p2a = 0;//row 8 
                            switch(p1a){ case (1): Dlea = p1a;p2a = 0;dLea = p2a;vacc = 0;cout << p1A[nuc];break;
                                                  case (0): switch(p2a){ case (1): dLea = p2a;p1a = 0;Dlea = p1a;vacc = 0;cout << p2A[nuc];break;
                                                                                       case (0): vacc = 1;cout << vac[nuc];break; }    }break;                        
                        /*switch(p2a){case (1): dLea = p2a;p1a = 0;Dlea = p1a;vacc = 0;cout << p2A[nuc];break;case (0): switch(p1a){case (1): Dlea = p1a;p2a = 0;dLea = p2a;vacc = 0;cout << p1A[nuc];break;case (0): vacc = 1;cout << vac[nuc];break;}}break;*/
                        case (2): cout << res; break;/*a b. 8a*/ case (3): p1a = 1;p2a = 0;
                        switch(p1a){ case (1): Dlec = p1a;p2a = 0;dLec = p2a;vacc = 0;cout << p1A[nuc];break;
                                                case (0): switch(p2a){case (1): dLec = p2a;p1a = 0;Dlec = p1a;vacc = 0;cout << p2A[nuc];break;
                                                                                  case (0): vacc = 1;cout << vac[nuc];break; }    }break;
                        case (4): cout << res; break;/*c d. 8c*/ case (5): p1a = 1;p2a = 0;
                        switch(p1a){ case (1): Dlee = p1a;p2a = 0;dLee = p2a;vacc = 0;cout << p1A[nuc];break;
                                                case (0): switch(p2a){ case (1): dLee = p2a;p1a = 0;Dlee = p1a;vacc = 0;cout << p2A[nuc];break;
                                                                                   case (0): vacc = 1;cout << vac[nuc];break;}    }break;
                        case (6): cout << res; break;/*e f. 8e*/ case (7): p1a = 1;p2a = 0;
                        switch(p1a){ case (1): Dlee = p1a;p2a = 0;dLee = p2a;vacc = 0;cout << p1A[nuc];break;
                                               case (0): switch(p2a){case (1): dLee = p2a;p1a = 0;Dlee = p1a;vacc = 0;cout << p2A[nuc];break;
                                                                                   case (0): vacc = 1;cout << vac[nuc];break;}    }break;
                        case (8): cout << res << nl;break;/*g h. 8g*/ case (9): cout << col[6] << res;break; /*5 a*/ case (10): p1a = 1;p2a = 0;
                         switch(p1a){ case (1): Sb = p1a;p2a = 0;sB = p2a;vacc = 0;cout << p1A[nuc];break;//case 10 switch
                                                case (0): switch(p2a){ case (1): sB = p2a;p1a = 0;Sb = p1a;vacc = 0;cout << p2A[nuc];break;
                                                                                       case (0): vacc = 1;cout << vac[nuc];break;}    }break;
                        case (11): cout << res; break;/*b c. 7b*/ case (12): p1a = 1;p2a = 0;
                        switch(p1a){ case (1): Sd = p1a;p2a = 0;sD = p2a;vacc = 0;cout << p1A[nuc];break;
                                            case (0): switch(p2a){case (1): sD = p2a;p1a = 0;Sd = p1a;vacc = 0;cout << p2A[nuc];break;
                                                                               case (0): vacc = 1;cout << vac[nuc];break;}    }break;
                        case (13): cout << res; break;/*d e. 7d*/ case (14): p1a = 1;p2a = 0;
                        switch(p1a){case (1): Sf = p1a;p2a = 0;sF = p2a;vacc = 0;cout << p1A[nuc];break;
                                            case (0): switch(p2a){ case (1): sF = p2a;p1a = 0;Sf = p1a;vacc = 0;cout << p2A[nuc];break;
                                                                               case (0): vacc = 1;cout << vac[nuc];break;}    }break;
                        case (15): cout << res; break;/*f g. 7f*/ case (16): p1a = 1;p2a = 0;
                        switch(p1a){case (1): Sh = p1a;p2a = 0;sH = p2a;vacc = 0;cout << p1A[nuc];break;
                                            case (0): switch(p2a){ case (1): sH = p2a;p1a = 0;Sh = p1a;vacc = 0;cout << p2A[nuc];break;
                                                                               case (0): vacc = 1;cout << vac[nuc];break;}    }cout << nl;break;//h. 7h
                        case (17): cout << col[5];p1a = 1;p2a = 0;
                        switch(p1a){case (1): Sa = p1a;p2a = 0;sA = p2a;vacc = 0;cout << p1A[nuc];break;
                                            case (0): switch(p2a){case (1): sA = p2a;p1a = 0;Sa = p1a;vacc = 0; cout << p2A[nuc];break;
                                                                               case (0): vacc = 1; cout << vac[nuc];break;}    }break;
                        case (18): cout << res; break;/*6a*/ case (19): p1a = 1;p2a = 0;
                        switch(p1a){case (1): Sc = p1a;p2a = 0;sC = p2a;vacc = 0;cout << p1A[nuc];break;
                                            case (0): switch(p2a){case (1): sC = p2a;p1a = 0;Sc = p1a;vacc = 0;cout << p2A[nuc];break;
                                                                               case (0): vacc = 1;cout << vac[nuc];break;}    }break;
                        case (20): cout << res; break;/*6c*/ case (21): p1a = 1;p2a = 0;
                        switch(p1a){case (1): Se = p1a;p2a = 0;sE = p2a;vacc = 0;cout << p1A[nuc];break;
                                            case (0): switch(p2a){case (1): sE = p2a;p1a = 0;Se = p1a;vacc = 0;cout << p2A[nuc];break;       
                                                                               case (0): vacc = 1;cout << vac[nuc];break;}    }break;
                        case (22): cout << res; break;/*6e*/ case (23): p1a = 1;p2a = 0;
                        switch(p1a){ case (1): Sg = p1a;p2a = 0;sG = p2a;vacc = 0;cout << p1A[nuc];break;
                                            case (0): switch(p2a){case (1): sG = p2a;p1a = 0;Sg = p1a;vacc = 0;cout << p2A[nuc];break;
                                                                               case (0): vacc = 1;cout << vac[nuc];break;}    }break;
                        case (24): cout << res << nl;break;/*6g*/ case (25): cout << col[4] << res; break; case (26): p1a = 0;p2a = 0;
                        switch(p1a){case (1): Fb = p1a;p2a = 0;fB = p2a;vacc = 0;cout << p1A[nuc];break;//case 26 switch
                                            case (0): switch(p2a){case (1): fB = p2a;p1a = 0;Fb = p1a;vacc = 0; cout << p2A[nuc];break;
                                                                               case (0): vacc = 1;cout << vac[nuc];break;}    }break;
                        case (27): cout << res; break;/*5b*/ case (28): p1a = 0;p2a = 0;
                        switch(p1a){case (1): Fd = p1a;p2a = 0;fD = p2a;vacc = 0;cout << p1A[nuc];break;
                                            case (0): switch(p2a){case (1): fD = p2a;p1a = 0;Fd = p1a;vacc = 0;cout << p2A[nuc];break;
                                                                               case (0): vacc = 1;cout << vac[nuc];break;}    }break;
                        case (29): cout << res; break;/*5d*/ case (30): p1a = 0;p2a = 0;
                        switch(p1a){case (1): Ff = p1a;p2a = 0;fF = p2a;vacc = 0;cout << p1A[nuc];break;
                                            case (0): switch(p2a){case (1): fF = p2a;p1a = 0;Ff = p1a;vacc = 0;cout << p2A[nuc];break;
                                                                               case (0): vacc = 1;cout << vac[nuc];break;}    }break;
                        case (31): cout << res; break;/*5f*/ case (32): p1a = 0;p2a = 0;
                        switch(p1a){case (1): Fh = p1a;p2a = 0;fH = p2a;vacc = 0;cout << p1A[nuc]; break;
                                            case (0): switch(p2a){case (1): fH = p2a;p1a = 0;Fh = p1a;vacc = 0;cout << p2A[nuc];break;
                                                                               case (0): vacc = 1;cout << vac[nuc];break;}    }cout << nl;break;//5h
                        case (33): cout << col[3];p1a = 0;p2a = 0;//work in progress
                        switch(p1a){case (1): Fa = p1a;p2a = 0;fA = p2a;vacc = 0;cout << p1A[nuc];break;
                                            case (0): switch(p2a){case (1): fA = p2a;p1a = 0;Fa = p1a;vacc = 0;cout << p2A[nuc];break;
                                                                               case (0): vacc = 1;cout << vac[nuc];break;}    }break;
                        case (34): cout << res; break;/*4a*/ case (35): p1a = 0;p2a = 0;
                        switch(p1a){case (1): Fc = p1a;p2a = 0;fC = p2a;vacc = 0;cout << p1A[nuc];break;
                                            case (0): switch(p2a){case (1): fC = p2a;p1a = 0;Fc = p1a;vacc = 0;cout << p2A[nuc];break;
                                                                               case (0): vacc = 1;cout << vac[nuc];break;}    }break;
                        case (36): cout << res; break;/*4c*/ case (37): p1a = 0;p2a = 0;//wip
                        switch(p1a){case (1): Fe = p1a;p2a = 0;fE = p2a;vacc = 0;cout << p1A[nuc];break;
                                            case (0): switch(p2a){case (1): fE = p2a;p1a = 0;Fe = p1a;vacc = 0;cout << p2A[nuc];break;
                                                                               case (0): vacc = 1;cout << vac[nuc];break;}    }break;
                        case (38): cout << res; break;/*4e*/ case (39): p1a = 0;p2a = 0;//wip
                        switch(p1a){case (1): Fg = p1a;p2a = 0;fG = p2a;vacc = 0;cout << p1A[nuc];break;
                                            case (0): switch(p2a){case (1): fG = p2a;p1a = 0;Fg = p1a;vacc = 0;cout << p2A[nuc];break;
                                                                               case (0): vacc = 1;cout << vac[nuc];break;}    }break;
                        case (40): cout << res << nl;break;/*4g*/ case (41): cout << col[2] << res;break; case (42): p1a = 0;p2a = 1;
                        switch(p1a){case (1): Tb = p1a;p2a = 0;tB = p2a;vacc = 0;cout << p1A[nuc];break;//case 42 switch
                                            case (0): switch(p2a){case (1): tB = p2a;p1a = 0;Tb = p1a;vacc = 0;cout << p2A[nuc];break;
                                                                               case (0): vacc = 1;cout << vac[nuc];break;}    }break;//3b
                        case (43): cout << res ;break;/*4g*/ case (44): p1a = 0;p2a = 1;
                        switch(p1a){case (1): Td = p1a;p2a = 0;tD = p2a;vacc = 0;cout << p1A[nuc];break;
                                            case (0): switch(p2a){case (1): tD = p2a;p1a = 0;Td = p1a;vacc = 0;cout << p2A[nuc];break;
                                                                               case (0): vacc = 1;cout << vac[nuc];break;}    }break;//3d
                        case (45): cout << res;break; case (46): p1a = 0;p2a = 1;
                        switch(p1a){case (1): Tf = p1a;p2a = 0;tF = p2a;vacc = 0;cout << p1A[nuc];break;
                                            case (0): switch(p2a){case (1): tF = p2a;p1a = 0;Tf = p1a;vacc = 0;cout << p2A[nuc];break;
                                                                               case (0): vacc = 1;cout << vac[nuc];break;}    }break;//3f
                        case (47): cout << res;break; case (48): p1a = 0;p2a = 1;
                        switch(p1a){case (1): Th = p1a;p2a = 0;tH = p2a;vacc = 0;cout << p1A[nuc];break;
                                            case (0): switch(p2a){case (1): tH = p2a;p1a = 0;Th = p1a;vacc = 0;cout << p2A[nuc]; break;
                                                                               case (0): vacc = 1;cout << vac[nuc];break;}    }cout << nl;break;//3h
                        case (49): cout << col[1]; p1a = 0;p2a = 1;
                        switch(p1a){case (1): Ta = p1a;p2a = 0;tA = p2a;vacc = 0;cout << p1A[nuc];break;
                                            case (0): switch(p2a){case (1): tA = p2a;p1a = 0;Ta = p1a;vacc = 0;cout << p2A[nuc];break;
                                                                               case (0): vacc = 1;cout << vac[nuc];break;}    }break;
                        case (50): cout << res;break;/*2a*/ case (51): p1a = 0;p2a = 1;
                        switch(p1a){case (1): Tc = p1a;p2a = 0;tC = p2a;vacc = 0;cout << p1A[nuc];break;
                                            case (0): switch(p2a){case (1): tC = p2a;p1a = 0;Tc = p1a;vacc = 0;cout << p2A[nuc];break;
                                                                               case (0): vacc = 1;cout << vac[nuc];break;}    }break;
                        case (52): cout << res;break;/*2c*/ case (53): p1a = 0;p2a = 1;
                        switch(p1a){case (1): Te = p1a;p2a = 0;tE = p2a;vacc = 0;cout << p1A[nuc];break;
                                            case (0): switch(p2a){case (1): tE = p2a;p1a = 0;Te = p1a;vacc = 0;cout << p2A[nuc];break;
                                                                               case (0): vacc = 1;cout << vac[nuc];break;}    }break;
                        case (54): cout << res;break;/*2e*/ case (55): p1a = 0;p2a = 1;
                        switch(p1a){case (1): Tg = p1a;p2a = 0;tG = p2a;vacc = 0;cout << p1A[nuc];break;
                                            case (0): switch(p2a){case (1): tG = p2a;p1a = 0;Tg = p1a;vacc = 0;cout << p2A[nuc];break;
                                                                               case (0): vacc = 1;cout << vac[nuc];break;}    }break;
                        case (56): cout << res;cout << nl;break;/*2g*/ case (57): cout << col[0] << res;break; case (58): p1a = 0;p2a = 1;
                        switch(p1a){ case (1): Dlob = p1a;
                                                           p2a = 0;
                                                           dLob = p2a;
                                                           vacc = 0;
                                                           cout << p1A[nuc];
                                                           break;
                                            case (0): switch(p2a){
                                                                                case (1): dLob = p2a;
                                                                                               p1a = 0;
                                                                                               Dlob = p1a;
                                                                                               vacc = 0;
                                                                                               cout << p2A[nuc];
                                                                                               break;
                                                                                case (0): vacc = 1;
                                                                                                cout << vac[nuc];
                                                                                               break;}    }break;//1b
                        case (59): cout << res;break; case (60): p1a = 0;p2a = 1;
                        switch(p1a){ case (1): Dlod = p1a; p2a = 0; dLod = p2a; vacc = 0; cout << p1A[nuc]; break;
                                            case (0): switch(p2a){ case (1): dLod = p2a; p1a = 0; Dlod = p1a;vacc = 0; cout << p2A[nuc]; break;
                                                                               case (0): vacc = 1; cout << vac[nuc]; break;}    }break;//1d
                        case (61): cout << res;break; case (62): p1a = 0;p2a = 1;
                        switch(p1a){ case (1): Dlof = p1a; p2a = 0; dLof = p2a; vacc = 0; cout << p1A[nuc]; break;
                                            case (0): switch(p2a){ case (1): dLof = p2a; p1a = 0; Dlof = p1a; vacc = 0; cout << p2A[nuc]; break;       
                                                                               case (0): vacc = 1; cout << vac[nuc]; break;}    }break;//1f
                        case (63): cout << res;break; case (64): p1a = 0;p2a = 1;
                        switch(p1a){ case (1): Dloh = p1a; p2a = 0; dLoh = p2a; vacc = 0; cout << p1A[nuc]; break;
                                            case (0): switch(p2a){ case (1): dLoh = p2a; p1a = 0; Dloh = p1a; vacc = 0; cout << p2A[nuc]; break;
                                                                               case (0): vacc = 1; cout << vac[nuc]; break;}    }cout << nl;break;//1h
                        default:break;}/*table*/}//end table creation
//------------------------------------------------------- end front line checker detection ------------------------------------------------------
                                    //turn based. checkerboard can construct in various style
                                    cout << "Entering checker board turn selection. "; pi = 1; incs = pi;  
                                    switch(incs){ case (1): tc += 1;
                                    //technique 
                                            //play initiation. up down direction front row detection
                                             switch(Ta){case (1): row[0] = 1; cout << " 2A ";
                                             case (0): switch(Tc){case (1): row[1] = 1; cout << " 2C ";
                                                         case(0): switch(Te){case (1): row[2] = 1;cout << " 2E ";
                                                                        case (0): switch(Tg){case (1): row[3] = 1;cout << " 2G ";
                                                                                        case (0): switch(row[0]){case(1): ri += 1;cout << " ROW 2\r";break;
                                                                                                            case (0): switch(row[1]){case(1): ri += 1;cout << " ROW 2\r";break;
                                                                                                            case (0): switch(row[2]){case(1): ri += 1;cout << " ROW 2\r";break;
                                                                                                        case (0): switch(row[3]){case(1): ri += 1;cout << " ROW 2\r";break;} ;} ;} ;};    
                                                                                                            }; }; }; };
                                            switch(ri){case (0): switch(Tb){case (1): row[4] = 1;cout << " 3B ";//row identifing marker
                                                                                                            case (0): switch(Td){case (1): row[5] = 1;cout << " 3D ";
                                                                                                                                    case (0): switch(Tf){case (1): row[6] = 1;cout << " 3F ";
                                                                                                                                case (0): switch(Th){case (1):row[7] = 1;cout << " 3H ";
                                                                                                                    case (0): switch(row[4]){case(1): ri += 1; cout << " ROW 3\r";break;
                                                                                                                    case (0): switch(row[5]){case(1): ri += 1; cout << " ROW 3\r";break;
                                                                                                                    case (0): switch(row[6]){case(1): ri += 1;cout << " ROW 3\r";break;
                                                                                                    case (0): switch(row[7]){case(1): ri += 1;cout << " ROW 3\r";break;} ;} ;} ;}; 
                                                                                                    }; }; }; }; break;
                                                                case(1): switch(Tb){case (1): row[4] = 1;cout << " 3B ";
                                                                                                            case (0): switch(Td){case (1): row[5] = 1;cout << " 3D ";
                                                                                                                                    case (0): switch(Tf){case (1): row[6] = 1;cout << " 3F ";
                                                                                                                                case (0): switch(Th){case (1):row[7] = 1;cout << " 3H ";
                                                                                                                    case (0): switch(row[4]){case(1): ri += 1; cout << " ROW 3\r";break;
                                                                                                                    case (0): switch(row[5]){case(1): ri += 1; cout << " ROW 3\r";break;
                                                                                                                    case (0): switch(row[6]){case(1): ri += 1;cout << " ROW 3\r";break;
                                                                                                        case (0): switch(row[7]){case(1): ri += 1;cout << " ROW 3\r";break;} ;} ;} ;};
                                                                                                    }; }; }; }; break;
                                                                default: cout << "";break;};
                                              switch(ri){case (2): break;
                                                              case (0): switch(Fa){case (1): row[8] = 1;cout << " 4A ";
                                                                                case (0): switch(Fc){case (1): row[9] = 1; cout << " 4C ";
                                                                                                    case (0): switch(Fe){case (1): row[10] = 1;cout << " 4E ";
                                                                                                                case (0): switch(Fg){case (1): row[11] = 1;cout << " 4G ";
                                                                                                                case (0): switch(row[8]){case(1): ri += 1; cout << " ROW 4\r";break;
                                                                                                                    case (0): switch(row[9]){case(1): ri += 1; cout << " ROW 4\r";break;
                                                                                                                    case (0): switch(row[10]){case(1): ri += 1;cout << " ROW 4\r";break;
                                                                                                    case (0): switch(row[11]){case(1): ri += 1;cout << " ROW 4\r";break;}; }; }; };
                                                                                                    }; }; }; }; break;
                                                            case (1): switch(Fa){case (1): row[8] = 1;cout << " 4A ";
                                                                                case (0): switch(Fc){case (1): row[9] = 1; cout << " 4C ";
                                                                                                    case (0): switch(Fe){case (1): row[10] = 1;cout << " 4E ";
                                                                                                                case (0): switch(Fg){case (1): row[11] = 1;cout << " 4G ";
                                                                                                                case (0): switch(row[8]){case(1): ri += 1; cout << " ROW 4\r";break;
                                                                                                                    case (0): switch(row[9]){case(1): ri += 1; cout << " ROW 4\r";break;
                                                                                                                    case (0): switch(row[10]){case(1): ri += 1;cout << " ROW 4\r";break;
                                                                                                    case (0): switch(row[11]){case(1): ri += 1;cout << " ROW 4\r";break;}; }; }; };
                                                                                                    }; }; }; }; break;};
                                                switch(ri){case (2): break;
                                                                case (0): switch(Fb){case (1): row[12] = 1;cout << " 5B ";
                                                                                case (0): switch(Fd){case (1): row[13] = 1;cout << " 5D ";
                                                                                                case (0): switch(Ff){case (1): row[14] = 1;cout << " 5F ";
                                                                                                                case (0): switch(Fh){case (1): row[15] = 1;cout << " 5H ";
                                                                                                                     case (0): switch(row[12]){case(1): ri += 1; cout << " ROW 5\r";break;
                                                                                                                    case (0): switch(row[13]){case(1): ri += 1; cout << " ROW 5\r";break;
                                                                                                                    case (0): switch(row[14]){case(1): ri += 1;cout << " ROW 5\r";break;
                                                                                                    case (0): switch(row[15]){case(1): ri += 1;cout << " ROW 5\r";break;}; }; }; };
                                                                                                    }; }; }; }; break;
                                                                case (1): switch(Fb){case (1): row[12] = 1;cout << " 5B ";
                                                                                case (0): switch(Fd){case (1): row[13] = 1;cout << " 5D ";
                                                                                                case (0): switch(Ff){case (1): row[14] = 1;cout << " 5F ";
                                                                                                                case (0): switch(Fh){case (1): row[15] = 1;cout << " 5H ";
                                                                                                                     case (0): switch(row[12]){case(1): ri += 1; cout << " ROW 5\r";break;
                                                                                                                    case (0): switch(row[13]){case(1): ri += 1; cout << " ROW 5\r";break;
                                                                                                                    case (0): switch(row[14]){case(1): ri += 1;cout << " ROW 5\r";break;
                                                                                                    case (0): switch(row[15]){case(1): ri += 1;cout << " ROW 5\r";break;}; }; }; };
                                                                                                    }; }; }; }; break;};//remaining should construct#
                                        /*#TEMPORARY DEACTIVATE. continue this stage for remaining checker count and surrender notification.
                                                switch(ri){case(2): break;
                                                                case(0): switch(Sa){case (1): row[16] = 1;cout << " 6A "; 
                                                                                case (0): switch(Sc){case (1): row[17] = 1;cout << "  6C ";//break;}
                                                                                                case(0): switch(Se){case (1): row[18] = 1;cout << " 6E ";//break;
                                                                                                                case (0): switch(Sg){case (1): row[19] = 1;cout << " 6G ";break;
                                                                                                                            case (0): switch(Fh){case (1): row[16] = 1;cout << " 5H ";break;
                                                                                                                     case (0): switch(row[17]){case(1): ri += 1; cout << " ROW 5\r";break;
                                                                                                                    case (0): switch(row[18]){case(1): ri += 1; cout << " ROW 5\r";break;
                                                                                                    case (0): switch(row[19]){case(1): ri += 1;cout << " ROW 5\r";break;}; }; }; };
                                case (0): switch(Sb){case (1): cout << " 7B ";//break;
                                                case (0): switch(Sd){case (1): cout << " 7D ";//break; 
                                                                case (0): switch(Sf){case (1): cout << " 7F ";//break; 
                                                                                case (0): switch(Sh){case (1): cout << " 7H "; break; }; }; }; }; }; }; }; };         END T D */
                                //DIRECTION CHECK
                                //default even will be right. then =odd will be left.P1.location1.17.33.49Left16.32.48.right P2L.49.33.17right64.48.32.16left. when there is 2 opportunity notifier. it will reset upon any neutralisation. max reset capped to twelve. total count+1+1+1.... /2 if 0 right
                                            dic = 0; dic = dic - 9; wa = 0; mob = 1;
                                    //}
//tcp/ip socket programming. html cgi to consider multi player
                                    //switch(Sg){case (1): switch(Fh){case (0): cout << "5h vacant\r";} cout << tc;
                                                        //switch(Ff){case (0): cout << "5f vacant\r";}    break;}
                                                        //switch(dic){case (0): cout << "headingright";break; default: cout << "diagonal-left";break;}
//case (1): mob = 1;cout << "Player checkerboard\r"; cout << "Turn selecting"; cin >> pi; incs = pi; tc += 1; cout << tc;break;
                                    //reset after play
                                            switch(wa){case(1): cout << "advertise winning palayer and reset\r"; mob = 1; /*cin >> ri;*/ break;}
                                            break;//case break
                                            default: cout << "surrender and reset.\r"; rc += 1; tc = 0; cout << rc; break;}
                                }//end repeated table
/*                                 //1.    3.    5.    7        r8
                                    //.  10. 12.   14.    16 r7
                                    //17. 19.  21.   23      r6
                                    //    26. 28.  30.   32  r5
                                    //33.  35.  37.  39      r4
                                    //    42.  44.  46. 48.  r3
                                    //49.  51.   53. 55      r2
                                    //    58.  60.  62. 64.  r1
                                    //1.two immediate diagonal avaibility check for both player 2.when there's an obstruction. neutralised forward/charge opportunity check.maximum 3.overtake leap/neutralising. 
                                    //---repeated table || turn indicator. attack notifier. #frontline checker r2 to r7. total < 2 print row. total 1 > row record continue checking till next checker > when 2 found advertised location and exit checking. ---row 1 and row 8 need to code exchange and vacancy printing. strategy:one/two front & 3 reinforcement.1st feed can be avoided. 2nd consecutive feed. must attack/neutralised either one | another.
//---initial mobilising:=frontline battalion check. identify battalion inside enemy territory. 1stOR2nd neutralised priority. negativeLeft 0right. mobilising avaibility count.player count) scanned screen width 10 digit, potrait split screen. consider no surrender at 4 to 8mobilising. defence line bool will activate.3rd mobilising entire grid bool except last defense line will activate.2 player steps preparation, (initializing player)
//2way table creation. afew way checker creation.based on table several way to mobilise.status determination: victory can be determined` when one battalion reach to designated opponent line. forecast and route prediction.attack route identification-green direction 48position strikes. top to bottom / top down approach.
//3B -> 4a & 4c.(2.1->3.0|3.2) 3D -> 4c & 4e.(2.3->3.2|3.4) 3F -> 4e & 4g.(2.5->3.4|3.6) 3H -> 4g.(2.7->3.6)
//6A->5b(5.0->4.1) 6C-> 5b & 5d(5.2->4.1 & 4.3) 6E->5d & 5f(5.4->4.3&4.5) 6G->5f & 5h(5.6->4.5&4.7) breached enemy notifier..
//8a 3enemy neutralising;1.Ea->Sc->Ta->Tc.N.7b.5b.3b.     2.Ea->Sc->Fe->Tc Neu:7b.5d.3d    3.Ea->Sc->Fe->Tg Neu:7b.5d.3f
//8c 3e.dlEc->Sa->Fc->Ta.N:7b.5b3b.    2.dlec->Sa->Fc->Te.N:7b.5d.3d.    3.dlec->Se->Fc->Ta.N:7d.5d.3b.    4.dlec->Se->Fc->Te.N:7d.5d.3d.    5.dlEc->Sa->Fg->Te.N:7d.5f.3f%
//8e 3e.dlee->sc->fa->tc.N:7d.5b.3b.    2.dlee->sc->fe->tc.N:7d.5d.3d.    3.dlee->sc->fe->tg.N:7d.5d.3f.    4.dlee->sg->fe->tc.N:7f.5f.3d.    5.dlee->sg->fe->tg.N:7f.5f.3f.
//8g 3e.dleg->se->fc->ta.Strike:7f.5d.3b.    2.dleg->se->fc->te.S:7f.5d.3d.    3.dleg->se->fg->te.S:7f.5f.3f.#
//7b 3e.7b->5d->3f->1d.S:7c.4e.2e    7b.  ->5d->3b->1d.S:6c.4c.2c    7b. ->5d->3f->1h.S:6c.4e.2g
//7d 3e.7d->5b->3d->1b.S:6c.4c.2c    7d. ->5b->3d->1f.S:6c.4c.2e    7d. ->5f->3d->1b.S:6e.4e.2c    7d. ->5f->3d->1f.S:6e.4e.2e    7d. ->5f->3h->1f.S:6e.4g.2g
//7f 3e.7f->5d->3b->1d.S:6e.4c.2c    7f. ->5d->3f->1d.S:6e.4c.2e    7f. ->5d->3f->1h.S:6e.4c.2g    7f. ->5h->3f->1h.S:6g.4g.2g    7f. ->5h->3f->1d.S:6e.4c.2g
//7h 3e.7h. ->5f->3d->1b.S:6g.4e.2c    7h. ->5f->3d->1f.S:6g.4e.2e    7h. ->5f->3h->1f.S:6g.4e.2c
//2e.N row 8 to 5    1e.N row 8 to 3    awaiting user input table player count. vaccancy count 10 above. vic check. when vic 1 check line || p#. p1 direction diagonal down. p2 direction diagonal up= #ifdef _WIN32//#include <Windows.h>//#else//#include <unistd.h>//#endif//double hc[90], c[90];//table number approximate 90 tabs, loop variable //hoc = 5000; tcm = 1;//hoc & column count within table //owc = 0; twc = 0;////ibgd = 8;//init grid//pli = 7;winning chances mobilising%
----------------------------- end excess code --------------------------------------- */
return 0;
}
