#include <iostream>
#include <cstring>
using namespace std;

int main () {
char string[] = "lrvmnir bpr sumvbwvr jx bpr lmiwv yjeryrkbi jx qmbm wi bpr xjvni mkd ymibrut jx irhx wi bpr riirkvr jx ymbinlmtmipw utn qmumbr dj w ipmhh but bj rhnvwdmbr bpr yjeryrkbi jx bpr qmbm mvvjudwko bj yt wkbrusurbmbwjk lmird jk xjubt trmui jx ibndt wb wi kjb mk rmit bmiq bj rashmwk rmvp yjeryrkb mkd wbi iwokwxwvmkvr mkd ijyr ynib urymwk nkrashmwkrd bj ower m vjyshrbr rashmkmbwjk jkr cjnhd pmer bj lr fnmhwxwrd mkd wkiswurd bj invp mk rabrkb bpmb pr vjnhd urmvp bpr ibmbr jx rkhwopbrkrd ywkd vmsmlhr jx urvjokwgwko ijnkdhrii ijnkd mkd ipmsrhrii ipmsr w dj kjb drry ytirhx bpr xwkmh mnbpjuwbt lnb yt rasruwrkvr cwbp qmbm pmi hrxb kj djnlb bpmb bpr xjhhjcwko wi bpr sujsru msshwvmbwjk mkd wkbrusurbmbwjk w jxxru yt bprjuwri wk bpr pjsr bpmb bpr riirkvr jx jqwkmcmk qmumbr cwhh urymwk wkbmvb";
int i,j;
const int length= strlen(string);
char *temp = new char[length];

strcpy(temp, string);
int *freq = new int[length];

for(int i = 0; i<strlen(temp); i++){
freq[i] = 1;
for(j=i+1;j<strlen(temp);j++){
if(temp[i]==temp[j]){
freq[i]++;

temp[j] = '0';
    }
  }
}
cout << "Charcater frequency: " << endl;
for(int i = 0; i <length;i++)
{
  if(temp[i] !=' ' && temp[i] !='0')
  cout << temp[i] << " " << freq[i] << endl;

}
char keyDecrypt[] = { 'm', 'l', 'v', 'd', 'r', 'x', 'o', 'p', 'w', 'f', 'q', 'h', 'y', 'k', 'j', 's', 'z', 'u', 'i', 'b', 'n', 'e', 'c',  'a', 't', 'g',' '};
char alphabets[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',  'y', 'z',' '};

for(int i=0; i<strlen(string);i++)
{
  for(int j = 0; j<strlen(keyDecrypt); j++) {
if(string[i]==keyDecrypt[j])
  {
  string[i]=alphabets[j];
  break;
  }
}
}
cout <<"Decrypted Text:\n\n " <<  string << endl;

return 0;
}
