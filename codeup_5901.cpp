#include<cstdio>
#include<cstring>
const int maxn = 256;

//判断字符串str是否是回文串
bool judge(char str[]){
    int len = strlen(str); //回文串
    for(int i = 0;i<len/2;++i){//i枚举字符串的前一半
        if(str[i]!=str[len-1-i]){
          return false; 
        }
    }
    return true;
}

int main(){
  char str[maxn];
  
  while(get(str)){//输入字符串
      bool flag = judge(str); //判断字符串str是否是回文串
      if(flag==true){
        printf("YES\n");//输出YES
      }else{
        printf("NO\n"); //输出NO
      }
  }
  return 0;
}
