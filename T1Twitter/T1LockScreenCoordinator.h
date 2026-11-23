//
#ifndef T1LockScreenCoordinator_h
#define T1LockScreenCoordinator_h
@import Foundation;

#include "T1LockScreenManager.h"

@class NSObject;

@interface T1LockScreenCoordinator : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *managerQueue;
    NSNumber"16@0:8 *managers;
    NSNumber"16@0:8 *activeManager;
}

@property (nonatomic, readonly) T1LockScreenManager *currentManager;

/* class methods */
+ (id)shared;

/* instance methods */
- (id)init;
- (void)audioRouteDidChange:(id)change;
- (id)ensureManagerForPlayer:(id)player model:(id)model;
- (void)register:(id)_register;
- (void)unregister:(id)unregister;
- (id)managerForPlayer:(id)player;
- (void)setDelegate:(id)delegate forPlayer:(id)player;

@end

#endif /* T1LockScreenCoordinator_h */
