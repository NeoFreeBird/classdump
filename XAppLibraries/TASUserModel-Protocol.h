//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TASUserModel_Protocol_h
#define TASUserModel_Protocol_h
@import Foundation;

#include "TFSTwitterCanonicalUser-Protocol.h"
#include "TUIAvatarImageViewModel.h"

@class NSNumber, NSString, TFSTwitterUserReference;

@protocol TASUserModel

@required

@property (nonatomic, readonly) id <TFSTwitterCanonicalUser> user;
@property (nonatomic, readonly) TFSTwitterUserReference *userReference;
@property (nonatomic, readonly) long long communityRoleObjC;
@property (nonatomic, readonly) NSString *communityRoleString;
@property (nonatomic) _Bool communityEnabled;
@property (nonatomic, readonly) TUIAvatarImageViewModel *avatarViewModel;
@property (nonatomic, readonly) NSString *status;
@property (nonatomic, readonly) NSNumber *audioLevel;
@property (nonatomic, readonly) _Bool isBlocked;
@property (nonatomic, readonly) _Bool isCreator;
@property (nonatomic, readonly) _Bool isAdmin;
@property (nonatomic, readonly) _Bool isSpeaker;
@property (nonatomic, readonly) _Bool isTalking;
@property (nonatomic, readonly) _Bool isCalling;
@property (nonatomic, readonly) _Bool isConnecting;
@property (nonatomic, readonly) _Bool isMuted;
@property (nonatomic, readonly) _Bool isFollowed;
@property (nonatomic, readonly) NSString *raisedHandEmoji;
@property (nonatomic, readonly) _Bool canUsePrivateEmojis;

/* required instance methods */
- (void)addUserModelObserver:(id)observer;
- (void)removeUserModelObserver:(id)observer;

@optional

@end

#endif /* TASUserModel_Protocol_h */
