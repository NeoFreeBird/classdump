//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSPendingStateToken_h
#define TFSPendingStateToken_h
@import Foundation;

@class NSObject;

@interface TFSPendingStateToken : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 modelContext;
    B24@0:8@"NSString"16 pendingStateToken;
}

/* class methods */
+ (id)registerVITModeEnabledWithUserID:(long long)id modelContext:(id)context;
+ (id)registerWithProfileImageURL:(id)url profileImageShape:(long long)shape dimensions:(struct CGSize { double x0; double x1; })dimensions userID:(long long)id modelContext:(id)context;
+ (id)registerWithProfileBannerURL:(id)url dimensions:(struct CGSize { double x0; double x1; })dimensions userID:(long long)id modelContext:(id)context;
+ (id)registerWithPinnedTweetID:(long long)id userID:(long long)id modelContext:(id)context;
+ (id)registerWithNumberOfFollowersDiff:(long long)diff userID:(long long)id modelContext:(id)context;
+ (id)registerWithNumberOfFollowingDiff:(long long)diff userID:(long long)id modelContext:(id)context;
+ (id)registerWithBulkNumberOfFollowersDiff:(long long)diff userIDs:(id)ids modelContext:(id)context;

/* instance methods */
- (void)completeAndApplyPendingState:(_Bool)state;
- (void)unregisterToken;
- (void)promoteToken;
- (id)init;

@end

#endif /* TFSPendingStateToken_h */
