//
#ifndef _TtC4Grok17GrokFeatureAccess_h
#define _TtC4Grok17GrokFeatureAccess_h
@import Foundation;

#include "_TtC4Grok29GrokPostDownloadFeatureAccess.h"

@class Grok.GrokBotUpsellFeatureAccess ?, Grok.GrokPostDownloadFeatureAccess ?, Grok0A18AccountPerspective_p, NSObject, NSString, NSURL, _$s24TFSFeatureSwitchesAccess014AccountFeatureB0CMn, _$sSSSg, _$sSSSgSg, _$sSbSg, _$sSo24TPSFeatureSwitchesAccess_p, _$ss5Int64VMn;

@interface Grok.GrokFeatureAccess : NSObject { // (Swift)
    /* instance variables */
    Grok0A18AccountPerspective_p account;
    __C.TPSFeatureSwitchesAccess featureSwitches;
    nominal type descriptor for TFSFeatureSwitchesAccess.AccountFeatureSwitches accountFeatureSwitches;
    nominal type descriptor for Swift.Int64 userID;
    Swift.Bool? $__lazy_storage_$_isGrokFunModeDisabled;
    Swift.Bool? $__lazy_storage_$_dictationVersion2EnabledValue;
    Swift.String? $__lazy_storage_$_grokInputPlaceholder;
    Swift.Bool? $__lazy_storage_$_enhancedMarkdownEnabledValue;
    Swift.Bool? $__lazy_storage_$_imageSourceEnabledValue;
    Swift.Bool? $__lazy_storage_$_betterScrollingEnabledValue;
    Swift.Bool? $__lazy_storage_$_followUpSuggestionsEnabledValue;
    Swift.Bool? $__lazy_storage_$_addNotParsedLinksEnabledValue;
    Swift.Bool? $__lazy_storage_$_isGrokUnifyGatewayLiveSyncEnabled;
    Swift.Bool? $__lazy_storage_$_isGrokUnifyPersistedLeafEnabled;
    Swift.Bool? $__lazy_storage_$_isGrokGrpcWebCallScribeEnabled;
    Swift.Bool? $__lazy_storage_$_isGrokMediaCacheBackgroundPurgeEnabled;
    Swift.Bool? $__lazy_storage_$_isGrokXGrpcWebAdoptersEnabled;
    Swift.Bool? $__lazy_storage_$_isGrokUnifyGatewayThinkingTraceEnabled;
    Swift.Bool? $__lazy_storage_$_isGrokUnifyGatewayToolUsageCardsEnabled;
    Swift.Bool? $__lazy_storage_$_isGrokUnifyGatewayThinkingSummaryEnabled;
    Swift.Bool? $__lazy_storage_$_isGrokUnifyGatewayAnalyzeEnabled;
    Swift.Bool? $__lazy_storage_$_isGrokUnifyGatewayComposeEnhanceEnabled;
    Swift.Bool? $__lazy_storage_$_isGrokUnifyGatewayCaptionsEditEnabled;
    Swift.Bool? $__lazy_storage_$_isGrokUnifyGatewayTemporaryChatEnabled;
    Swift.Bool? $__lazy_storage_$_isGrokVoiceInterimTranscriptEnabled;
    Swift.Bool? $__lazy_storage_$_isGrokUnifyGatewayAssetJwtEnabled;
    Swift.Bool? $__lazy_storage_$_isGrokUnifyGatewayAssetCredentialsOnlyEnabled;
    Swift.Bool? $__lazy_storage_$_isGrokUnifySiblingSwitcherEnabled;
    Swift.Bool? $__lazy_storage_$_isGrokUnifyHistoryLazyPagingEnabled;
    Swift.Bool? $__lazy_storage_$_isGrokUnifyGatewayShareContinueEnabled;
    Swift.Bool? $__lazy_storage_$_isGrokVoiceTextToSpeechEnabled;
    Swift.Bool? $__lazy_storage_$_isGrokUnifyGatewayReportIssueEnabled;
    Swift.Bool? $__lazy_storage_$_isGrokUnifyGatewayHistorySyncEnabled;
    Swift.Bool? $__lazy_storage_$_isGrokUnifyGatewayFollowUpRowsEnabled;
    Swift.Bool? $__lazy_storage_$_isGrokUnifyGatewayEmptyResponsePlaceholderEnabled;
    Swift.Bool? $__lazy_storage_$_isGrokUnifyGatewayHistoryThinkingTraceEnabled;
    Swift.Bool? $__lazy_storage_$_isGrokUnifyGatewaySteerActionEnabled;
    Swift.Bool? $__lazy_storage_$_isGrokUnifyGatewayUseChunkEnabled;
    Swift.Bool? $__lazy_storage_$_isGrokUnifyGatewayConnectorsToolsetEnabled;
    Swift.Bool? $__lazy_storage_$_isGrokUnifyGatewayConnectorsV2Enabled;
    Swift.Bool? $__lazy_storage_$_isGrokUnifyResponseChromeEnabled;
    Swift.Bool? $__lazy_storage_$_isGrokUnifyTextParityEnabled;
    Swift.Bool? $__lazy_storage_$_isGrokUnifyCodeBlockParityEnabled;
    Swift.Bool? $__lazy_storage_$_isGrokUnifyTableParityEnabled;
    Swift.Bool? $__lazy_storage_$_isGrokUnifyToolCardsParityEnabled;
    Swift.Bool? $__lazy_storage_$_isGrokUnifyGatewayImageEditEnabled;
    Swift.Bool? $__lazy_storage_$_isGrokUnifyGatewayImagineImageGenEnabled;
    Swift.Bool? $__lazy_storage_$_isGrokUnifyGatewayImagineVideoGenEnabled;
    Swift.Bool? $__lazy_storage_$_isGrokImagineRedirectToGrokComEnabled;
    Swift.Bool? $__lazy_storage_$_isGrokUIMigrationPresetsEnabled;
    Swift.Bool? $__lazy_storage_$_isGrokRedesignChatEnabled;
    Swift.Bool? $__lazy_storage_$_isGrokRedesignAnalyzeEnabled;
    Swift.Bool? $__lazy_storage_$_isGrokRedesignProfileAnalyzeEnabled;
    Swift.Bool? $__lazy_storage_$_isGrokUnifyGatewayAuthRecoveryEnabled;
    Swift.Bool? $__lazy_storage_$_isGrokUnifyGatewayLinkedForegroundRecheckEnabled;
    Swift.Bool? $__lazy_storage_$_isGrokRedesignInputBarEnabled;
    Swift.Bool? $__lazy_storage_$_isGrokRedesignPresetsEnabled;
    Swift.Bool? $__lazy_storage_$_isGrokRedesignSkillsEnabled;
    Swift.Bool? $__lazy_storage_$_isGrokRedesignTextToSpeechBarEnabled;
    Swift.Bool? $__lazy_storage_$_isGrokTtsCacheBackgroundPurgeEnabled;
    Swift.Bool? $__lazy_storage_$_isGrokRedesignConnectorsEnabled;
    Swift.Bool? $__lazy_storage_$_isGrokRedesignHistorySearchEnabled;
    Swift.Bool? $__lazy_storage_$_isGrokRedesignHistoryEmptyStateEnabled;
    Swift.Bool? $__lazy_storage_$_isGrokSearchSummaryContinueConversationEnabled;
    Swift.Bool? $__lazy_storage_$_isGrokSearchSummaryInlineFollowUpEnabled;
    Swift.Bool? $__lazy_storage_$_isGrokSearchSummaryEarlySeeMoreEnabled;
    Swift.String?? $__lazy_storage_$_grokSearchSummaryLearnMoreButtonTitleOverride;
    Swift.String?? $__lazy_storage_$_grokSearchSummaryFollowUpPlaceholderOverride;
    Swift.Bool? $__lazy_storage_$_isSearchedImageRenderCardEnabled;
    Swift.Bool? $__lazy_storage_$_isGeneratedImageRenderCardEnabled;
    Swift.Bool? $__lazy_storage_$_isGrokImagine2RenderCardEnabled;
    Swift.Bool? $__lazy_storage_$_isGrokUpsellGatingViewsEnabled;
    Swift.Bool? $__lazy_storage_$_isGrokUpsellFreeHintEnabled;
    Swift.Bool? $__lazy_storage_$_isGrokUpsellGrokSubscriptionLookupEnabled;
    Swift.Bool? $__lazy_storage_$_isGrokUpsellFreeOffersExcludeSuperGrokEnabled;
    Swift.Bool? $__lazy_storage_$_isGrokUpsellGrokAppDeeplinkEnabled;
    Swift.Bool? $__lazy_storage_$_isUnifiedPaywallEnabled;
    Swift.Bool? $__lazy_storage_$_isGrokMarkdownChirpFontEnabled;
    Swift.Bool? $__lazy_storage_$_isSharedMarkdownRendererEnabled;
    Swift.Bool? $__lazy_storage_$_isVoiceOverConversationVirtualizationEnabled;
    Swift.Bool? $__lazy_storage_$_isGrokChatDownloadStandaloneButtonEnabled;
    Swift.String? $__lazy_storage_$_grokRTimer0;
    Swift.String? $__lazy_storage_$_grokRTimer1;
    Swift.String? $__lazy_storage_$_grokRTimer2;
    Swift.Bool? $__lazy_storage_$_isGrokNestedQuotePreviewAutoTranslationEnabled;
    Grok.GrokBotUpsellFeatureAccess ? $__lazy_storage_$_grokBotUpsells;
    Grok.GrokPostDownloadFeatureAccess ? $__lazy_storage_$_grokPostDownload;
    Swift.String? $__lazy_storage_$_grokAppCampaignChatDownloadBannerLink;
    Swift.Bool? $__lazy_storage_$_isGrokAnalyzeCachedRevealEnabled;
    Swift.Bool? $__lazy_storage_$_isGrokAnalyzePromptCardSyncEnabled;
    Swift.String? $__lazy_storage_$_grokImagineBannerRawConfig;
    Swift.Bool? $__lazy_storage_$_newFeatureBannerEnabledValue;
    Swift.String? $__lazy_storage_$_grokDirectGrokAppFlowPromptSheetTitle;
    Swift.String? $__lazy_storage_$_grokDirectGrokAppFlowPromptSheetSubtitle;
    Swift.String? $__lazy_storage_$_grokDirectGrokAppFlowPromptSheetInstallButtonTitle;
    Swift.String? $__lazy_storage_$_grokImagine2CtaTitle;
}

