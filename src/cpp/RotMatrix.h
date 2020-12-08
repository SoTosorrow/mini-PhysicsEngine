#ifndef ROTMATRIX_H
#define ROTMATRIX_H

#include<cmath>
#include "Vector2.h"

class RotMatrix{

    public:
        //TODO: 为什么是列向量
        Vector2 col1;
        Vector2 col2;
    public:
        RotMatrix()=default;
        RotMatrix(float angle){
            float cos_ = cosf(angle);
            float sin_ = sinf(angle);
            //TODO
            //这样写是什么用途？会不会导致new对象不回收？用智能new呢？
            //col1=new Vector2(cos_,sin_);
            col1=Vector2(cos_,sin_);
            col2=Vector2(-sin_,cos_);
        }
        RotMatrix(const Vector2& v1,const Vector2& v2)
            :col1(v1),col2(v2){}
        ~RotMatrix()=default;

        RotMatrix Transpose(){
            return RotMatrix(Vector2(col1.x, col2.x), Vector2(col1.y, col2.y));
        }
        RotMatrix Invert(){
            float a=col1.x,b=col2.x;
            float c=col1.y,d=col2.y;
            RotMatrix temp;
            //cross Vector
            float dot = a*d - b*c;
            //assert(dot!=0.0f);
            dot = 1.0f/dot;
            temp.col1.x = dot*d;
            temp.col1.y = -1*dot*c;
            temp.col2.x = -1*dot*b;
            temp.col2.y = dot*a;
            return temp;
        }
};

#endif