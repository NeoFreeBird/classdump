//
#ifndef URTTimelineStatusItemViewModel_h
#define URTTimelineStatusItemViewModel_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TFNTwitterFeedbackModule.h"
#include "TFNTwitterStatusConversationTreeContext-Protocol.h"
#include "TTACoreStatusViewModel-Protocol.h"
#include "TTACoreStatusViewModelURT-Protocol.h"

@class NSArray, NSObject, NSString, TFSTwitterAppealable, TFSTwitterDynamicVideoAd, TFSTwitterForwardPivot, TFSTwitterImageInterstitial, TFSURTRichText;

@interface URTTimelineStatusItemViewModel : NSObject <TTACoreStatusViewModelURT, NSObject> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 conversationType;
    @40@0:8:16@24@32 tweetItem;
    @40@0:8:16@24@32 clientEventInfo;
    @40@0:8:16@24@32 feedbackContext;
    @40@0:8:16@24@32 authenticatedUserID;
    @40@0:8:16@24@32 accountID;
    @40@0:8:16@24@32 prompt;
    @40@0:8:16@24@32 advertiserUser;
    @40@0:8:16@24@32 dynamicCard;
    @40@0:8:16@24@32 isGrokBotReplyCTASuppressed;
    @40@0:8:16@24@32 status;
    @40@0:8:16@24@32 backingDisplayTextModel;
    @40@0:8:16@24@32 $__lazy_storage_$_displayText;
}

@property (nonatomic, readonly) TFSTwitterForwardPivot *forwardPivot;
@property (nonatomic, readonly) TFSTwitterAppealable *appealable;
@property (nonatomic, readonly) TFSTwitterForwardPivot *innerForwardPivot;
@property (nonatomic, readonly) TFSTwitterImageInterstitial *imageInterstitial;
@property (nonatomic, readonly) TFSTwitterImageInterstitial *innerImageInterstitial;
@property (nonatomic, readonly) id <TTACoreStatusViewModel> quotedStatusViewModel;
@property (nonatomic, readonly) NSArray *engagementNudges;
@property (nonatomic, readonly) TFSURTRichText *innerTombstoneRichText;
@property (nonatomic, readonly) TFSURTRichText *innerTombstoneRichRevealText;
@property (nonatomic) _Bool isInnerTombstoneDismissed;
@property (nonatomic) _Bool isOuterTombstoneDismissed;
@property (nonatomic, readonly) TFSURTRichText *outerTombstoneRichText;
@property (nonatomic, readonly) TFSURTRichText *outerTombstoneRichRevealText;
@property (nonatomic, readonly) id <TFNTwitterStatusConversationTreeContext> conversationTreeContext;
@property (nonatomic, readonly) _Bool hasSensitiveMediaWarningsFlaggedByAuthor;
@property (nonatomic, readonly) NSString *statusItemViewModelDidUpdateNotificationName;
@property (nonatomic, readonly) NSString *entryID;
@property (nonatomic, readonly) long long timelineModuleItemIndex;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) long long statusID;
@property (nonatomic, readonly) _Bool isPinned;
@property (nonatomic, readonly) NSString *conversationSection;
@property (nonatomic, readonly) _Bool isConversationStatus;
@property (nonatomic, readonly) _Bool isConversationAncestor;
@property (nonatomic, readonly) _Bool isConversationRoot;
@property (nonatomic, readonly) _Bool isConversationPrecededByAncestor;
@property (nonatomic, readonly) NSString *grokPostID;
@property (nonatomic, readonly) _Bool displayAsSelfThreadTweet;
@property (nonatomic, readonly) TFSTwitterDynamicVideoAd *prerollContent;
@property (nonatomic, readonly) NSString *scribeItemFirstImpressionID;
@property (nonatomic, readonly) NSString *scribeItemContentID;
@property (nonatomic) unsigned long long isDuplicateContentIDInstance;
@property (nonatomic) unsigned long long isCurrentlyFirstImpression;
@property (nonatomic, readonly) TFNTwitterFeedbackModule *feedbackModule;

/* instance methods */
- (void)statusUpdatedWithNotification:(id)notification;
- (void)userUpdatedWithNotification:(id)notification;
- (void)dealloc;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* URTTimelineStatusItemViewModel_h */
