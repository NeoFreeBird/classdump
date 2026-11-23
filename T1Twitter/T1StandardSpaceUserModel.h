//
#ifndef T1StandardSpaceUserModel_h
#define T1StandardSpaceUserModel_h
@import Foundation;

#include "TASUserModel-Protocol.h"
#include "TFSTwitterCanonicalUser-Protocol.h"

@class NSHashTable, NSNumber, NSObject, NSString, PTVGuestRoomUser, TFSTwitterUserReference, TUIAvatarImageViewModel;

@interface T1StandardSpaceUserModel : NSObject <TASUserModel>

@property (readonly, nonatomic) NSHashTable *observers;
@property (readonly, nonatomic) _Bool shouldNotifyObservers;
@property (readonly, nonatomic) _Bool observingGuestRoomUserKeyValue;
@property (retain, nonatomic) id <TFSTwitterCanonicalUser> user;
@property (retain, nonatomic) PTVGuestRoomUser *guestRoomUser;
@property (readonly, nonatomic) TFSTwitterUserReference *userReference;
@property (readonly, nonatomic) long long communityRoleObjC;
@property (readonly, copy, nonatomic) NSString *communityRoleString;
@property (nonatomic) _Bool communityEnabled;
@property (readonly, nonatomic) TUIAvatarImageViewModel *avatarViewModel;
@property (readonly, copy, nonatomic) NSString *status;
@property (readonly, nonatomic) NSNumber *audioLevel;
@property (readonly, nonatomic) _Bool isBlocked;
@property (readonly, nonatomic) _Bool isCreator;
@property (readonly, nonatomic) _Bool isAdmin;
@property (readonly, nonatomic) _Bool isSpeaker;
@property (readonly, nonatomic) _Bool isTalking;
@property (readonly, nonatomic) _Bool isCalling;
@property (readonly, nonatomic) _Bool isConnecting;
@property (readonly, nonatomic) _Bool isMuted;
@property (readonly, nonatomic) _Bool isFollowed;
@property (readonly, copy, nonatomic) NSString *raisedHandEmoji;
@property (readonly, nonatomic) _Bool canUsePrivateEmojis;

/* instance methods */
- (id)init;
- (id)initWithGuestRoomUser:(id)user user:(id)user;
- (void)dealloc;
- (void)_t1_addGuestRoomUserKeyValueObserver;
- (void)_t1_removeGuestRoomUserKeyValueObserver;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (_Bool)isFollowing;
- (void)addUserModelObserver:(id)observer;
- (void)removeUserModelObserver:(id)observer;
- (void)_t1_notifyWithBlock:(id /* block */)block;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)equal;
- (_Bool)isEqualToUserModel:(id)model;

@end

#endif /* T1StandardSpaceUserModel_h */
