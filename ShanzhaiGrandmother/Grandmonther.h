//
//  Grandmonther.h
//  ShanzhaiGrandmother
//
//  Created by Justin on 13-1-6.
//
//

#import "GameObject.h"
typedef enum {
    TOOTH, //假牙
    GUN,   //枪
    SHELL  //盾牌
} BuffType;



@interface Grandmonther : GameObject
{
    NSArray *buffArray;  //老奶奶身上拥有的buff
}

@property (nonatomic, copy) NSArray *buffArray;


@end
