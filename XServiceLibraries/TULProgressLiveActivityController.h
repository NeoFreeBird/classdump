//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TULProgressLiveActivityController_h
#define TULProgressLiveActivityController_h
@import Foundation;

@class NSObject;

@interface TULProgressLiveActivityController : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 activityType;
    B24@0:8@"NSString"16 observers;
    B24@0:8@"NSString"16 internalState;
    B24@0:8@"NSString"16 currentActivityHolder;
    B24@0:8@"NSString"16 _inProgressTitle;
    B24@0:8@"NSString"16 numberOfConcurrentOperations;
}

/* class methods */
+ (id)makeActivityWithType:(long long)type;
+ (void)removeCurrentActivities;

/* instance methods */
- (void)dealloc;
- (void)registerObserver:(id)observer;
- (void)unregisterObserver:(id)observer;
- (void)startProgress;
- (void)finishProgressWithSuccessWidgetURL:(id)url;
- (void)failProgress;
- (void)cancelProgress;
- (void)updateActivityWithProgress:(double)progress;
- (void)updateActivityWithProgress:(double)progress inProgressTitle:(id)title;
- (void)executionPaused;
- (void)executionResumed;
- (void)applicationDidBecomeActive;
- (void)applicationWillTerminate;
- (id)init;

@end

#endif /* TULProgressLiveActivityController_h */
