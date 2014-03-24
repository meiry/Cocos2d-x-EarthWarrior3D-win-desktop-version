//
//  Bullet.h
//  Moon3d
//
//  Created by Hao Wu on 3/4/14.
//
//
// version ported to win32 by meir yanovich email : meiry242@gmail.com
#ifndef __Moon3d__Bullet__
#define __Moon3d__Bullet__

#include "cocos2d.h"
#include "GameEntity.h"



class Bullet : public GameEntity
{
public:
    CREATE_FUNC(Bullet);
    bool init();
    void setVector(Point vec);
    Point getVector();
    virtual void reset();
    CC_SYNTHESIZE(float, _damage, Damage);
    CC_SYNTHESIZE(int, _owner, Owner)
protected:
    Point _vector;
};

class PlayerBullet : public Bullet
{
public:
    CREATE_FUNC(PlayerBullet);
    bool init();
};

class Missile : public Bullet
{
public:
    CREATE_FUNC(Missile);
    bool init();
    void update(float dt);
    //CC_SYNTHESIZE(GameEntity*, _target, Target)
	GameEntity* getTarget();
	void setTarget(GameEntity* var);
    virtual void reset();
protected:
	GameEntity* _target;
    float _accel;
    float _turnRate;
    //float _maxSpeed = 100;
    float _yRotSpeed;
    float _yRotation;
    bool _left;
    float _velocity;
};

#endif /* defined(__Moon3d__Bullet__) */
