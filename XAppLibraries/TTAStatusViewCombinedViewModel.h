//
#ifndef TTAStatusViewCombinedViewModel_h
#define TTAStatusViewCombinedViewModel_h
@import Foundation;

#include "TFNTwitterAccount.h"
#include "TTACoreStatusExternalUpdateObserver-Protocol.h"
#include "TTACoreStatusViewModel-Protocol.h"

@class NSNumber, NSObject, NSString, TFSTwitterScribeContext;

@interface TTAStatusViewCombinedViewModel : NSObject <TTACoreStatusExternalUpdateObserver> {
    /* instance variables */
    NSNumber *_cachedPromotedBadgePlacement;
    long long _cachedAttachmentType;
    long long _cachedSecondaryAttachmentType;
    long long _cachedUnifiedCardShowsAdDisclosure;
    NSNumber *_cachedShouldInlineNoteTweetMedia;
    _Bool _isListeningForNotifications;
    _Bool _isListeningForExternalNotifications;
    id _statusReportedNotificationObserver;
    id _userDidUpdateNotificationObserver;
}

@property (readonly, nonatomic) id <TTACoreStatusViewModel> statusViewModel;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) TFNTwitterAccount *account;
@property (readonly, nonatomic) TFSTwitterScribeContext *scribeContext;
@property (copy, nonatomic) id /* block */ onUpdate;
@property (copy, nonatomic) id /* block */ onExternalUpdate;
@property (readonly, nonatomic) _Bool shouldInlineNoteTweetMedia;
@property (readonly, nonatomic) unsigned long long attachmentType;
@property (readonly, nonatomic) unsigned long long secondaryAttachmentType;
@property (readonly, nonatomic) unsigned long long limitedActionTypes;
@property (readonly, nonatomic) _Bool isWithheldInCountry;
@property (readonly, nonatomic) _Bool viewingOwnWithheldProfile;
@property (readonly, nonatomic) _Bool isPossiblySensitive;
@property (readonly, nonatomic) _Bool shouldRenderAsAttachmentTombstone;
@property (readonly, nonatomic) _Bool hasUserRecommendation;
@property (readonly, nonatomic) _Bool isTranslatable;
@property (readonly, nonatomic) _Bool isExclusiveTweet;
@property (readonly, nonatomic) _Bool isReplyInSelfThreadByAuthenticatedAccount;
@property (readonly, nonatomic) _Bool isSuperFollowBadgeRedesignEnabled;
@property (readonly, nonatomic) _Bool isTweetedByAuthenticatedSuperFollowCreatorAccount;
@property (readonly, nonatomic) _Bool isAuthenticatedAccountExclusiveRootTweetAuthor;
@property (readonly, nonatomic) _Bool isTweetAuthoredByExclusiveCreator;
@property (readonly, nonatomic) unsigned long long promotedBadgePlacement;
@property (readonly, nonatomic) _Bool shouldDisplayAsCompactPromotedTweet;
@property (readonly, nonatomic) id /* block */ cardAttachmentDecider;
@property (nonatomic) long long displayRank;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (_Bool)shouldDisplayMixedMediaForStatus:(id)status withAccountFeatureSwitches:(id)switches;

/* instance methods */
- (id)initWithStatusViewModel:(id)model options:(unsigned long long)options account:(id)account scribeContext:(id)context cardAttachmentDecider:(id /* block */)decider;
- (void)dealloc;
- (id)init;
- (_Bool)_t1_shouldInlineNoteTweetMedia;
- (_Bool)unifiedCardShowsAdDisclosureWithCalculation:(id /* block */)calculation;
- (unsigned long long)displayTextOptionsForAttachmentType:(unsigned long long)type;
- (_Bool)areAnyActionsAvailable:(unsigned long long)available;
- (_Bool)isViewingOwnWithheldProfile;
- (_Bool)isEqual:(id)equal;
- (void)_t1_beginObservingStatusUpdateNotifications;
- (_Bool)_t1_shouldInvalidateCachedAttachmentsWithNotification:(id)notification;
- (void)_t1_invalidateCachedAttachments;
- (void)_t1_statusDidUpdate:(id)update;
- (void)_t1_statusReported:(id)reported;
- (void)_t1_handleReportOrBlockFromNotification:(id)notification;
- (void)_t1_statusDidUpdateWithUserInfo:(id)info;
- (void)_t1_userDidUpdate:(id)update;
- (void)didReceiveStatusExternalUpdateNotification:(id)notification ofType:(long long)type;
- (long long)_t1_calculateAttachmentType;
- (long long)_t1_calculateSecondaryAttachmentType;
- (_Bool)_t1_hasUserRecommendation;
- (_Bool)_t1_hasTombstonedQuotedTweet;
- (_Bool)_t1_hasQuotedTweet;
- (_Bool)_t1_hasCard;
- (_Bool)_t1_hasPhotoVideo;
- (_Bool)_t1_mediaSupportsPhotoVideoForwardPlayer;
- (unsigned long long)_t1_attachmentTypeForMediaType;
- (unsigned long long)_t1_calculateDisplayTextOptionsForAttachmentType:(unsigned long long)type;
- (_Bool)_t1_shouldOmitMediaLinkForAttachmentType:(unsigned long long)type;
- (_Bool)_t1_isYouTubeCardWithMediaForwardDisabled;

@end

#endif /* TTAStatusViewCombinedViewModel_h */
