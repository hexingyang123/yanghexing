/*****************************************************************************************************************
Author:�����
class����1604-2��
number��20163792
Data��2019/6/14
Description�������������㣬�ж��Ƿ�����������Σ����ܣ����ж���ɵ�����������ͨ�����λ�������������
*******************************************************************************************************************/
#ifndef point_H  //#define��������ֹͷ�ļ����ظ�����
#define point_H
#include<iostream>
using namespace std;
//point
class point{//�����ඨ��
 public://������
  point(void);//���캯��
  ~point(void);//��������
  void in_put();//�������꺯��
  double x1,x2,x3;//�������������
  double y1,y2,y3;//��������������
};
//triangle
class triangle{//���ඨ��
 public://������
  void lenth(point&);//����߳�
  void compare();//�Ƚϱ߳�
 private://˽����
  double AB,AC,BC;//������������
  double AB2,AC2,BC2;//�����������ߵ�ƽ��
};

#endif//point_H