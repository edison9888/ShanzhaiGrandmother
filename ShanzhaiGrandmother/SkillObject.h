//
//  SkillObject.h
//  ShanzhaiGrandmother
//
//  Created by Justin on 13-1-6.
//
//

#import "GameObject.h"


typedef enum {
    FIRE,
    ICE,
    TANK
} SkillType;


@interface SkillObject : GameObject
{
    SkillType skillType;
}

@property(nonatomic, assign) SkillType skillType;



@end
