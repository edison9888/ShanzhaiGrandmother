//
//  EvilObject.h
//  ShanzhaiGrandmother
//
//  Created by Justin on 13-1-6.
//
//

#import "GameObject.h"

typedef enum {
    SMALL_EVIL,  //小鬼
    BIG_EVIL,    //大鬼，大鬼出现时，周围小鬼消失
    GHOST,       //小鬼魂，产生大量金币
    MIDDLE_GHOST,//中级怪，小鬼魂经过一定时间后变成
    BIG_GHOST    //扔石头的大怪，很可怕
} EvilType;



@interface EvilObject : GameObject
{
    EvilType evilType;
}

@property(nonatomic, assign) EvilType evilType;


@end
