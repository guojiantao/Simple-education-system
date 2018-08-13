#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct stud{
	char ID[12];
	char name[17];
	int nlen;
    int Chinese;
	int math;
	int English;
	int physics;
	int chemistry;
	int biology;
	int all;
	}*stu,stuu;
int menu (void);
int fun1 (FILE* fp,stu body);
int fun2 (FILE* fp);
int fun4 (FILE* fp,stu body,int num);
int fun6 (stu body,int num);
int order (FILE* fp,stu body,int choose,int num);
int luru(FILE* fp,stu body,int num);
int sb1(stu body,int num);
int sb2(stu body,int num);
int sb3(stu body,int num);
int main (void){
	FILE* fp;
	 stu body;
	 body=(stuu*)malloc(200*sizeof(stuu));
	 char secret[6];
	 printf("********************************************************************\n"); 
	 printf("*请设置你的初始六位密码(请使用字母数字组合),以enter键表示输入结束：*\n");
	 printf("********************************************************************\n");
	 int se=0;
	 for(;se<6;se++)
	 secret[se]=getchar(); 
	 char non_use;
	 non_use=getchar(); 
	int num=0; 
//	body=(stuu*)malloc(sizeof(stuu));
	fp=fopen("d:\\score.txt","w+");
	int outcome;
	outcome=menu();
	while(outcome!=7){
		if(outcome==1) {
			////////////////////////////////////////////////////////////////
			//////////////////////////////////////////////////////////////// 
			fp=fopen("d:\\score.txt","a+");
			printf("\n********************成绩录入功能模块***********************\n");
            printf("                      请输入学生人数\n");
    int student_num;
    scanf("%d",&student_num);
    num+=student_num; 
    char ah=getchar();
    //ah=getchar();
            printf("***************************************************************\n");
	        printf("**请输入相关数据：学号 姓名 语文 数学 英语 物理 化学 生物。****\n**以换行符表示此学生数据输入完毕                           ****\n");
	        printf("***************************************************************\n") ;
	int count=1;
	while(count<=student_num){
		 char ch;
		 //int count2=1;
		 ch=getchar();
		// printf("@%c@",ch);
		int IDc=0;
		 while(ch!=' '){
		 	// printf("@%c@",ch);
		 	fprintf(fp,"%c",ch);
		 	body[num-student_num+count].ID[IDc]=ch;
		 	IDc++;
		 	ch=getchar();
		 }
		 fprintf(fp,"%s","   ");
		 ch=getchar();
		 int numm=0;
		 while(ch!=' '){
		 	fprintf(fp,"%c",ch);
		 	body[num-student_num+count].name[numm]=ch;
		 	numm++;
		 	ch=getchar();
		 }
		 body[num-student_num+count].nlen=numm;
		 int count2=1;
		 while(count2+numm<=18){
		 	fprintf(fp,"%s"," ");
		 	count2++;
		 }
		 int chinese;
		 scanf("%d",&chinese);
		 body[num-student_num+count].Chinese=chinese;
		 if(chinese<10){
		 	fprintf(fp,"%d",chinese);
		 	fprintf(fp,"%s","      ");
		 }
		 else if(chinese<100){
		 	fprintf(fp,"%d",chinese);
		 	fprintf(fp,"%s","     ");
		 }
		 else{
		 	fprintf(fp,"%d",chinese);
		 	fprintf(fp,"%s","    ");
		 }
		// int chinese;
		 scanf("%d",&chinese);
		 body[num-student_num+count].math=chinese;
		 if(chinese<10){
		 	fprintf(fp,"%d",chinese);
		 	fprintf(fp,"%s","      ");
		 }
		 else if(chinese<100){
		 	fprintf(fp,"%d",chinese);
		 	fprintf(fp,"%s","     ");
		 }
		 else{
		 	fprintf(fp,"%d",chinese);
		 	fprintf(fp,"%s","    ");
		 }
		 scanf("%d",&chinese);
		 body[num-student_num+count].English=chinese;
		 if(chinese<10){
		 	fprintf(fp,"%d",chinese);
		 	fprintf(fp,"%s","      ");
		 }
		 else if(chinese<100){
		 	fprintf(fp,"%d",chinese);
		 	fprintf(fp,"%s","     ");
		 }
		 else{
		 	fprintf(fp,"%d",chinese);
		 	fprintf(fp,"%s","    ");
		 }
		 scanf("%d",&chinese);
		 body[num-student_num+count].physics=chinese;
		 if(chinese<10){
		 	fprintf(fp,"%d",chinese);
		 	fprintf(fp,"%s","      ");
		 }
		 else if(chinese<100){
		 	fprintf(fp,"%d",chinese);
		 	fprintf(fp,"%s","     ");
		 }
		 else{
		 	fprintf(fp,"%d",chinese);
		 	fprintf(fp,"%s","    ");
		 }
		 scanf("%d",&chinese);
		 body[num-student_num+count].chemistry=chinese;
		 if(chinese<10){
		 	fprintf(fp,"%d",chinese);
		 	fprintf(fp,"%s","      ");
		 }
		 else if(chinese<100){
		 	fprintf(fp,"%d",chinese);
		 	fprintf(fp,"%s","     ");
		 }
		 else{
		 	fprintf(fp,"%d",chinese);
		 	fprintf(fp,"%s","    ");
		 }
		 scanf("%d",&chinese);
		 body[num-student_num+count].biology=chinese;
		 if(chinese<10){
		 	fprintf(fp,"%d",chinese);
		 	fprintf(fp,"%s","      ");
		 }
		 else if(chinese<100){
		 	fprintf(fp,"%d",chinese);
		 	fprintf(fp,"%s","     ");
		 }
		 else{
		 	fprintf(fp,"%d",chinese);
		 	fprintf(fp,"%s","    ");
		 }
		 body[num-student_num+count].all=body[num-student_num+count].biology+body[num-student_num+count].chemistry+body[num-student_num+count].Chinese+body[num-student_num+count].English+body[num-student_num+count].math+body[num-student_num+count].physics;
		 
		 	fprintf(fp,"%d",body[num-student_num+count].all);
		 		//printf("@%d %d@",body[1].all,body[2].all);
		  
		 
		 ch=getchar();
		 //printf("@@@");f
		 fprintf(fp,"%c",'\n');
		 count++;
	}
//	return student_num;
			
			//////////////////////////////////////////////////////////////////
			//////////////////////////////////////////////////////////////////// 
			outcome=menu();
		}
	else	if(outcome==2) {
			fun2(fp);
			outcome=menu();
		}
	/*	if(outcome==3) {
			fun3();
			outcome=menu();
		}*/
	else	if(outcome==4) {
		//	printf("&&&%d",num);
			//printf("@%d %d@",body[1].all,body[2].all);
			fun4(fp,body,num);
			outcome=menu();
		}
	else	if(outcome==5) {
		 //*********************************************************************
		 
		 int in_times=1;
		 while(in_times<=3){
		 	printf("                请输入密码：\n");
		 	int state=1;
		 	int pass_count=0;
		 	char password;
		 		password=getchar();
		 	for(;pass_count<6;pass_count++){
		 		
		 		password=getchar();
		 		if(password!=secret[pass_count])
		 		state=0;
			 }
			 if(state==0){
			printf("                密码输入错误，你还有%d次机会\n",3-in_times);
			 	in_times++;
			 }
			 else break;
		 }
		 if(in_times>3) {
		 	printf("                系统锁定，退出后重试\n");
		 	outcome=menu();
		 }
		 else{  
		 printf("                   密码正确！请输入你想要修改学生的十二位学号：\n");
		 char n_use;
		 n_use=getchar();
		 char snum[12];
		 int snum_count=0;
		 for(;snum_count<12;snum_count++)
		 snum[snum_count]=getchar();
		 int find=1;
		 for(;find<=num;find++){
		 	if(body[find].ID[0]==snum[0]&&body[find].ID[1]==snum[1]&&body[find].ID[2]==snum[2]&&body[find].ID[3]==snum[3]&&body[find].ID[4]==snum[4]&&body[find].ID[5]==snum[5]&&body[find].ID[6]==snum[6]&&body[find].ID[7]==snum[7]&&body[find].ID[8]==snum[8]&&body[find].ID[9]==snum[9]&&body[find].ID[10]==snum[10]&&body[find].ID[11]==snum[11])
		    {
		    	    printf("            你想要修改的科目以及修改后的成绩，二者以空格间隔：\n");
		    		printf("            1. 语文\n");
                 	printf("            2. 数学\n");
                 	printf("            3. 英语\n");
                  	printf("            4. 物理\n");
                	printf("            5. 化学\n");
                	printf("            6. 生物\n");
 	                //printf("            0. 总分\n");
 	                printf("            你的选择和修改后的成绩是是：\n");
				int subject;
				int change_score;
				scanf("%d %d",&subject,&change_score);
				if(subject==1) body[find].Chinese=change_score;
				if(subject==2) body[find].math=change_score;
				if(subject==3) body[find].English=change_score;
				if(subject==4) body[find].physics=change_score;
				if(subject==5) body[find].chemistry=change_score;
				if(subject==6) body[find].biology=change_score;
				body[find].all=body[find].biology+body[find].chemistry+body[find].Chinese+body[find].English+body[find].math+body[find].physics;
				break; 
			}
		 }
		 if(find>num) {
		            printf("            学号输入错误或者系统中不存在此人信息,请重新选择目录\n");
		 outcome=menu();
	}
		 else {
		 luru(fp,body,num);
		            printf("            修改成功！\n");
		 		outcome=menu();
		 	}
		 }
		 //***********************************************************************
		//	outcome=menu();
		}
		if(outcome==6) {
			fun6(body,num);
			outcome=menu();
		}
	}
	                printf("            系统退出\n");
}
int menu (void){
	int x;
printf("\n********************班级成绩管理系统***********************\n");
printf("********************系统仅支持一次录入功能***********************\n");
printf("\t1.成绩录入\n");
printf("\t2.成绩显示\n");
//printf("\t3.成绩保存\n");
printf("\t4.成绩排序\n");
printf("\t5.成绩修改\n");
printf("\t6.成绩统计\n");
printf("\t7.退出系统\n");
printf("----------------------------------------------\n");
printf("Enter your choose:");
scanf("%d",&x);
return x;
}
int fun2 (FILE* fp){
//	fp=fopen("d:\\score.txt","r");
		//fp=fopen("d:\\score.txt","r");
    printf("\n********************成绩显示功能模块***********************\n");
    printf("ID             姓名             语文    数学   英语   物理   化学  生物   总分\n");
	char ch;
	rewind(fp);
	ch=fgetc(fp);
	while(ch!=EOF){
		putchar(ch);
		ch=fgetc(fp);
	}
	//fclose(fp);
}
int fun4 (FILE* fp,stu body,int num){
		printf("\n********************成绩排序功能模块***********************\n");
		printf("                      你想利用哪个成绩进行排序?\n");
		printf("                      1. 语文\n");
       	printf("                      2. 数学\n");
       	printf("                      3. 英语\n");         	
		printf("                      4. 物理\n");
 	    printf("                      5. 化学\n");
 	    printf("                      6. 生物\n");
 	    printf("                      0. 总分\n");
 	    printf("                      你的选择是：\n");
		//printf("请选择：");
		int choose;
		//choose=getchar();
		//choose=getchar();
		scanf("%d",&choose);
		order(fp,body,choose,num); 
		printf("*******************************************************************\n");
		printf("*******************************************************************\n");
		printf("********排序的结果请在d:\\score2.txt中查看或者利用功能2查询********\n");
		printf("*******************************************************************\n");
		printf("*******************************************************************\n");
}
int order (FILE* fp,stu body,int choose,int num){
	if(choose==1){
		int a=1;
		for(;a<num;a++){
			for(int b=a+1;b<=num;b++){
				if(body[b].Chinese>body[a].Chinese){
					stuu pre;
					pre=body[b];
					body[b]=body[a];
					body[a]=pre;
				}
			}
		}
	}
//	printf("@%d %d@",body[1].all,body[2].all);
		if(choose==2){
		int a=1;
		for(;a<num;a++){
			for(int b=a+1;b<=num;b++){
				if(body[b].math>body[a].math){
					stuu pre;
					pre=body[b];
					body[b]=body[a];
					body[a]=pre;
				}
			}
		}
	}
			if(choose==3){
		int a=1;
		for(;a<num;a++){
			for(int b=a+1;b<=num;b++){
				if(body[b].English>body[a].English){
					stuu pre;
					pre=body[b];
					body[b]=body[a];
					body[a]=pre;
				}
			}
		}
	}
			if(choose==4){
		int a=1;
		for(;a<num;a++){
			for(int b=a+1;b<=num;b++){
				if(body[b].physics>body[a].physics){
					stuu pre;
					pre=body[b];
					body[b]=body[a];
					body[a]=pre;
				}
			}
		}
	}
			if(choose==5){
		int a=1;
		for(;a<num;a++){
			for(int b=a+1;b<=num;b++){
				if(body[b].chemistry>body[a].chemistry){
					stuu pre;
					pre=body[b];
					body[b]=body[a];
					body[a]=pre;
				}
			}
		}
	}
			if(choose==6){
		int a=1;
		for(;a<num;a++){
			for(int b=a+1;b<=num;b++){
				if(body[b].biology>body[a].biology){
					stuu pre;
					pre=body[b];
					body[b]=body[a];
					body[a]=pre;
				}
			}
		}
	}
			if(choose==0){
		int a=1;
		for(;a<num;a++){
			for(int b=a+1;b<=num;b++){
				if(body[b].all>body[a].all){
					stuu pre;
					pre=body[b];
					body[b]=body[a];
					body[a]=pre;
				}
			}
		}
	}
		//printf("@%d %d %d@",body[1].all,body[2].all,num);
	fp=fopen("d:\\score.txt","w+");
	int q=1;
	for(;q<=num;q++){
		int IDc=0;
		while(IDc<12){
		fprintf(fp,"%c",body[q].ID[IDc]);
		IDc++;
	}
		fprintf(fp,"%s","   ");
		//输入姓名 
			 int count2=0;
		 while(count2<body[q].nlen){
		 	fprintf(fp,"%c",body[q].name[count2]);
		 	count2++;
		 }
		 	 int count3=1;
		 while(count3+count2<=18){
		 	fprintf(fp,"%s"," ");
		 	count3++;
		 }
		 //输入姓名
		/////////////////////////////////////
				 if(body[q].Chinese<10){
		 	fprintf(fp,"%d",body[q].Chinese);
		 	fprintf(fp,"%s","      ");
		 }
		 else if(body[q].Chinese<100){
		 	fprintf(fp,"%d",body[q].Chinese);
		 	fprintf(fp,"%s","     ");
		 }
		 else{
		 	fprintf(fp,"%d",body[q].Chinese);
		 	fprintf(fp,"%s","    ");
		 }
		// int chinese;
		 //scanf("%d",&chinese);
		 //body[count].math=chinese;
		 if(body[q].math<10){
		 	fprintf(fp,"%d",body[q].math);
		 	fprintf(fp,"%s","      ");
		 }
		 else if(body[q].math<100){
		 	fprintf(fp,"%d",body[q].math);
		 	fprintf(fp,"%s","     ");
		 }
		 else{
		 	fprintf(fp,"%d",body[q].math);
		 	fprintf(fp,"%s","    ");
		 }
		 //scanf("%d",&chinese);
		 //body[count].English=chinese;
		 if(body[q].English<10){
		 	fprintf(fp,"%d",body[q].English);
		 	fprintf(fp,"%s","      ");
		 }
		 else if(body[q].English<100){
		 	fprintf(fp,"%d",body[q].English);
		 	fprintf(fp,"%s","     ");
		 }
		 else{
		 	fprintf(fp,"%d",body[q].English);
		 	fprintf(fp,"%s","    ");
		 }
		 //scanf("%d",&chinese);
		 //body[count].physics=chinese;
		 if(body[q].physics<10){
		 	fprintf(fp,"%d",body[q].physics);
		 	fprintf(fp,"%s","      ");
		 }
		 else if(body[q].physics<100){
		 	fprintf(fp,"%d",body[q].physics);
		 	fprintf(fp,"%s","     ");
		 }
		 else{
		 	fprintf(fp,"%d",body[q].physics);
		 	fprintf(fp,"%s","    ");
		 }
		// scanf("%d",&chinese);
		 //body[count].chemistry=chinese;
		 if(body[q].chemistry<10){
		 	fprintf(fp,"%d",body[q].chemistry);
		 	fprintf(fp,"%s","      ");
		 }
		 else if(body[q].chemistry<100){
		 	fprintf(fp,"%d",body[q].chemistry);
		 	fprintf(fp,"%s","     ");
		 }
		 else{
		 	fprintf(fp,"%d",body[q].chemistry);
		 	fprintf(fp,"%s","    ");
		 }
		 //scanf("%d",&chinese);
		 //body[count].biology=chinese;
		 if(body[q].biology<10){
		 	fprintf(fp,"%d",body[q].biology);
		 	fprintf(fp,"%s","      ");
		 }
		 else if(body[q].biology<100){
		 	fprintf(fp,"%d",body[q].biology);
		 	fprintf(fp,"%s","     ");
		 }
		 else{
		 	fprintf(fp,"%d",body[q].biology);
		 	fprintf(fp,"%s","    ");
		 }
		 //body[count].all=body[count].biology+body[count].chemistry+body[count].Chinese+body[count].English+body[count].math+body[count].physics;
		 
		 	fprintf(fp,"%d",body[q].all);
		  
		 
		 //ch=getchar();
		 //printf("@@@");f
		 fprintf(fp,"%c",'\n');
		 //q++;
		////////////////////////////////// 
		  
	    
	}
	fclose(fp);
}
 int luru(FILE* fp,stu body,int num){
 		fp=fopen("d:\\score.txt","w+");
 		//rewind(fp);
	int q=1;
	for(;q<=num;q++){
		int IDc=0;
		while(IDc<12){
		fprintf(fp,"%c",body[q].ID[IDc]);
		IDc++;
	}
		fprintf(fp,"%s","   ");
		//输入姓名 
			 int count2=0;
		 while(count2<body[q].nlen){
		 	fprintf(fp,"%c",body[q].name[count2]);
		 	count2++;
		 }
		 	 int count3=1;
		 while(count3+count2<=18){
		 	fprintf(fp,"%s"," ");
		 	count3++;
		 }
		 //输入姓名
		/////////////////////////////////////
				 if(body[q].Chinese<10){
		 	fprintf(fp,"%d",body[q].Chinese);
		 	fprintf(fp,"%s","      ");
		 }
		 else if(body[q].Chinese<100){
		 	fprintf(fp,"%d",body[q].Chinese);
		 	fprintf(fp,"%s","     ");
		 }
		 else{
		 	fprintf(fp,"%d",body[q].Chinese);
		 	fprintf(fp,"%s","    ");
		 }
		// int chinese;
		 //scanf("%d",&chinese);
		 //body[count].math=chinese;
		 if(body[q].math<10){
		 	fprintf(fp,"%d",body[q].math);
		 	fprintf(fp,"%s","      ");
		 }
		 else if(body[q].math<100){
		 	fprintf(fp,"%d",body[q].math);
		 	fprintf(fp,"%s","     ");
		 }
		 else{
		 	fprintf(fp,"%d",body[q].math);
		 	fprintf(fp,"%s","    ");
		 }
		 //scanf("%d",&chinese);
		 //body[count].English=chinese;
		 if(body[q].English<10){
		 	fprintf(fp,"%d",body[q].English);
		 	fprintf(fp,"%s","      ");
		 }
		 else if(body[q].English<100){
		 	fprintf(fp,"%d",body[q].English);
		 	fprintf(fp,"%s","     ");
		 }
		 else{
		 	fprintf(fp,"%d",body[q].English);
		 	fprintf(fp,"%s","    ");
		 }
		 //scanf("%d",&chinese);
		 //body[count].physics=chinese;
		 if(body[q].physics<10){
		 	fprintf(fp,"%d",body[q].physics);
		 	fprintf(fp,"%s","      ");
		 }
		 else if(body[q].physics<100){
		 	fprintf(fp,"%d",body[q].physics);
		 	fprintf(fp,"%s","     ");
		 }
		 else{
		 	fprintf(fp,"%d",body[q].physics);
		 	fprintf(fp,"%s","    ");
		 }
		// scanf("%d",&chinese);
		 //body[count].chemistry=chinese;
		 if(body[q].chemistry<10){
		 	fprintf(fp,"%d",body[q].chemistry);
		 	fprintf(fp,"%s","      ");
		 }
		 else if(body[q].chemistry<100){
		 	fprintf(fp,"%d",body[q].chemistry);
		 	fprintf(fp,"%s","     ");
		 }
		 else{
		 	fprintf(fp,"%d",body[q].chemistry);
		 	fprintf(fp,"%s","    ");
		 }
		 //scanf("%d",&chinese);
		 //body[count].biology=chinese;
		 if(body[q].biology<10){
		 	fprintf(fp,"%d",body[q].biology);
		 	fprintf(fp,"%s","      ");
		 }
		 else if(body[q].biology<100){
		 	fprintf(fp,"%d",body[q].biology);
		 	fprintf(fp,"%s","     ");
		 }
		 else{
		 	fprintf(fp,"%d",body[q].biology);
		 	fprintf(fp,"%s","    ");
		 }
		 //body[count].all=body[count].biology+body[count].chemistry+body[count].Chinese+body[count].English+body[count].math+body[count].physics;
		 
		 	fprintf(fp,"%d",body[q].all);
		  
		 
		 //ch=getchar();
		 //printf("@@@");f
		 fprintf(fp,"%c",'\n');
		 //q++;
		////////////////////////////////// 
		  
	    
	}
	fclose(fp);
 	
 }
 int fun6(stu body,int num){
 	printf("\n********************成绩统计功能模块***********************\n");
 	printf("            1.显示每门课程成绩最高学生的基本信息             \n");
 	printf("            2.显示每门课程的平均成绩                         \n");
 	printf("            3.显示超过每门课程平均成绩的人数                 \n");
 	printf("            4.退出此功能                                     \n");
 	printf("            你的选择是\n");
 	int xuan;
 	scanf("%d",&xuan);
 	while(xuan!=4){
 		if(xuan==1) {
		 sb1(body,num);
	printf("\n********************成绩统计功能模块***********************\n");
 	printf("            1.显示每门课程成绩最高学生的基本信息             \n");
 	printf("            2.显示每门课程的平均成绩                         \n");
 	printf("            3.显示超过每门课程平均成绩的人数                 \n");
 	printf("            4.退出此功能                                     \n");
 	printf("            你的选择是\n");
		scanf("%d",&xuan);
	}
	else if(xuan==2){
		sb2(body,num);
	printf("\n********************成绩统计功能模块***********************\n");
 	printf("            1.显示每门课程成绩最高学生的基本信息             \n");
 	printf("            2.显示每门课程的平均成绩                         \n");
 	printf("            3.显示超过每门课程平均成绩的人数                 \n");
 	printf("            4.退出此功能                                     \n");
 	printf("            你的选择是\n");
 	scanf("%d",&xuan);
	}
	else if(xuan==3){
		sb3(body,num);
	printf("\n********************成绩统计功能模块***********************\n");
 	printf("            1.显示每门课程成绩最高学生的基本信息             \n");
 	printf("            2.显示每门课程的平均成绩                         \n");
 	printf("            3.显示超过每门课程平均成绩的人数                 \n");
 	printf("            4.退出此功能                                     \n");
 	printf("            你的选择是\n");
 	scanf("%d",&xuan);
	}
	 }
	 printf("已经退出此功能\n");
 }
 int sb1(stu body,int num){
 	printf("************请输入你想要选择的科目************************\n");
 	printf("            1. 语文\n");
 	printf("            2. 数学\n");
 	printf("            3. 英语\n");
 	printf("            4. 物理\n");
 	printf("            5. 化学\n");
 	printf("            6. 生物\n");
 	printf("            0. 总分\n");
 	printf("            你的选择是：\n");
	int x;
	scanf("%d",&x);
	stuu pre;
	pre=body[1];
	if(x==1) {
		int q=2;
		for(;q<=num;q++){
			if(body[q].Chinese>pre.Chinese)
			pre=body[q];
		}
		q=1;
		printf("****************************************************\n");
		printf("语文成绩最高学生基本信息为：\n");
		for(;q<=num;q++){
			if(body[q].Chinese==pre.Chinese){
		printf("ID:%c%c%c%c%c%c%c%c%c%c%c%c 姓名：",body[q].ID[0],body[q].ID[1],body[q].ID[2],body[q].ID[3],body[q].ID[4],body[q].ID[5],body[q].ID[6],body[q].ID[7],body[q].ID[8],body[q].ID[9],body[q].ID[10],body[q].ID[11]);
		    int x=0;
			for(;x<body[q].nlen;x++)
			printf("%c",body[q].name[x]);
			printf("\n");
				printf("****************************************************\n");
		}
		}
	} 
	else if(x==2){
			int q=2;
		for(;q<=num;q++){
			if(body[q].math>pre.math)
			pre=body[q];
		}
		q=1;
		printf("****************************************************\n");
		printf("数学成绩最高学生基本信息为：\n");
		for(;q<=num;q++){
			if(body[q].math==pre.math){
			
		    printf("ID:%c%c%c%c%c%c%c%c%c%c%c%c  姓名：",body[q].ID[0],body[q].ID[1],body[q].ID[2],body[q].ID[3],body[q].ID[4],body[q].ID[5],body[q].ID[6],body[q].ID[7],body[q].ID[8],body[q].ID[9],body[q].ID[10],body[q].ID[11]);
		    //printf("姓名：%c%c%c") 
		        int x=0;
			for(;x<body[q].nlen;x++)
			printf("%c",body[q].name[x]);
			printf("\n");
				printf("****************************************************\n");
		}
		}
	}
	else if(x==3){
			int q=2;
		for(;q<=num;q++){
			if(body[q].English>pre.English)
			pre=body[q];
		}
		q=1;
			printf("****************************************************\n");
		printf("英语成绩最高学生基本信息为：\n");
		for(;q<=num;q++){
			if(body[q].English==pre.English){ 
		    printf("ID:%c%c%c%c%c%c%c%c%c%c%c%c 姓名：",body[q].ID[0],body[q].ID[1],body[q].ID[2],body[q].ID[3],body[q].ID[4],body[q].ID[5],body[q].ID[6],body[q].ID[7],body[q].ID[8],body[q].ID[9],body[q].ID[10],body[q].ID[11]);
		    int x=0;
			for(;x<body[q].nlen;x++)
			printf("%c",body[q].name[x]);
			printf("\n");
				printf("****************************************************\n");
		} 
		}
	}
	else if(x==4){
			int q=2;
		for(;q<=num;q++){
			if(body[q].physics>pre.physics)
			pre=body[q];
		}
		q=1;
			printf("****************************************************\n");
		printf("物理成绩最高学生基本信息为：\n");
		for(;q<=num;q++){
			if(body[q].physics==pre.physics){ 
		    printf("ID:%c%c%c%c%c%c%c%c%c%c%c%c 姓名：",body[q].ID[0],body[q].ID[1],body[q].ID[2],body[q].ID[3],body[q].ID[4],body[q].ID[5],body[q].ID[6],body[q].ID[7],body[q].ID[8],body[q].ID[9],body[q].ID[10],body[q].ID[11]);
	    int x=0;
			for(;x<body[q].nlen;x++)
			printf("%c",body[q].name[x]);
			printf("\n");
				printf("****************************************************\n");
	
		}
		} 
	}
	else if(x==5){
			int q=2;
		for(;q<=num;q++){
			if(body[q].chemistry>pre.chemistry)
			pre=body[q];
		}
		q=1;
			printf("****************************************************\n");
		printf("化学成绩最高学生基本信息为：\n");
		for(;q<=num;q++){
			if(body[q].chemistry==pre.chemistry){ 
		    printf("ID:%c%c%c%c%c%c%c%c%c%c%c%c 姓名：",body[q].ID[0],body[q].ID[1],body[q].ID[2],body[q].ID[3],body[q].ID[4],body[q].ID[5],body[q].ID[6],body[q].ID[7],body[q].ID[8],body[q].ID[9],body[q].ID[10],body[q].ID[11]);
	    int x=0;
			for(;x<body[q].nlen;x++)
			printf("%c",body[q].name[x]);
			printf("\n");
				printf("****************************************************\n");
	} 
		}
	}
	else if(x==6){
			int q=2;
		for(;q<=num;q++){
			if(body[q].biology>pre.biology)
			pre=body[q];
		}
		q=1;
			printf("****************************************************\n");
		printf("生物成绩最高学生基本信息为：\n");
		for(;q<=num;q++){
			if(body[q].biology==pre.biology){ 
		    printf("ID:%c%c%c%c%c%c%c%c%c%c%c%c 姓名：",body[q].ID[0],body[q].ID[1],body[q].ID[2],body[q].ID[3],body[q].ID[4],body[q].ID[5],body[q].ID[6],body[q].ID[7],body[q].ID[8],body[q].ID[9],body[q].ID[10],body[q].ID[11]);
		    int x=0;
			for(;x<body[q].nlen;x++)
			printf("%c",body[q].name[x]);
			printf("\n");
				printf("****************************************************\n");
		} 
		}
	} 
	else if(x==0){
			int q=2;
		for(;q<=num;q++){
			if(body[q].all>pre.all)
			pre=body[q];
		}
		q=1;
			printf("****************************************************\n");
		printf("总分成绩最高学生基本信息为：\n");
		for(;q<=num;q++){
			if(body[q].all==pre.all){ 
		    printf("ID:%c%c%c%c%c%c%c%c%c%c%c%c 姓名：",body[q].ID[0],body[q].ID[1],body[q].ID[2],body[q].ID[3],body[q].ID[4],body[q].ID[5],body[q].ID[6],body[q].ID[7],body[q].ID[8],body[q].ID[9],body[q].ID[10],body[q].ID[11]);
		    int x=0;
			for(;x<body[q].nlen;x++)
			printf("%c",body[q].name[x]);
			printf("\n");
				printf("****************************************************\n");
		} 
		}
	} 
 }
 int sb2(stu body,int num){
 	printf("************请输入你想要选择的科目************************\n");
 	printf("            1. 语文\n");
 	printf("            2. 数学\n");
 	printf("            3. 英语\n");
 	printf("            4. 物理\n");
 	printf("            5. 化学\n");
 	printf("            6. 生物\n");
 	printf("            0. 总分\n");
 	printf("            你的选择是：\n");
	int x;
	scanf("%d",&x);
	if(x==1){
		int sum=0;
		float average;
		int q=1;
		for(;q<=num;q++)
		sum+=body[q].Chinese;
		average=(float)sum/num;
			printf("****************************************************\n");
		printf("语文的平均成绩是%f\n",average);
			printf("****************************************************\n");
	}
	else if(x==2){
				int sum=0;
		float average;
		int q=1;
		for(;q<=num;q++)
		sum+=body[q].math;
		average=(float)sum/num;
			printf("****************************************************\n");
		printf("数学的平均成绩是%f\n",average);
			printf("****************************************************\n");
	}
	else if(x==3){
				int sum=0;
		float average;
		int q=1;
		for(;q<=num;q++)
		sum+=body[q].English;
		average=(float)sum/num;
			printf("****************************************************\n");
		printf("英语的平均成绩是%f\n",average);
			printf("****************************************************\n");
	} 
	else if(x==4){
				int sum=0;
		float average;
		int q=1;
		for(;q<=num;q++)
		sum+=body[q].physics;
		average=(float)sum/num;
			printf("****************************************************\n");
		printf("物理的平均成绩是%f\n",average);
			printf("****************************************************\n");
	}
	else if(x==5){
				int sum=0;
		float average;
		int q=1;
		for(;q<=num;q++)
		sum+=body[q].chemistry;
		average=(float)sum/num;
			printf("****************************************************\n");
		printf("化学的平均成绩是%f\n",average);
			printf("****************************************************\n");
	} 
	else if(x==6){
				int sum=0;
		float average;
		int q=1;
		for(;q<=num;q++)
		sum+=body[q].biology;
		average=(float)sum/num;
			printf("****************************************************\n");
		printf("生物的平均成绩是%f\n",average);
			printf("****************************************************\n");
	} 
	else if(x==0){
				int sum=0;
		float average;
		int q=1;
		for(;q<=num;q++)
		sum+=body[q].all;
		average=(float)sum/num;
			printf("****************************************************\n");
		printf("总分的平均成绩是%f\n",average);
			printf("****************************************************\n");
	} 
 } 
 int sb3(stu body,int num){
 	printf("************请输入你想要选择的科目************************\n");
 	printf("            1. 语文\n");
 	printf("            2. 数学\n");
 	printf("            3. 英语\n");
 	printf("            4. 物理\n");
 	printf("            5. 化学\n");
 	printf("            6. 生物\n");
 	printf("            0. 总分\n");
 	printf("            你的选择是：\n");
	int x;
	scanf("%d",&x);
	if(x==1){
		int sum=0;
		float average;
		int q=1;
		for(;q<=num;q++)
		sum+=body[q].Chinese;
		average=(float)sum/num;
		//printf("语文的平均成绩是%f ",average);
		int count=0;
		q=1;
		for(;q<=num;q++)
		if(body[q].Chinese>average)
		count++;
			printf("****************************************************\n");
		printf("语文有%d个学生超过了平均分\n",count); 
			printf("****************************************************\n");
	}
	else if(x==2){
				int sum=0;
		float average;
		int q=1;
		for(;q<=num;q++)
		sum+=body[q].math;
		average=(float)sum/num;
		//printf("数学的平均成绩是%f\n",average);
				int count=0;
		q=1;
		for(;q<=num;q++)
		if(body[q].math>average)
		count++;
			printf("****************************************************\n");
		printf("数学有%d个学生超过了平均分\n",count); 
			printf("****************************************************\n");
	}
	else if(x==3){
				int sum=0;
		float average;
		int q=1;
		for(;q<=num;q++)
		sum+=body[q].English;
		average=(float)sum/num;
		//printf("英语的平均成绩是%f\n",average);
				int count=0;
		q=1;
		for(;q<=num;q++)
		if(body[q].English>average)
		count++;
			printf("****************************************************\n");
		printf("英语有%d个学生超过了平均分\n",count); 
			printf("****************************************************\n");
	} 
	else if(x==4){
				int sum=0;
		float average;
		int q=1;
		for(;q<=num;q++)
		sum+=body[q].physics;
		average=(float)sum/num;
		//printf("物理的平均成绩是%f\n",average);
				int count=0;
		q=1;
		for(;q<=num;q++)
		if(body[q].physics>average)
		count++;
			printf("****************************************************\n");
		printf("物理有%d个学生超过了平均分\n",count); 
			printf("****************************************************\n");
	}
	else if(x==5){
				int sum=0;
		float average;
		int q=1;
		for(;q<=num;q++)
		sum+=body[q].chemistry;
		average=(float)sum/num;
		//printf("化学的平均成绩是%f\n",average);
				int count=0;
		q=1;
		for(;q<=num;q++)
		if(body[q].chemistry>average)
		count++;
			printf("****************************************************\n");
		printf("化学有%d个学生超过了平均分\n",count); 
			printf("****************************************************\n");
	} 
	else if(x==6){
				int sum=0;
		float average;
		int q=1;
		for(;q<=num;q++)
		sum+=body[q].biology;
		average=(float)sum/num;
		//printf("生物的平均成绩是%f\n",average);
				int count=0;
		q=1;
		for(;q<=num;q++)
		if(body[q].biology>average)
		count++;
			printf("****************************************************\n");
		printf("生物有%d个学生超过了平均分\n",count); 
			printf("****************************************************\n");
	} 
	else if(x==0){
				int sum=0;
		float average;
		int q=1;
		for(;q<=num;q++)
		sum+=body[q].all;
		average=(float)sum/num;
		//printf("总分的平均成绩是%f\n",average);
				int count=0;
		q=1;
		for(;q<=num;q++)
		if(body[q].all>average)
		count++;
			printf("****************************************************\n");
		printf("总分有%d个学生超过了平均分\n",count); 
			printf("****************************************************\n");
	} 
 }
