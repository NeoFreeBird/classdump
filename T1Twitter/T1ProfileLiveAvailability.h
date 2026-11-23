//
#ifndef T1ProfileLiveAvailability_h
#define T1ProfileLiveAvailability_h
@import Foundation;

@class NSObject;

@interface T1ProfileLiveAvailability : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *state;
}

@property (nonatomic) _Bool hasLivePosts;

/* instance methods */
- (id)initWithAccount:(id)account;
- (void)loadIfNeededWithUserID:(long long)id onInvalidate:(id /* block */)invalidate;
- (id)init;

@end

#endif /* T1ProfileLiveAvailability_h */
