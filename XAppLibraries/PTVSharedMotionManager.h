//
#ifndef PTVSharedMotionManager_h
#define PTVSharedMotionManager_h
@import Foundation;

#include "PTVWeakSet.h"

@class CMMotionManager, NSObject, NSOperationQueue;

@interface PTVSharedMotionManager : NSObject {
    /* instance variables */
    PTVSharedMotionManager *_weakSelf;
    NSOperationQueue *_sharedMotionQueue;
    CMMotionManager *_motionManager;
}

@property (retain, nonatomic) PTVWeakSet *sharedObservers;

/* class methods */
+ (id)SharedMotionManager;

/* instance methods */
- (id)init;
- (_Bool)isGyroAvailable;
- (void)addDeviceMotionUpdatesObserver:(id)observer withUpdateInterval:(double)interval;
- (void)didReceiveMotionUpdate:(id)update withError:(id)error;
- (void)removeDeviceMotionUpdatesObserver:(id)observer;
- (_Bool)hasDeviceMotionObservers;
- (void)stopMonitoringDeviceUpdatesIfNeeded;

@end

#endif /* PTVSharedMotionManager_h */
