//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef URTViewControllerUXConfiguration_h
#define URTViewControllerUXConfiguration_h
@import Foundation;

@class NSObject;

@interface URTViewControllerUXConfiguration : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 timelineRenderStyle;
    @40@0:8:16@24@32 tweetRenderStyle;
    @40@0:8:16@24@32 topCursorLoadType;
    @40@0:8:16@24@32 inlineFeedbackEnabled;
    @40@0:8:16@24@32 inlineFeedbackUnfollowEnabled;
    @40@0:8:16@24@32 navigationItems;
    @40@0:8:16@24@32 emptyStateConfiguration;
    @40@0:8:16@24@32 dataViewAccessibilityIdentifier;
    @40@0:8:16@24@32 restoreScrollPositionType;
    @40@0:8:16@24@32 showActionButton;
    @40@0:8:16@24@32 showMuteConversationItem;
    @40@0:8:16@24@32 loadTopControlShouldUpdateContentInsetWhenUpdatingProgrammatically;
    @40@0:8:16@24@32 alwaysShowActivityIndicatorWhenLoading;
    @40@0:8:16@24@32 initialLoadingStyle;
    @40@0:8:16@24@32 enableSpaceAvatarPresence;
    @40@0:8:16@24@32 treatUnmarkedEntriesAsRead;
    @40@0:8:16@24@32 showUnreadBackgroundColor;
    @40@0:8:16@24@32 adDisplayLocation;
    @40@0:8:16@24@32 followControlTypeOverride;
    @40@0:8:16@24@32 hideFocalStatusAttachment;
    @40@0:8:16@24@32 disableNestedQuotedStatus;
    @40@0:8:16@24@32 preferMediumQuotedTweets;
    @40@0:8:16@24@32 excludedStatusIDs;
    @40@0:8:16@24@32 showsRepliesOnly;
    @40@0:8:16@24@32 excludedConversationSections;
    @40@0:8:16@24@32 excludesPromotedContent;
    @40@0:8:16@24@32 useAlternateBackgroundColor;
    @40@0:8:16@24@32 hostProvidesBackground;
    @40@0:8:16@24@32 timelineAppearance;
    @40@0:8:16@24@32 hidesScrollIndicator;
    @40@0:8:16@24@32 showRankBadge;
    @40@0:8:16@24@32 tableHeaderView;
    @40@0:8:16@24@32 showDownvote;
    @40@0:8:16@24@32 boostContext;
    @40@0:8:16@24@32 dataViewPresentation;
}

/* instance methods */
- (id)init;

@end

#endif /* URTViewControllerUXConfiguration_h */
