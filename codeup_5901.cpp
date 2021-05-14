#include<cstdio>
#include<cstring>
const int maxn = 256;

//判断字符串str是否是回文串
bool judge(char str[]){
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
