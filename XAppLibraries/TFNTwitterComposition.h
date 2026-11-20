//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterComposition_h
#define TFNTwitterComposition_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "PollingCardProtocol-Protocol.h"
#include "TAPTwitterCompositionTweetPerspective-Protocol.h"
#include "TAPTwitterCompositionUserPerspective-Protocol.h"
#include "TFNDropDataSource-Protocol.h"
#include "TFNTwitterCompositionCardPreview.h"
#include "TFNTwitterCompositionEntryPointScribeInfo.h"
#include "TFNTwitterCompositionOriginatorStatusInfo.h"
#include "TFNTwitterCompositionQuotedStatusInfo.h"
#include "TFNTwitterCompositionReplyChain.h"
#include "TFNTwitterCompositionReplyChainScribeDetails.h"
#include "TFNTwitterCompositionReplyEntryPointScribeValue.h"
#include "TFNTwitterCompositionReplyStatusInfo.h"
#include "TFSTweetTextCounterContext-Protocol.h"
#include "TTMAsset.h"

@class NSArray, NSDate, NSDictionary, NSMutableArray, NSMutableSet, NSNumber, NSObject, NSSet, NSString, NSValue, TFSCompositionAIGeneratedDisclosure, TFSTweetTextCounter, TFSTwitterCommunityReference, TFSTwitterCompositionNudge, TFSTwitterGeotag, TFSTwitterTagSet, TFSTwitterUserReference, TFSTwitterVideoMonetizationSettings;

@interface TFNTwitterComposition : NSObject <TFSTweetTextCounterContext, NSCoding, TFNDropDataSource>

