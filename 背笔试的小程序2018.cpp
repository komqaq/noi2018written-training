/*
[version 2018] by qaz
[version 2017] check & update by YihAN_Z
[version 2016] by xtt

*/
#include <queue>
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;
char que[150][10001] = {
"NOI机试使用的操作系统是",
"Linux中为文件改名使用的命令是",
"在Linux中返回上一级目录使用的命令是",
"在Linux中删除当前目录下的test目录的命令是",
"当前目录下有一个编译好的可执行文件a.out，执行它使用的命令是",
"使用高级语言编写的程序称之为",
"在NOILinux系统中可以用来调试程序的程序是",
"在Linux系统中，文件夹中的文件可以与该文件夹同名吗",
"Linux系统中杀死名为test的后台进程的命令是",
"Linux系统中可以查看隐藏文件的命令是",
"Linux系统中编译C程序的编译器是",
"Linux系统中编译Pascal程序的编译器是",
"Linux系统中编译C++程序的编译器是",
"Linux系统中，将当前目录下的文件名打印到tmp文件中的命令是",
"Linux系统中，测量当前目录下程序test运行时间的命令是",
"vim编辑器中，强制退出不保存修改应当输入",
"vim编辑器中，强制退出并保存修改可输入以下三种命令之一",
"vim编辑器中，定位到文件中第12行应当输入",
"vim编辑器中，在文件中查找字符串“12”应当输入",
"使用gcc编译C程序时，生成调试信息的命令行选项是",
"使用gcc编译C程序时，生成所有警告信息的命令行选项是",
"使用gcc编译C程序时，只编译生成目标文件的命令行选项是",
"使用gcc编译C程序时，指定输出文件名的命令行选项是",
"如果C程序中使用了math中的函数，在编译时需要加入选项",
"Linux系统中具有最高权限的用户是",
"在Linux的各个虚拟控制台间切换的快捷键是",
"在NOILinux中，从字符控制台切换回桌面环境使用的快捷键是",
"在NOILinux中默认使用的Shell是",
"在Linux中查看当前系统中的进程使用的命令是",
"在Linux中查看进程的CPU利用率使用的命令是",
"如果自己的程序进入死循环，应当如何终止",
"可执行文件a.out从标准输入读取数据。现有一组输入数据保存在1.in中，使用这个测试数据文件测试自己的程序的命令是",
"可执行文件prog_1向标准输出输出运行结果。将输出结果保存到1.out文件中使用的命令是",
"使用Reset键强行重新启动计算机可能会对系统造成的后果是",
"在Linux系统中，用于查看文件的大小的命令是",
"当前目录中有如下文件\n-rw-r--r--   1 user None 8.7K Jul 2 16:35 foobar\n-rw-r--r-- 1 user None 93 Jul 2 16:35 foobar.c\n-rwx------ 1 user None 144 Jul 2 16:35 foobar.sh\n其中，可以执行的文件是",
"评测系统中对程序源文件大小的限制是",
"如无另行说明，评测系统中对程序使用内存的限制是",
"Linux下的换行字符为",
"终止一个失去响应的进程（$pid代表进程号）的命令是",
"Linux中是否区分文件和目录名称的大小写",
"选手在NOI机试过程中是否禁止使用网络",
"为程序my.c创建一个备份myc.bak时，使用的命令是",
"在Anjuta中调试程序，继续执行的快捷键是",
"在Lazarus中开始运行程序的快捷键是",
"在Anjuta中调试程序，单步运行(Step over)的快捷键是",
"在Lazarus中调试程序，单步运行(Step over)的快捷键是",
"调试程序的方法有",
"如果需要在Lazarus中使用单步调试，则需要",
"在考试过程中，如果出现系统死机或者崩溃现象，选手应当采取的措施是",
"提交的答案程序中如果包含NOI考试明确禁止使用的代码，后果是",
"NOI比赛使用的Linux发行版是",
"对评测结果有疑义，需要申请复评，则",
"复评成绩较原始成绩有变化，则",
"Pascal中integer和long integer类型的长度和编译选项是否有关系",
"NOI考试对C++语言模板的使用有限制吗",
"NOI考试对PASCAL语言的使用有限制吗",
"名为FILE的文件和名为File的文件在Linux系统中被认为是",
"目录DIRECT和目录Direct在Linux系统中被认为是",
"在NOI正式考试中如何登录自己的比赛用机",
"如果考试分多日进行，那么选手的考试账户和口令",
"考试结束后，应如何处理密码条",
"选手答案文件保存的目录是",
"选手答案的文件名要求是",
"选手答案的文件名大小写错误，成绩会怎样",
"选手提交的源代码文件名是否有特殊要求",
"在NOI考试中，Pascal源文件的扩展名规定为",
"在NOI考试中，C源文件的扩展名规定为",
"在NOI考试中，C++源文件的扩展名规定为",
"发现鼠标或其他硬件设备有问题，选手可以",
"对试题理解有问题，选手可以",
"考试结束后选手需要",
"复评结束后是否还能提交复评申请",
"测试点时间限制的含义是指",
"什么情况下选手可以申请延长考试时间",
"考试中选手自行重新启动机器，能否获得加时",
"草稿纸用完了，如何处理",
"水喝完了，如何处理",
"考试太简单，能提前离开吗?",
"离开考场后，发现还有个问题没改，能回去再改吗?",
"考试中机器突然没响应了，如何处理?",
"考试中发现登录名和密码的单子丢了，如何处理",
"复评的时候忘记登录名和密码了，如何处理?",
"在监考人员宣布NOI机试开始之前，是否允许选手登录系统和翻阅试卷",
"在NOI系列考试中，如果由于文件名不正确导致被判分，提出复评请求，会被接受吗",
"在NOI系列考试中，如果由于文件目录名不正确导致被判分，提出复评请求，会被接受吗",
"在NOI系列考试中，如果由于文件保存路径不正确导致被判分，提出复评请求，会被接受吗",
"Lazarus是可以支持多窗口编辑的IDE吗",
"Anjuta是可以支持多窗口编辑的IDE吗",
"选手可以不使用IDE环境编辑程序源代码吗",
"选手回答填空题，提交的答案中可以包含引号吗",
"在NOI上机考试中，允许选手使用的编程语言包括",
"NOI比赛的题目类型有",
"选手比赛中提交的有效文件类型有",
"选手提交的程序不得进行的操作包括",
"以修改过的程序或答案为依据的申诉是否会被受理",
"没有复测结果支持的申诉是否会被受理",
"超过申诉时间的申诉是否会被受理",
"遇到哪些情况可以向工作人员申请加时补偿。",
"考试时若遇到计算机硬件故障或操作系统死机，应如何处理",
"选手进入考场可以携带的物品是",
"选手进入考场不可以携带的物品是",
"竞赛组织者将在竞赛场地为选手提供的物品是",
"选手在复评过程中，若因丢失密码条而向工作人员索取密码，将被扣多少分",
"选手程序在某测试点上的运行时间仅比时限多0.005秒，算不算超时",
"NOI比赛中，选手的哪些行为是禁止的",
"在评测考生答案时，如果某测试点的运行内存超过内存限制，则",
"考试过程中如果考生之间互相讨论，将会",
"一个完整的计算机系统应包括",
"目前微型计算机中采用的逻辑组件是",
"软件与程序的区别是",
"IT表示",
"计算机中央处理器简称为",
"计算机内存储器的作用是用来。",
"用来全面管理计算机硬件和软件资源的软件叫",
"LAN是指",
"在微机中，bit的中文含义是",
"计算机所能辨认的最小信息单位是",
"ASCII的含义是",
"在计算机术语中经常用RAM表示",
"RAM存储器在断电后，其中的数据是否会变化",
"ROM存储器在断电后，其中的数据是否会变化",
"现代计算机所应用的存储程序原理是谁提出的",
"计算机内所有的信息都是以什么形式表示的",
"计算机直接识别和执行的语言是",
"Linux是一个开源的操作系统，意思是",
"NOI的中文意思是",
"字长为32bit的计算机,表示它能作为一个整体进行传送的数据长度可为几个字节",
"一个字节由相邻的几个二进制位组成。",
"二进制数“10”化为十进制数是。",
"与十六进制数（AB）等值的二进数是",
"Linux中查看当前路径使用的命令是",
"在Linux下建立目录使用的命令是",
"NOI比赛中提供的PascalIDE环境有",
"NOI比赛中提供的C++IDE环境除了GUIDE之外，还有",
"NOI比赛中提供的编程工具除了GUIDE、Lazarus、Anjuta等IDE环境之外，还可以使用的编程工具有",
"NOI比赛每场上机考试的比赛时间是几小时",
"首届NOI是哪一年举办的",
"今年是第几届NOI",
"今年是第几届IOI",
"第12届IOI是哪一年在北京举办的"
};

