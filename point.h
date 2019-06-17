/*****************************************************************************************************************
Author:杨鹤星
class：信1604-2班
number：20163792
Data：2019/6/14
Description：输入三个顶点，判定是否能组成三角形，若能，则判定组成的三角形是普通三角形还是特殊三角形
*******************************************************************************************************************/
#ifndef point_H  //#define保护，防止头文件被重复包含
#define point_H
#include<iostream>
using namespace std;
//point
class point{//顶点类定义
 public://公有类
  point(void);//构造函数
  ~point(void);//析构函数
  void in_put();//输入坐标函数
  double x1,x2,x3;//三个顶点横坐标
  double y1,y2,y3;//三个顶点纵坐标
};
//triangle
class triangle{//边类定义
 public://公有类
  void lenth(point&);//计算边长
  void compare();//比较边长
 private://私有类
  double AB,AC,BC;//三角形三条边
  double AB2,AC2,BC2;//三角形三条边的平方
};

#endif//point_H