@property (retain, nonatomic) TFSTweetTextCounter *tweetTextCounter;
@property (retain, nonatomic) NSMutableSet *mutableSemanticAnnotationIds;
@property (retain, nonatomic) NSValue *initialSelectedRangeValue;
@property (retain, nonatomic) NSString *initialText;
@property (nonatomic) unsigned long long maxNumberOfMediaItems;
@property (readonly, nonatomic) NSString *uniqueID;
@property (readonly, nonatomic) _Bool reply;
@property (nonatomic) unsigned long long textDefaultLength;
@property (readonly, nonatomic) _Bool longform;
@property (readonly, nonatomic) _Bool isBeyondCharacterLimit;
@property (retain, nonatomic) TFSTwitterCommunityReference *communityReference;
@property (nonatomic) long long exclusiveTweetControlType;
@property (nonatomic) _Bool perPostAudienceEnabled;
@property (copy, nonatomic) NSString *placeID;
@property (retain, nonatomic) TFSTwitterUserReference *replyToUserReference;
@property (readonly, nonatomic) NSArray *initiallyMentionedUsers;
@property (retain, nonatomic) TFNTwitterCompositionReplyStatusInfo *replyToStatusInfo;
@property (nonatomic) _Bool isHeadOfReplystorm;
@property (readonly, nonatomic) NSNumber *replyToStatusIDNumber;
@property (retain, nonatomic) TFNTwitterCompositionQuotedStatusInfo *quotedStatusInfo;
@property (copy, nonatomic) NSString *fetchedDraftAttachmentURL;
@property (retain, nonatomic) TFNTwitterCompositionOriginatorStatusInfo *originatorStatusInfo;
@property (retain, nonatomic) TFNTwitterCompositionReplyChainScribeDetails *replyChainScribeDetails;
@property (retain, nonatomic) TFSTwitterGeotag *geotag;
@property (retain, nonatomic) NSDate *createdDate;
@property (retain, nonatomic) NSDate *draftsAddedDate;
@property (retain, nonatomic) NSDate *undoableAddedDate;
@property (readonly, nonatomic) NSDate *undoableSendDate;
@property (retain, nonatomic) NSDate *outboxAddedDate;
@property (retain, nonatomic) NSDate *retryExpiration;
@property (retain, nonatomic) NSDate *statusUpdateRequestedDate;
@property (nonatomic) _Bool isDraft;
@property (nonatomic) long long draftType;
@property (nonatomic) _Bool hadFailedSend;
@property (copy, nonatomic) NSArray *excludedReplyUserIDs;
@property (readonly, nonatomic) _Bool geotagged;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } initialSelectedRange;
@property (readonly, nonatomic) NSString *attachmentURL;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *jetfuelURL;
@property (retain, nonatomic) id <TAPTwitterCompositionTweetPerspective> embedLinkSourceStatus;
@property (copy, nonatomic) NSString *serverDraftID;
@property (nonatomic) _Bool needsRemoteDraftSync;
@property (retain, nonatomic) NSDate *scheduledAt;
@property (copy, nonatomic) NSString *serverScheduledTweetID;
@property (nonatomic) _Bool shouldBroadcastToFollowers;
@property (readonly, nonatomic) NSString *validDisplayText;
@property (retain, nonatomic) TFSTwitterTagSet *tagSet;
@property (readonly, nonatomic) NSString *scribePage;
@property (copy, nonatomic) NSDictionary *extraScribeParameters;
@property (copy, nonatomic) NSDictionary *mediaScribeParameters;
@property (readonly, nonatomic) TTMAsset *primaryImageAttachment;
@property (readonly, nonatomic) NSArray *imageAttachments;
@property (readonly, nonatomic) NSArray *videoAttachments;
@property (copy, nonatomic) NSArray *attachments;
@property (retain, nonatomic) TFNTwitterCompositionCardPreview *cardPreview;
@property (retain, nonatomic) id <PollingCardProtocol> pollingCard;
@property (retain, nonatomic) TFSTwitterVideoMonetizationSettings *videoMonetizationSettings;
@property (copy, nonatomic) NSString *periscopeBroadcastID;
@property (copy, nonatomic) NSString *periscopeCreatorID;
@property (nonatomic) _Bool periscopeIsLive;
@property (copy, nonatomic) NSNumber *videoReactToStatusID;
@property (copy, nonatomic) NSNumber *videoReactToUserID;
@property (retain, nonatomic) id <TAPTwitterCompositionUserPerspective> videoReactToUserPerspective;
@property (nonatomic) _Bool spaceEntity;
@property (copy, nonatomic) NSString *inReplyToSpaceID;
@property (nonatomic) _Bool isTweetWithBoost;
@property (readonly, nonatomic) _Bool textOnly;
@property (nonatomic) unsigned long long conversationControlType;
@property (copy, nonatomic) NSArray *conversationControlTypes;
@property (copy, nonatomic) NSArray *conversationControlAllowedRegionCodes;
@property (readonly, nonatomic) _Bool canChangeConversationControlType;
@property (copy, nonatomic) NSDictionary *engagementMetadata;
@property (readonly, nonatomic) NSSet *semanticAnnotationIds;
@property (readonly, nonatomic) NSString *commaSeparatedSemanticAnnotationIds;
@property (copy, nonatomic) NSArray *richTextTags;
@property (readonly, nonatomic) unsigned long long characterCount;
@property (readonly, nonatomic) long long indexOfFirstOverflowCharacter;
@property (readonly, nonatomic) long long remainingCharacters;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } transparentRange;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } redRange;
@property (retain, nonatomic) NSString *grokPostID;
@property (readonly, nonatomic) _Bool hasCardPreview;
@property (readonly, nonatomic) _Bool cardPreviewAllowed;
@property (readonly, nonatomic) _Bool quotedStatusAllowed;
@property (retain, nonatomic) TFNTwitterCompositionReplyEntryPointScribeValue *replyEntryPointScribeValue;
@property (copy, nonatomic) NSString *clipEntryPointScribeValue;
@property (retain, nonatomic) TFNTwitterCompositionEntryPointScribeInfo *composerEntryPointScribeInfo;
@property (nonatomic) _Bool referencingAdPreviewTweet;
@property (retain, nonatomic) TFNTwitterCompositionReplyChain *replyChain;
@property (copy, nonatomic) NSString *replyChainUniqueID;
@property (nonatomic) long long positionWithinReplyChain;
@property (retain, nonatomic) TFSTwitterCompositionNudge *compositionNudge;
@property (nonatomic) _Bool hasCheckedForNudge;
@property (nonatomic) _Bool didFailLastSendFromNudge;
@property (copy, nonatomic) NSString *compositionNudgeID;
@property (copy, nonatomic) NSString *compositionUndoTweetSentNudgeID;
@property (nonatomic) _Bool shouldScribeRetweetWithCommentForArticleNudge;
@property (nonatomic) _Bool didUndoTweetSent;
@property (nonatomic) _Bool textWasPasted;
@property (nonatomic) long long compositionSource;
@property (nonatomic) _Bool textWasTypedOrEdited;
@property (nonatomic) _Bool isUndoable;
@property (nonatomic) double undoTimeInterval;
@property (nonatomic) long long didUndoCount;
@property (nonatomic) _Bool openedFromDraft;
@property (nonatomic) _Bool openedFromShareExtensionHandoff;
@property (retain, nonatomic) NSNumber *previousTweetIdNumber;
@property (retain, nonatomic) NSDate *editableUntilDate;
@property (retain, nonatomic) NSNumber *editsRemainingNumber;
@property (readonly, nonatomic) _Bool editingExistingTweet;
@property (nonatomic) _Bool hasPaidPromotionDisclosure;
@property (copy, nonatomic) TFSCompositionAIGeneratedDisclosure *aiGeneratedDisclosure;
@property (readonly, nonatomic) _Bool hasAIGeneratedDisclosure;
@property (copy, nonatomic) NSArray *cashtagAttachments;
@property (copy, nonatomic) NSArray *cashtagSmartTagMappings;
@property (nonatomic) _Bool needsCashtagHydration;
@property (readonly, copy, nonatomic) NSString *textForCharacterCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) _Bool hasAttachments;
@property (readonly, copy, nonatomic) NSString *localizedDropIndicationGIFs;
@property (readonly, copy, nonatomic) NSString *localizedDropIndicationImages;
@property (readonly, copy, nonatomic) NSString *localizedDropIndicationStatus;
@property (readonly, copy, nonatomic) NSString *localizedDropIndicationText;
@property (readonly, copy, nonatomic) NSString *localizedDropIndicationURL;
@property (readonly, copy, nonatomic) NSString *localizedDropIndicationVideos;
@property (readonly, copy, nonatomic) NSString *localizedDropIndicationMixedMedia;
@property (readonly, copy, nonatomic) NSString *localizedDropIndicationTooManyGIFs;
@property (readonly, copy, nonatomic) NSString *localizedDropIndicationTooManyImages;
@property (readonly, copy, nonatomic) NSString *localizedDropIndicationTooManyVideos;
@property (readonly, nonatomic) _Bool hasAnimatedImageAttachments;
@property (readonly, nonatomic) _Bool hasImageOrGIFAttachments;
@property (readonly, nonatomic) _Bool hasPoll;
@property (readonly, nonatomic) _Bool hasVideoAttachments;

