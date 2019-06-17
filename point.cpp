#include "point.h"

point::point(void)//构造函数
{
}

point::~point(void)//析构函数
{
}
void point::in_put()//输入坐标函数
{
	cout<<"请输入A点的坐标："<<endl<<"x1:";//输出提示
	cin>>x1;//输入第一个点的横坐标
	cout<<"y1:";//输出提示
	cin>>y1;//输入第一个点的纵坐标
	cout<<"请输入B点的坐标："<<endl<<"x2:";//提示
	cin>>x2;//输入第二个点的横坐标
	cout<<"y2:";//输出提示
	cin>>y2;//输入第二个点的纵坐标
	cout<<"请输入C点的坐标："<<endl<<"x3:";//提示
	cin>>x3;//输入第三个点的横坐标
	cout<<"y3:";//输出提示
	cin>>y3;//输入第三个点的纵坐标
}
/***********************************************
输入输出：输入顶点坐标，输出各边长。
************************************************/
void triangle::lenth(point&a)//计算边长函数
{
	a.in_put();
	AB=sqrt((a.x1-a.x2)*(a.x1-a.x2)+(a.y1-a.y2)*(a.y1-a.y2)); //顶点1与顶点2距离（边长）
	AC=sqrt((a.x1-a.x3)*(a.x1-a.x3)+(a.y1-a.y3)*(a.y1-a.y3));//顶点1与顶点3距离（边长）
	BC=sqrt((a.x3-a.x2)*(a.x3-a.x2)+(a.y3-a.y2)*(a.y3-a.y2));//顶点3与顶点2距离（边长）
	AB2=(a.x1-a.x2)*(a.x1-a.x2)+(a.y1-a.y2)*(a.y1-a.y2); //AB边的平方
	AC2=(a.x1-a.x3)*(a.x1-a.x3)+(a.y1-a.y3)*(a.y1-a.y3); //AC边的平方
	BC2=(a.x3-a.x2)*(a.x3-a.x2)+(a.y3-a.y2)*(a.y3-a.y2); //BC边的平方
}

void triangle::compare()//比较边长
{
	double a,b,c;
	int x=0,y=0,z=0;
	a=AB+AC;//任意两边之和
	b=AB+BC;
	c=AC+BC;

	if(a>BC&&b>AC&&c>AB)//判断任意两边之和是否大于第三边，即是否能组成三角形
	{
		if(AB==AC&&AC==BC){
			x=1;//该三角形为等边三角形
		}else if(AB==AC||AB==BC||AC==BC){
			y=1;//该三角形为等腰三角形
		}
		if(AB2==AC2+BC2||AC2==AB2+BC2||BC2==AC2+AB2)
			z=1;//该三角形为直角三角形

		if(x==1){
			cout<<"这三个点组成等边三角形"<<endl;
		}else if(y==1&&z==0){
			cout<<"这三个点组成等腰三角形"<<endl;
		}else if(y==0&&z==1){
			cout<<"这三个点组成直角三角形"<<endl;
		}else if(y==1&&z==1){
			cout<<"这三个点组成等腰直角三角形"<<endl;
		}else
			cout<<"这三个点组成普通三角形"<<endl;
	}
	else
		cout<<"这三个点不能组成三角形"<<endl;//判断任意两边之和不大于第三边，不能组成三角形
}