#ifndef WORLD_H
#define WORLD_H

#include"Vector2.h"
#include"Body.h"
#include<vector>
#include<array>
#include<map>

//namespace{}
class World{
    public:
        Vector2 gravity;
        float time_step;
        //世界物体
        //考虑以基类的vector储存，或者其他不用定义各种不同形状的方式
        //vector<Body*> bodies?区别
        std::vector<Body> bodies;

    public:
        World():gravity(Vector2(0,0)),time_step(0.1){}
        ~World()=default;
        void SetGravity();
        void AddBody();
        void Clear();
        void Step(float dt);


};

#endif