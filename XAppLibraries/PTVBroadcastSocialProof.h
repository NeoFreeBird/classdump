//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVBroadcastSocialProof_h
#define PTVBroadcastSocialProof_h
@import Foundation;

@class NSArray, NSObject, NSString;

@interface PTVBroadcastSocialProof : NSObject

@property (readonly, nonatomic) NSString *sharedByDisplayName;
@property (readonly, nonatomic) NSArray *currentFollowingGuestsNames;
@property (readonly, nonatomic) NSArray *pastFollowingGuestsNames;
@property (readonly) _Bool broadcastEnded;

/* class methods */
+ (id)SocialProofWithBroadcast:(id)broadcast LoggedInUser:(id)user;
+ (id)NamesFromGuestSessions:(id)sessions FollowingIdsSet:(id)set;

/* instance methods */
- (id)initWithSharedByDisplayName:(id)name currentFollowingGuestsNames:(id)names pastFollowingGuestsNames:(id)names broadcastEnded:(_Bool)ended;
- (_Bool)isEqual:(id)equal;
- (_Bool)isEqualToBroadcastSocialProof:(id)proof;

@end

#endif /* PTVBroadcastSocialProof_h */
