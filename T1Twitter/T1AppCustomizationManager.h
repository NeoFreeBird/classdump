//
#ifndef T1AppCustomizationManager_h
#define T1AppCustomizationManager_h
@import Foundation;

@class NSObject;

@interface T1AppCustomizationManager : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *notificationCenter;
    NSNumber"16@0:8 *isCustomIconEnabled;
    NSNumber"16@0:8 *isCustomPrimaryColorEnabled;
    NSNumber"16@0:8 *customIconConfigs;
    NSNumber"16@0:8 *customPrimaryColorConfigs;
    NSNumber"16@0:8 *accountsPendingCustomIconConfigUpdate;
    NSNumber"16@0:8 *accountsPendingCustomPrimaryColorConfigUpdate;
    NSNumber"16@0:8 *lastEvent;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)accountWasRemovedWithNotification:(id)notification;
- (void)twitterDidFinishStartingWithNotification:(id)notification;

@end

#endif /* T1AppCustomizationManager_h */
