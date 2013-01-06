//
//  GameObject.h
//  ShanzhaiGrandmother
//
//  Created by Justin on 13-1-6.
//
//

#import "CCNode.h"

@interface GameObject : CCNode
{
    BOOL isScheduledForRemove;
}


@property (nonatomic, assign) BOOL isScheduledForRemove;
@property (nonatomic, readonly) float radius;

- (void) update;
- (void) handleCollisionWith:(GameObject *) gameObject;

@end
