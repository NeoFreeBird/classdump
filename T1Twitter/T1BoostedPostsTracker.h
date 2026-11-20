//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1BoostedPostsTracker_h
#define T1BoostedPostsTracker_h
@import Foundation;

@class NSObject;

@interface T1BoostedPostsTracker : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *checkedAccountIDs;
    NSNumber"16@0:8 *didStart;
}

/* class methods */
+ (void)setupWithCurrentAccount:(id)account;

/* instance methods */
- (void)activeAccountDidBecomeActive:(id)active;
- (void)promotionDidSucceed:(id)succeed;
- (id)init;

@end

#endif /* T1BoostedPostsTracker_h */
