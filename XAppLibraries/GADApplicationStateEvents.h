//
#ifndef GADApplicationStateEvents_h
#define GADApplicationStateEvents_h
@import Foundation;

#include "GADObserverCollection.h"

@class NSObject;

@interface GADApplicationStateEvents : NSObject {
    /* instance variables */
    GADObserverCollection *_observers;
}

@property (readonly, nonatomic) _Bool applicationInBackground;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)handleWillEnterForeground;
- (void)handleDidEnterBackground;

@end

#endif /* GADApplicationStateEvents_h */
