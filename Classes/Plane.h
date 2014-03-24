//
//  Plane.h
//  Moon3d
//
//  Created by Rye on 14-3-13.
//
//
// version ported to win32 by meir yanovich email : meiry242@gmail.com
#ifndef __Moon3d__Plane__
#define __Moon3d__Plane__

#include <iostream>
#include "cocos2d.h"
#include "GameEntity.h"

class Plane :public GameEntity{
public:
	Plane();
    CREATE_FUNC(Plane);
    bool init();
private:
    float pRate;
    float originX;
    float originY;
    float originZ;
    const float pXW ;
    const float pYW ;
    const float pZW ;
    const float pXA ;
    const float pYA ;
    const float pZA ;
    
    void update(float dt);
};

#endif /* defined(__Moon3d__Plane__) */
