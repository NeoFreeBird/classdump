//
#ifndef TAXStatusViewAccessibilityAnnouncementModel_h
#define TAXStatusViewAccessibilityAnnouncementModel_h
@import Foundation;

@class NSObject, NSString;

@interface TAXStatusViewAccessibilityAnnouncementModel : NSObject // (Swift)

@property (nonatomic, copy) NSString *axLeadingStatusContext;
@property (nonatomic, copy) NSString *axPendingTweetString;
@property (nonatomic, copy) NSString *axDisplayName;
@property (nonatomic, copy) NSString *axUserName;
@property (nonatomic, copy) NSString *axUserVerified;
@property (nonatomic, copy) NSString *axDesignatorDescription;
@property (nonatomic, copy) NSString *axSuperFollowBadgeDescription;
@property (nonatomic, copy) NSString *axStatus;
@property (nonatomic, copy) NSString *axVisibleCardForwardViewAxLabel;
@property (nonatomic, copy) NSString *axTrailingStatusContext;
@property (nonatomic, copy) NSString *axStatusConversationContext;
@property (nonatomic, copy) NSString *axNonCompliantInterstitial;
@property (nonatomic, copy) NSString *axPossiblySensitiveContent;
@property (nonatomic, copy) NSString *axTimestamp;
@property (nonatomic, copy) NSString *axConversationControlContext;
@property (nonatomic, copy) NSString *axEngagementCount;
@property (nonatomic, copy) NSString *axMediaString;
@property (nonatomic, copy) NSString *axArticleString;
@property (nonatomic, copy) NSString *axForwardPivotString;
@property (nonatomic, copy) NSString *axCommunityName;
@property (nonatomic, copy) NSString *axEditedString;
@property (nonatomic, copy) NSString *axSuperFollowsEducation;
@property (nonatomic, copy) NSString *axDisplayNameForQuotedTweet;
@property (nonatomic, copy) NSString *axUserNameForQuotedTweet;
@property (nonatomic, copy) NSString *axQuotedUserVerified;
@property (nonatomic, copy) NSString *axConversationContextForQuotedTweet;
@property (nonatomic, copy) NSString *axStatusForQuotedTweet;
@property (nonatomic, copy) NSString *axMediaStringForQuotedTweet;
@property (nonatomic, copy) NSString *axArticleStringForQuotedTweet;
@property (nonatomic, copy) NSString *axForwardPivotStringForQuotedTweet;
@property (nonatomic, copy) NSString *axPollIndicatorStringForQuotedTweet;

/* instance methods */
- (id)outputQuotedPivotStringTweetElements;
- (id)outputQuotedStringTweetElements;
- (id)outputQuotedStringTweetDetailsElements;
- (id)outputPreQuoteStringTweetElements;
- (id)outputPreQuoteStringTweetDetailsElements;
- (id)outputCoreStatusViewCardViewAccessibleTweetElements;
- (id)outputAttachmentIsTombstoneTweetElements;
- (id)outputPossiblySensitiveTweetElements;
- (id)outputDefaultTweetElements;
- (id)outputUnifiedCardAttachmentNotCompactPromotedElements;
- (id)outputUnifiedCardAttachmentCompactPromotedElements;
- (id)init;

@end

#endif /* TAXStatusViewAccessibilityAnnouncementModel_h */
