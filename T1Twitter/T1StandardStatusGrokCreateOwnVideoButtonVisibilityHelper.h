//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