@property (nonatomic, readonly) _Bool shouldShowGrokTab;
@property (nonatomic, readonly) _Bool userCanAccessGrok;
@property (nonatomic, readonly) _Bool enableImageGeneration;
@property (nonatomic, readonly) _Bool isGrokSpeechEnabled;
@property (nonatomic, readonly) _Bool isGrokDictationVersion2Enabled;
@property (nonatomic, readonly) _Bool isGrokEnhancedMarkdownEnabled;
@property (nonatomic, readonly) _Bool isGrokImageSourceEnabled;
@property (nonatomic, readonly) _Bool isGrokSharecardPostPreviewEnabled;
@property (nonatomic, readonly) _Bool isGrokBetterScrollingEnabled;
@property (nonatomic, readonly) _Bool isGrokNewHistoryEnabled;
@property (nonatomic, readonly) _Bool isGrokFree;
@property (nonatomic, readonly) _Bool isGrokFollowUpSuggestionsEnabled;
@property (nonatomic, readonly) _Bool isGrokMentionHydrationEnabled;
@property (nonatomic, readonly) _Bool isGrokThumbsDownFeedbackAutoReplyCommentEnabled;
@property (nonatomic, readonly) _Bool isGrokShowNUXEnabled;
@property (nonatomic, readonly) _Bool isGrokCitationsEnabled;
@property (nonatomic, readonly) _Bool isGrokAddNotParsedLinksEnabled;
@property (nonatomic) _Bool isGrokUnifyGatewayImagineVideoGenEnabled;
@property (nonatomic, readonly) _Bool shouldShowProfileSummary;
@property (nonatomic, readonly) long long minFollowersForProfileSummary;
@property (nonatomic, readonly) long long minPostsForProfileSummary;
@property (nonatomic, readonly) _Bool shouldShowGrokSearchSummary;
@property (nonatomic, readonly) _Bool isGrokPostTranslationEnabled;
@property (nonatomic, readonly) _Bool isGrokPostAutoTranslationEnabled;
@property (nonatomic, readonly) long long grokPostAutoTranslationMinCharacterLimit;
@property (nonatomic, readonly) _Bool isGrokPostInlineTranslationEnabled;
@property (nonatomic, readonly) _Bool isGrokPostTranslationCaptionToggleEnabled;
@property (nonatomic, readonly) _Bool isGrokBioTranslationEnabled;
@property (nonatomic, readonly) _Bool isGrokBioAutoTranslationEnabled;
@property (nonatomic, readonly) _Bool isGrokBioInlineTranslationEnabled;
@property (nonatomic, readonly) _Bool isGrokPollTranslationEnabled;
@property (nonatomic, readonly) _Bool isGrokImmersiveViewerAutoTranslationEnabled;
@property (nonatomic, readonly) _Bool isGrokTranslationHapticEnabled;
@property (nonatomic, readonly) _Bool isGrokBirdwatchTranslationEnabled;
@property (nonatomic, readonly) _Bool isGrokBirdwatchAutoTranslationEnabled;
@property (nonatomic, readonly) _Bool isGrokNotificationAutoTranslationEnabled;
@property (nonatomic, retain) Grok.GrokPostDownloadFeatureAccess *grokPostDownload;
@property (nonatomic, readonly) NSString *grokAppCampaignGrokPostsLink;
@property (nonatomic, readonly) NSString *grokAppCampaignTryVoiceModeLink;
@property (nonatomic, readonly) NSString *grokAppCampaignEditImageTransferLink;
@property (nonatomic, readonly) NSString *grokAppCampaignPostComposeVideoLink;
@property (nonatomic, readonly) NSString *grokAppCampaignCreateOwnVideoLink;
@property (nonatomic, readonly) NSString *grokAppCampaignPresetCreateVideoLink;
@property (nonatomic, readonly) NSString *grokAppCampaignPresetCreateImageLink;
@property (nonatomic, readonly) NSString *grokAppCampaignPresetTryImagineLink;
@property (nonatomic, readonly) NSString *grokAppCampaignEditImageDownloadButtonLink;
@property (nonatomic, readonly) NSString *grokImagineCtaAppStoreLink;
@property (nonatomic, readonly) NSString *grokCreateOwnTitle;
@property (nonatomic, readonly) NSString *grokImagineMakeVideoMenuTitle;
@property (nonatomic, readonly) long long grokImagineCreateOwnVideoButtonVariant;
@property (nonatomic, readonly) NSString *grokCreateOwnVideoNextToMadeWithAILabelTitle;
@property (nonatomic, readonly) _Bool isGrokComposerImagineEnabled;
@property (nonatomic, readonly) _Bool isGrokNewFeatureBannerEnabled;
@property (nonatomic, readonly) _Bool isGrokImagineSharedContainerEnabled;
@property (nonatomic, readonly) _Bool isGrokImagineTransferImageEnabled;
@property (nonatomic, readonly) _Bool isGrokTabModelSelectorSubmenuEnabled;
@property (nonatomic, readonly) NSString *grokAppCampaignDirectGrokAppFlowLink;
@property (nonatomic, readonly) NSString *grokEditWithGrokButtonUnderPostPreInstallTitle;
@property (nonatomic, readonly) NSString *grokEditWithGrokButtonUnderPostMadeWithAITitle;
@property (nonatomic, readonly) NSURL *grokEditWithGrokButtonUnderPostURL;
@property (nonatomic, readonly) NSString *grokCreateOwnImageNextToMadeWithAILabelTitle;
@property (nonatomic, readonly) NSString *grokCreateOwnImageTitle;
@property (nonatomic, readonly) _Bool isGrokEditImageNextToMadeWithAILabelEnabled;
@property (nonatomic, readonly) NSString *grokEditImageNextToMadeWithAILabelTitle;
@property (nonatomic, readonly) _Bool isGrokEditPhotoDetailViewButtonEnabled;
@property (nonatomic, readonly) long long grokImagineEditPhotoDetailViewButtonPlacement;
@property (nonatomic, readonly) _Bool isGrokImagineInterAppEditImageTransferEnabled;
@property (nonatomic, readonly) _Bool isGrokImagineInterAppEditImageTransferTimelineEnabled;
@property (nonatomic, readonly) _Bool isGrokImagineInterAppEditImageTransferDetailViewEnabled;
@property (nonatomic, readonly) _Bool isGrokImagineInterAppEditImageTransferSlideshowEnabled;
@property (nonatomic, readonly) _Bool isGrokImagineInterAppEditImageTransferLongPressMenuEnabled;

/* class methods */
+ (id)grokAppUrl;
+ (_Bool)isGrokAppInstalled;
+ (id)featureAccessForAccount:(id)account;

/* instance methods */
- (long long)grokImagineEditEntryOutcomeFor:(long long)_for;
- (_Bool)isSearchSummaryEligibleForQuery:(id)query;
- (id)grokTranslationCaptionTextWithSourceLanguage:(id)language;
- (id)grokTranslationAutoCaptionTextWithSourceLanguage:(id)language;
- (id)grokTranslationCaptionTextForScreenShotWithSourceLanguage:(id)language;
- (_Bool)isCreatedWithGrokLabelDomainNoImpressionWithVanityURLString:(id)urlstring;
- (_Bool)grokEditPhotoButtonShouldBeVisibleFor:(long long)_for grokAnnotations:(id)annotations;
- (id)init;

@end

#endif /* _TtC4Grok17GrokFeatureAccess_h */
