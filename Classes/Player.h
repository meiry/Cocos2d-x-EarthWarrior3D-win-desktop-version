//
//  Player.h
//  Moon3d
//
//  Created by Hao Wu on 2/27/14.
//
//
// version ported to win32 by meir yanovich email : meiry242@gmail.com
#ifndef __Moon3d__Player__
#define __Moon3d__Player__

#include "cocos2d.h"
#include "AirCraft.h"


USING_NS_CC;

class Player : public AirCraft
{
public:
	Player();
    CREATE_FUNC(Player);
    bool init();
    virtual bool onTouchBegan(Touch *touch, Event *event);
    virtual void onTouchMoved(Touch *touch, Event *event);
    virtual void onTouchEnded(Touch *touch, Event *event);
    void update(float dt);
    
    const float rollSpeed;// recommended 1.5
    const float returnSpeed;// recommended 4
    const float maxRoll;
    const float rollReturnThreshold;
    void setTargetAngle(float angle){targetAngle = angle;};
    void setTargetPos(Point target){targetPos = target;};
    
    void shoot(float dt);
    void shootMissile(float dt);
    void stop();
    CC_SYNTHESIZE(MotionStreak*, _streak, Trail);
    CC_SYNTHESIZE(ParticleSystemQuad*, _emissionPart, EmissionPart);
    void setPosition(Point pos);
    virtual bool hurt(float damage);
    virtual void die();
    void hideWarningLayer();
protected:
    float targetAngle;
    Point targetPos;
    Point _trailOffset;
    
};


#endif /* defined(__Moon3d__Player__) */
