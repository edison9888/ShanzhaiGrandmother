//
//  CoinObject.h
//  ShanzhaiGrandmother
//
//  Created by Justin on 13-1-6.
//
//

#import "GameObject.h"

typedef enum{
    COIN_SMALL, //小钱
    COIN_BIG    //大钱
}CoinType;

@interface CoinObject : GameObject
{
    CoinType coinType;
}

@property CoinType coinType;

@end
