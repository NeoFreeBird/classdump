//
#ifndef PTVUser_h
#define PTVUser_h
@import Foundation;

#include "PTVProfileImageEntity-Protocol.h"

@class NSArray, NSNumber, NSObject, NSSet, NSString;

@interface PTVUser : NSObject <PTVProfileImageEntity> {
    /* instance variables */
    id _weakSelf;
}

@property (retain, nonatomic) NSString *remoteID;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *display_name;
@property (retain, nonatomic) NSString *twitter_id;
@property (retain, nonatomic) NSString *twitter_user_name;
@property (nonatomic) _Bool has_digits_id;
@property (retain, nonatomic) NSString *user_description;
@property (retain, nonatomic) NSSet *followers;
@property (retain, nonatomic) NSSet *following;
@property (retain, nonatomic) NSString *accountCreatedAt;
@property (retain, nonatomic) NSArray *profile_image_urls;
@property (nonatomic) _Bool is_twitter_verified;
@property (retain, nonatomic) NSNumber *publicBroadcastCount;
@property (retain, nonatomic) NSNumber *n_following;
@property (retain, nonatomic) NSNumber *n_followers;
@property (retain, nonatomic) NSNumber *n_hearts;
@property (retain, nonatomic) NSNumber *n_replay_hearts;
@property (nonatomic) _Bool wasPeriscopeAccountCreatedInTwitterApp;
@property (nonatomic) _Bool isTwitterOnlyAccount;
@property (readonly, nonatomic) _Bool shouldDisplayAsTwitterUser;
@property (readonly, nonatomic) long long participant_index;
@property (readonly, nonatomic) long long nHeartsGiven;
@property (nonatomic) _Bool is_blocked;
@property (nonatomic) _Bool is_following;
@property (nonatomic) _Bool is_mutual;
@property (nonatomic) _Bool is_muted;
@property (readonly, nonatomic) unsigned long long isFollowingState;
@property (nonatomic) int lock_list_score;
@property (nonatomic) int share_lock_list_score;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)keyPathsForValuesAffectingUsername;
+ (id)keyPathsForValuesAffectingBestKnownUsername;
+ (id)keyPathsForValuesAffectingNHeartsString;
+ (id)keyPathsForValuesAffectingShouldDisplayAsTwitterUser;

/* instance methods */
- (id)init;
- (_Bool)isEqual:(id)equal;
- (void)loadImageEntityForWorkClient:(id)client withProfileImageType:(unsigned long long)type;
- (id)profileImageURLForType:(unsigned long long)type;
- (id)initWithDictionary:(id)dictionary;
- (void)unpackDictionary:(id)dictionary;
- (id)bestKnownDisplayName;
- (id)bestKnownUsername;

@end

#endif /* PTVUser_h */
