//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TASActionService_h
#define TASActionService_h
@import Foundation;

@class NSObject;

@interface TASActionService : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 serviceLocator;
    B24@0:8@"NSString"16 actionsQueue_submittedActions;
    B24@0:8@"NSString"16 actionsQueue_startedActions;
    B24@0:8@"NSString"16 actionsQueue_deactivated;
    B24@0:8@"NSString"16 actionsQueue;
    B24@0:8@"NSString"16 observers;
    B24@0:8@"NSString"16 observersQueue;
}

/* class methods */
+ (id)configuration;

/* instance methods */
- (id)initWithServiceLocator:(id)locator;
- (void)addActionObserver:(id)observer retentionPolicy:(long long)policy;
- (void)removeActionObserver:(id)observer;
- (id)init;

@end

#endif /* TASActionService_h */
