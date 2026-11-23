//
#ifndef T1URTAccountEncodingPolicySynchronizer_h
#define T1URTAccountEncodingPolicySynchronizer_h
@import Foundation;

@class NSObject;

@interface T1URTAccountEncodingPolicySynchronizer : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *activeAccountObserver;
    NSNumber"16@0:8 *accountRemovedObserver;
    NSNumber"16@0:8 *profileTimelineInvalidator;
}

/* class methods */
+ (id)sharedSynchronizer;
+ (void)prepareCacheConfig;

/* instance methods */
- (id)init;
- (void)dealloc;

@end

#endif /* T1URTAccountEncodingPolicySynchronizer_h */
