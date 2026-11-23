//
#ifndef T1StandardStatusGrokCreateOwnVideoButtonVisibilityHelper_h
#define T1StandardStatusGrokCreateOwnVideoButtonVisibilityHelper_h
@import Foundation;

@class NSObject;

@interface T1StandardStatusGrokCreateOwnVideoButtonVisibilityHelper : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *timelineCache;
    NSNumber"16@0:8 *focalCache;
}

/* class methods */
+ (id)shared;

/* instance methods */
- (id)init;
- (void)resetCache;
- (long long)createOwnVideoButtonModeForViewModel:(id)model displaySurface:(long long)surface;

@end

#endif /* T1StandardStatusGrokCreateOwnVideoButtonVisibilityHelper_h */