char ans[150][1001] = {
"linux",
"mv <旧文件名> <新文件名>",
"cd..",
"rm -r test",
"./a.out",
"源程序",
"gdb",
"可以",
"killall test",
"ls -a",
"gcc",
"fpc",
"g++",
"ls > tmp",
"time ./test",
":q!",
":wq、ZZ、:x",
":12",
"/12",
"-g",
"-Wall",
"-c",
"-o",
"-lm",
"root",
"Ctrl + Alt + F[1-6]",
"Ctrl + Alt + F7",
"bash",
"ps",
"ps",
"Ctrl + C",
"./a.out < 1.in",
"./prog_1 > 1.out",
"文件系统损坏",
"ls -l",
"foobar.sh",
"小于100KB",
"以硬件资源为限",
"\\n",
"kill $pid",
"是",
"是",
"cp my.c myc.bak",
"F4",
"F9",
"F6",
"F8",
"单步调试、使用 print 类语句打印中间结果、读源代码",
"在 Environment -> Debugger Options 中配置",
"举手示意监考人员处理",
"本成绩以0分计算",
"NOI Linux",
"提出书面申请，并经领队及有关工作人员及科学委员会主席签字确认后，再提交至评测人员",
"以复评成绩为准",
"有关系",
"没有",
"有",
"不同的文件",
"不同的目录",
"使用考前工作人员下发的账户及密码",
"由工作人员在每场考试开始前下发",
"保存好密码条，用于复测",
"选手目录下和考题名称相同的目录",
"和试卷的题目摘要中所示文件名一致",
"0分",
"源程序文件名由试题名称缩写加后缀构成，试题名称缩写及后缀一律使用小写",
"pas",
"c",
"cpp",
"请工作人员更换",
"举手向工作人员求助",
"迅速离开",
"不能",
"题目允许程序运行所占用的用户时间总和的上限值",
"机器出现故障，并由工作人员确认和记录",
"否",
"举手向监考人员求助",
"举手向工作人员再要一瓶",
"能",
"不能",
"举手向监考人员求助",
"请工作人员处理，并需承担总成绩扣分的处罚",
"请工作人员处理，并需承担总成绩扣分的处罚",
"否",
"不会",
"不会",
"不会",
"是",
"是",
"可以",
"不可以",
"C、C++、Pascal",
"非交互式程序题、交互式程序题、答案提交题",
"答案文件、源程序",
"试图访问网络、使用 fork 或其它线程/进程生成函数、打开或创建题目规定的输入/输出文件之外的其它文件、运行其它程序",
"否",
"否",
"否",
"计算机硬件故障，并由工作人员确认和记录；操作系统死机，并由工作人员确认和记录",
"举手向工作人员求助",
"笔、手表",
"纸、U盘、手机、笔记本",
"草稿纸、饮用水、食品",
"5分",
"算",
"在监考人员宣布 NOI 机试开始之前翻看试题；在监考人员宣布 NOI 机试开始之前登陆系统；在监考人员宣布 NOI 机试开始之前触摸键盘、鼠标等外设；使用网络",
"程序不能正常运行，该测试点得0 分",
"取消考生的考试资格",
"硬件系统和软件系统",
"大规模和超大规模集成电路",
"软件是程序以及开发、使用和维护所需要的所有文档的总称,而程序是软件的一部分",
"信息技术",
"CPU",
"存放当前 CPU 正在使用的程序和数据",
"操作系统",
"局域网",
"二进制位",
"位",
"美国信息交换标准代码",
"随机存取存储器",
"是",
"否",
"冯·诺依曼",
"二进制数码",
"机器语言",
"源码可以免费获得",
"全国青少年信息学奥林匹克竞赛",
"4",
"8",
"2",
"10101011",
"pwd",
"mkdir",
"GUIDE、Lazarus",
"Anjuta",
"Vim、Gedit",
"5",
"1984",
"35",
"30",
"2000"
};

