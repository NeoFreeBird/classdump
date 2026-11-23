//
#ifndef TASSettings_h
#define TASSettings_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSArray, NSDate, NSObject, NSString;

@interface TASSettings : NSObject <NSCopying> // (Swift)

@property (nonatomic, copy) NSString *title;
@property (nonatomic) long long audienceType;
@property (nonatomic) long long conversationControlType;
@property (nonatomic) _Bool isEveryoneMuted;
@property (nonatomic, copy) NSArray *preApprovedSpeakers;
@property (nonatomic, copy) NSDate *scheduledStart;
@property (nonatomic, copy) NSArray *topicIDs;
@property (nonatomic) _Bool isAvailableForReplay;
@property (nonatomic) _Bool isAvailableForClipping;
@property (nonatomic) double replayStartTime;
@property (nonatomic) long long initialPinnedTweetID;
@property (nonatomic, copy) NSString *communityID;
@property (nonatomic) long long contentType;
@property (nonatomic) _Bool noIncognito;
@property (nonatomic, readonly) _Bool hasVideo;
@property (nonatomic, readonly) long long narrowCastType;
@property (nonatomic, readonly) NSString *narrowCastTypeScribeName;

/* class methods */
+ (id)localizedNameWithAudienceType:(long long)type;
+ (id)localizedAbbreviatedNameWithAudienceType:(long long)type;
+ (id)iconNameWithAudienceType:(long long)type;
+ (id)localizedNameWithConversationControlType:(long long)type;
+ (id)iconNameWithConversationControlType:(long long)type;

/* instance methods */
- (id)init;
- (id)initWithAudiospace:(id)audiospace;
- (id)copyWithZone:(void *)zone;
- (id)settingsWithTitle:(id)title;
- (id)settingsWithTitle:(id)title scheduledStart:(id)start;
- (id)settingsWithTitle:(id)title communityID:(id)id;
- (id)settingsWithAudienceType:(long long)type;
- (id)settingsWithNarrowCastType:(long long)type;
- (id)settingsWithConversationControlType:(long long)type;
- (id)settingsWithMuted:(_Bool)muted;
- (id)settingsByAddingPreApprovedSpeakers:(id)speakers;
- (id)settingsByRemovingPreApprovedSpeakers:(id)speakers;
- (id)settingsWithTopicIDs:(id)ids;
- (id)settingsWithAvailableForReplay:(_Bool)replay;
- (id)settingsWithNoIncognito:(_Bool)incognito;
- (id)settingsWithAvailableForClipping:(_Bool)clipping;
- (id)settingsWithReplayStartTime:(double)time;
- (id)settingsWithInitialPinnedTweetID:(long long)id;
- (id)settingsWithContentType:(long long)type;

@end

#endif /* TASSettings_h */
