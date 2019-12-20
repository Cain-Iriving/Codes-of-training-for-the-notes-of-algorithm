#include<cstdio>
struct person{
	char name[10]; //姓名
	int yy,mm,dd; //日期 
}oldest,youngest,left,right,temp;
//oldest与youngest存放最年长的与最年轻的人，left与right存放合法日期的左右边界

bool LessEqu(person a,person b){//如果a的日期小于等于b,返回true
	if(a.yy!=b.yy) return a.yy<=b.yy;
	else if(a.mm!=b.mm) return a.mm<=b.mm;
	else return a.dd<=b.dd; 
} 

bool MoreEqu(person a,person b){//如果a的日期大于等于b，返回true
	if(a.yy!=b.yy) return a.yy>=b.yy;
	else if(a.mm!=b.mm) return a.mm>=b.mm;
	else return a.dd>=b.dd; 
}

//youngest与left为1814年9月6日，oldest与right为2014年9月6日
void int(){
	youngest.yy = left.yy = 1814;
	oldest.yy = rigth.yy = 2014;
	youngest.mm = oldest.mm = left.mm = right.mm = 9;
	youngest.dd = oldest.dd = left.dd = right.dd;
} 

int main(){
	init(); //初始化youngest、oldest、left、right
	int n,num = 0;//num存放合法日期的人数
	scanf("%d",&n);
	for(int i = 0;i<n;++i){
		scanf("%s %d/%d/%d",temp.name,&temp.yy,&temp.mm,&temp.dd);
		if(MoreEqu(temp,left)&&LessEqu(temp,right)){//日期合法 
			num++;
			if(LessEqu(temp,oldest)) oldest = temp; //更新oldest
			if(MoreEqu(temp,youngest)) youngest = temp; //更新youngest 
		}
	} 
	if(num==0) printf("0\n"); //所有人的日期都不合法，只输出0
	else printf("%d %s %s\n",num,oldest.name,youngest.name);
	return 0; 
}