char pass[5]={"pass"};

int ac[250],ac1[250],ac2[250],ta1,ta2;
queue<int>wa;
int tot,vs[200],tail=140;

int get_pro(){
	int val=rand()%100;
	int tar = rand() % 141;
	tot++;
	if(tot<60)
	{
		tar=rand()%(tail+1);
		swap(vs[tar],vs[tail]);
		tar=vs[tail--];
		return tar;
	}
	if(val>=50&&!wa.empty())
	{
		tar=wa.front();
		wa.pop();
	}
	else if(val>=20&&tail!=-1)
	{
		tar=rand()%(tail+1);
		swap(vs[tar],vs[tail]);
		tar=vs[tail--];
	}
	else if(val>=5&&ta1)
	{
		tar=rand()%ta1;
		swap(vs[tar],vs[ta1-1]);
		tar=vs[--ta1];
	}
	else if(val<5&&ta2)
	{
		tar=rand()%ta2;
		swap(vs[tar],vs[ta2-1]);
		tar=vs[--ta2];
	}
	return tar;
}

char res[1000];

char stop[50] = {"stop"};

bool cmp(char *tar) {
	for(int i=0,j=0; tar[i]||res[j];i++,j++) {
		while(tar[i]==' ') i++;
		while(res[j]==' ') j++;
		if(tar[i] != res[j])
		{
			if(tar[i]-'A' == res[j]-'a' || tar[i]-'a' == res[j]-'A') continue; 
			if((int)tar[i++] == -95 /*(、)*/&& (res[j] == ',' || (int)res[++j] == -84 /*(，)*/)) continue; 
			return false;
		}
	}
	return true;
}

