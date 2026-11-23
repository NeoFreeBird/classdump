//
#ifndef T1ImmersiveFeedPrecacher_h
#define T1ImmersiveFeedPrecacher_h
@import Foundation;

@class NSObject;

@interface T1ImmersiveFeedPrecacher : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *_cachedImmersiveFeed;
    NSNumber"16@0:8 *_isActive;
    NSNumber"16@0:8 *_timer;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)getCachedImmersiveFeed:(id)feed;
- (void)precacheImmersiveFeed:(id)feed;
- (void)_handleAccountSwitch;
- (id)init;

@end

#endif /* T1ImmersiveFeedPrecacher_h */
