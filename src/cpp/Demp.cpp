#include"Body.h"
//TODO
//reference https://box2d.org/publications/
//Body 细分、多继承
//Vector2 改写为模板类
//增加顶级域名
//World vector<*>重写、用智能指针
//抖动处理
//World Add 写成模板函数，增加各种物体
// 对象池、线程池、内存管理
// opencv/openGL draw系统
// 让joint继承于Body？
// Body扩展至刚体以外的总体属性
// 用父子关系定义Contact是否合适
// AABB设计在Body中？
// 不规则图形碰撞算法、与圆碰撞？边、点计算？
// 设计模式的加入
// 像box2dDef一样派生
// 改进Joint 的设定，如何真正连接两个物体？
// 四叉树、AABB算法、网格算法、GJK
// https://www.cnblogs.com/KillerAery/p/10878367.html
// EPA https://zhuanlan.zhihu.com/p/178841676
int main(){
    RotMatrix x(30);
    cout<<x.col1.x<<" "<<x.col2.x;
    return 0;
}