void get_line(char *tar) {
	char tmp = getchar();
	while(tmp == '\n') tmp = getchar();
	int i = 0;
	while(tmp != '\n') {
		tar[i++] = tmp;
		tmp = getchar();
	}
}



int main() {
	srand((unsigned)time(NULL));
	for(int i=0;i<200;++i) vs[i]=i;
	while(true) {
		printf("-*- 赶制，质量捉急，将就一下用吧.. -*-\n");
		printf("输入stop停止，输入回车继续\n");
		puts("如果您觉得这题太弱辣，请直接输出pass\n");
		int pro = get_pro();
		cout << que[pro] << endl;
		for(int i=0;i<500;++i) res[i]='\0';
		get_line(res);
		if(cmp(stop)) break;
		if(cmp(ans[pro])||cmp(pass)) {
			if(ac[pro]==-1) ac[pro]=1;
			else ac[pro]++;
			if(ac[pro]==1) ac1[ta1++]=pro;
			else if(ac[pro]==2) ac2[ta2++]=pro;
			printf("AC\n");
		} else {
			ac[pro]=-1;
			wa.push(pro);
			printf("WA\n");
		}
		printf("正确答案是:\n");
		cout << ans[pro] << endl;
		getchar();
		system("cls");
	}
	return 0;
}
