//
#ifndef TSCReturnPushCoordinator_h
#define TSCReturnPushCoordinator_h
@import Foundation;

@class NSObject;

@interface TSCReturnPushCoordinator : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 defaults;
    @40@0:8:16@24@32 account;
    @40@0:8:16@24@32 armedTrigger;
}

/* class methods */
+ (id)shared;

/* instance methods */
- (void)applicationDidEnterBackgroundWhileComposingForAccount:(id)account;
- (void)applicationDidEnterBackground;
- (void)applicationDidBecomeActive;
- (id)init;

@end

#endif /* TSCReturnPushCoordinator_h */