/* class methods */
+ (id)userReferencesForReplyToStatus:(id)status account:(id)account;
+ (id)keyPathsForValuesAffectingHasAIGeneratedDisclosure;

/* instance methods */
- (id)initialMentionUserIDs;
- (id)orderedUserReferencesForReplyFromAccount:(id)account;
- (id)_tfn_placeIDParameter;
- (id)_tfn_geotaggingModeParameter;
- (unsigned long long)_tfn_conversationControlParameter;
- (id)_tfn_conversationControlTypesParameter;
- (id)_tfn_geoSearchRequestIDParameter;
- (id)_tfn_mediaIDsParameter;
- (id)_tfn_mediaTagsDictionary;
- (id)_tfn_mediaTagsParameter;
- (id)_tfn_cardURIParameter;
- (id)_tfn_engagementMetadataParameter;
- (id)statusesUpdateParametersForAccount:(id)account;
- (id)textBySubstitutingCashtagSmartTags;
- (void)pruneCashtagAttachmentsForText:(id)text;
- (void)addCashtagAttachmentAndMappingForSmartTag:(id)tag ticker:(id)ticker insertionOffset:(unsigned long long)offset sizeVariant:(long long)variant;
- (_Bool)hasEqualEditableCashtagStateAsComposition:(id)composition;
- (id)init;
- (id)initWithInitialText:(id)text mentionedUsers:(id)users;
- (id)initWithCoder:(id)coder;
- (void)_tfn_twitterComposition_initialize;
- (void)encodeWithCoder:(id)coder;
- (void)dealloc;
- (id)attachmentForAssetReferencedFromAttachment:(id)attachment;
- (void)addAttachment:(id)attachment;
- (void)replaceAttachment:(id)attachment withAttachment:(id)attachment;
- (void)removeAttachment:(id)attachment;
- (void)removeAllAttachments;
- (void)addSemanticAnnotationIds:(id)ids;
- (void)removeSemanticAnnotationIds:(id)ids;
- (void)removeAllSemanticAnnotationIds;
- (void)_tfn_cleanupAsset:(id)asset;
- (_Bool)isGeotagged;
- (_Bool)isCardPreviewAllowed;
- (_Bool)isQuotedStatusAllowed;
- (_Bool)isReply;
- (_Bool)isSelfThreadReplyFromUserID:(long long)id;
- (long long)_tfn_secureLinkLength;
- (_Bool)isLongform;
- (void)_tfn_updateCommunityReferenceFromReplyToStatusInfo;
- (void)_tfn_updateExclusiveTweetControlsFromReplyToStatusInfo;
- (long long)remainingCharactersWithInputLocaleIdentifier:(id)identifier;
- (unsigned long long)_tfn_indexOfFirstOverflowCharacterInVisibleText;
- (_Bool)isWorthSaving;
- (_Bool)isWorthSavingLegacy;
- (_Bool)hasEmptyText;
- (_Bool)isEqual:(id)equal;
- (_Bool)isWorthSending;
- (_Bool)isTextEdited;
- (_Bool)_tfn_containsMoreThanWhitespace;
- (id)textWithAttachment;
- (id)textByAppendingJetfuelURL:(id)url;
- (id)accessibilityText;
- (id)scribeParameters;
- (id)_tfn_scribeItemForTweet;
- (id)_tfn_scribeParameterForTweet;
- (void)scribeSendWithScribe:(id)scribe;
- (_Bool)isTextOnly;
- (_Bool)isReplyUserReferenceExcludable:(id)excludable;
- (_Bool)hasOnlyStillImageAttachments;
- (_Bool)hasPeopleTaggableAttachments;
- (_Bool)hasPeopleTaggableAttachments:(_Bool)attachments;
- (_Bool)hasVideoImportAttachments;
- (_Bool)hasVideoCaptureAttachments;
- (unsigned long long)attachmentsCountWithType:(unsigned long long)type;
- (_Bool)hasVoiceRecordingAttachment;
- (id)voiceRecordingAttachment;
- (_Bool)canAddQuoteTweet;
- (_Bool)canAddImageAttachment;
- (_Bool)_tfn_canAddPollOrNonImageAttachment;
- (_Bool)canAddPoll;
- (_Bool)canDropImagesCount:(unsigned long long)count;
- (_Bool)canDropVideosCount:(unsigned long long)count;
- (_Bool)canDropAnimatedGIFsCount:(unsigned long long)count;
- (_Bool)isSpaceEntity;
- (_Bool)isReferencingAdPreviewTweet;

@end

#endif /* TFNTwitterComposition_h */
