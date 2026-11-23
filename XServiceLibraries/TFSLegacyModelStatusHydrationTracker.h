//
#ifndef TFSLegacyModelStatusHydrationTracker_h
#define TFSLegacyModelStatusHydrationTracker_h
@import Foundation;

@class NSObject;

@interface TFSLegacyModelStatusHydrationTracker : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 statusUserIDs;
    B24@0:8@"NSString"16 userIDs;
}

/* instance methods */
- (id)init;
- (void)addStatusWithUserID:(long long)id retweetedUserID:(long long)id quotedUserID:(long long)id;
- (long long)userIDForIndex:(long long)index;
- (long long)retweetedUserIDForIndex:(long long)index;
- (long long)quotedUserIDForIndex:(long long)index;

@end

#endif /* TFSLegacyModelStatusHydrationTracker_h */
