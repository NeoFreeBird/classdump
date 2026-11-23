//
#ifndef PTVBroadcastCompactViewLayout_h
#define PTVBroadcastCompactViewLayout_h
@import Foundation;

@class NSObject, UITraitCollection;

@interface PTVBroadcastCompactViewLayout : NSObject

@property (nonatomic) struct CGSize { double x0; double x1; } thumbnailSize;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } thumbnailPadding;
@property (nonatomic) double socialProofHeight;
@property (retain, nonatomic) UITraitCollection *traitCollection;

/* class methods */
+ (id)InterstitialFont;
+ (id)LiveFont;
+ (id)FeaturedFont;
+ (id)TimeAgoFont;
+ (id)NViewersFontLight;
+ (id)NViewersFontBold;
+ (id)TitleFont;
+ (id)PrivateChannelFont;
+ (id)SubtitleFont;
+ (id)SubtitleFontBold;
+ (double)BroadcastTableViewCellHeightWithFeaturedReasonHeight:(double)height SocialProofHeight:(double)height AndIsLastRow:(_Bool)row;
+ (struct CGSize { double x0; double x1; })DefaultThumbnailSizeIncludingPadding;
+ (struct CGSize { double x0; double x1; })DefaultThumbnailSize;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })DefaultThumbnailPadding;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })PrivateBroadcastImageOuterPadding;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })LivePillOuterPadding;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })LivePillInnerPadding;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })TimeAgoPillOuterPadding;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })TimeAgoPillInnerPadding;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })FeaturedPillOuterPadding;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })FeaturedPillInnerPadding;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })LiveViewersImageOuterPadding;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })ReplayViewersOuterPadding;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })PrivateChannelImageOuterPadding;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })PrivateChannelLabelOuterPadding;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })TitleOuterPadding;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })SubtitleOuterPadding;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })SubtitleOuterPaddingWithBroadcasterImage;
+ (struct CGSize { double x0; double x1; })BroadcasterProfileImageSize;
+ (id)InterstitialAttributed;
+ (id)PrivateBroadcastImage;
+ (id)LiveAttributed;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })LiveLabelFrameWithLiveTextSize:(struct CGSize { double x0; double x1; })size LivePillViewSize:(struct CGSize { double x0; double x1; })size;
+ (id)TimeAgoAttributed:(id)attributed;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })TimeAgoLabelFrameWithTimeAgoTextSize:(struct CGSize { double x0; double x1; })size TimeAgoPillViewSize:(struct CGSize { double x0; double x1; })size;
+ (id)FeaturedAttributed:(id)attributed;
+ (double)FeaturedLabelWidth:(id)width;
+ (double)FeaturedPillHeight;
+ (struct CGSize { double x0; double x1; })FeaturedPillViewSize:(double)size;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })FeaturedPillImageFrame:(struct CGSize { double x0; double x1; })frame TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })FeaturedLabelFrame:(struct CGSize { double x0; double x1; })frame TraitCollection:(id)collection;
+ (id)FeaturedPillImage;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })FeaturedReasonPadding;
+ (double)MaxWidthForFeaturedReasonWithTableViewWidth:(double)width;
+ (id)LiveViewersImage;
+ (id)LiveViewersAttributed:(long long)attributed;
+ (id)NTotalWatchedAttributed:(id)attributed;
+ (id)PrivateChannelImage;
+ (id)PrivateChannelNameAttributed:(id)attributed;
+ (double)PrivateChannelNameLabelWidth:(id)width ImageSize:(struct CGSize { double x0; double x1; })size availableWidth:(double)width;
+ (id)TitleAttributed:(id)attributed WithClickableHashTags:(_Bool)tags;
+ (id)SubtitleAttributed:(id)attributed WillDisplayBroadcasterProfileImageNextToSubtitle:(_Bool)subtitle;

/* instance methods */
- (id)initWithThumbnailSize:(struct CGSize { double x0; double x1; })size thumbnailPadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })padding;
- (id)init;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })LTRThumbnailFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })thumbnailFrameWithConstrainingSize:(struct CGSize { double x0; double x1; })size;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })LTRThumbnailImageFrameWithNumberOfGuestImages:(unsigned long long)images;
- (double)thumbnailWidthIncludingPadding;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })interstitialLabelFrameWithNumberOfGuestImages:(unsigned long long)images;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })LTRPrivateBroadcastFrameWithNumberOfGuestImages:(unsigned long long)images;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })privateBroadcastFrameWithConstrainingSize:(struct CGSize { double x0; double x1; })size numberOfGuestImages:(unsigned long long)images;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })LTRHasWatchedBroadcastFrameWithSize:(struct CGSize { double x0; double x1; })size;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })hasWatchedBroadcastFrameWithSize:(struct CGSize { double x0; double x1; })size;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })broadcastHiddenIconFrameWithSize:(struct CGSize { double x0; double x1; })size;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })broadcastHiddenFadeFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })LTRLivePillFrameWithLiveTextSize:(struct CGSize { double x0; double x1; })size;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })livePillFrameWithLiveTextSize:(struct CGSize { double x0; double x1; })size constrainingSize:(struct CGSize { double x0; double x1; })size;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })LTRTimeAgoPillFrameWithTimeAgoTextSize:(struct CGSize { double x0; double x1; })size;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })timeAgoPillFrameWithTimeAgoTextSize:(struct CGSize { double x0; double x1; })size constrainingSize:(struct CGSize { double x0; double x1; })size;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })LTRFeaturedPillViewFrame:(struct CGSize { double x0; double x1; })frame ConstrainingSize:(struct CGSize { double x0; double x1; })size;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })FeaturedPillViewFrame:(struct CGSize { double x0; double x1; })frame ConstrainingSize:(struct CGSize { double x0; double x1; })size;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForFeaturedReasonViewWithSize:(struct CGSize { double x0; double x1; })size;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })acceptsGuestsImageFrameWithLiveTextSize:(struct CGSize { double x0; double x1; })size constrainingSize:(struct CGSize { double x0; double x1; })size shouldShowAcceptsGuests:(_Bool)guests;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })LTRAcceptsGuestsImageFrameWithLiveTextSize:(struct CGSize { double x0; double x1; })size shouldShowAcceptsGuests:(_Bool)guests;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })acceptsGuestsImageFrameWithTimeAgoTextSize:(struct CGSize { double x0; double x1; })size constrainingSize:(struct CGSize { double x0; double x1; })size shouldShowAcceptsGuests:(_Bool)guests;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })LTRAcceptsGuestsImageFrameWithTimeAgoTextSize:(struct CGSize { double x0; double x1; })size shouldShowAcceptsGuests:(_Bool)guests;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })LTRAcceptsGuestsImageFrameWithReferenceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame shouldShowAcceptsGuests:(_Bool)guests;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })LTRSocialProofViewFrameWithConstrainingSize:(struct CGSize { double x0; double x1; })size;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })socialProofViewFrameWithConstrainingSize:(struct CGSize { double x0; double x1; })size;
- (double)liveViewersLabelWidth:(id)width liveTextSize:(struct CGSize { double x0; double x1; })size isFeatured:(_Bool)featured featuredPillViewSize:(struct CGSize { double x0; double x1; })size constrainingSize:(struct CGSize { double x0; double x1; })size;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })LTRLiveViewersImageFrameWithLiveTextSize:(struct CGSize { double x0; double x1; })size shouldShowAcceptsGuests:(_Bool)guests;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })liveViewersImageFrameWithLiveTextSize:(struct CGSize { double x0; double x1; })size constrainingSize:(struct CGSize { double x0; double x1; })size shouldShowAcceptsGuests:(_Bool)guests;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })LTRLiveViewersLabelFrame:(double)frame liveTextSize:(struct CGSize { double x0; double x1; })size shouldShowAcceptsGuests:(_Bool)guests;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })liveViewersLabelFrame:(double)frame liveTextSize:(struct CGSize { double x0; double x1; })size constrainingSize:(struct CGSize { double x0; double x1; })size shouldShowAcceptsGuests:(_Bool)guests;
- (double)nTotalWatchedLabelWidth:(id)width timeAgoTextSize:(struct CGSize { double x0; double x1; })size isFeatured:(_Bool)featured featuredPillViewSize:(struct CGSize { double x0; double x1; })size constrainingSize:(struct CGSize { double x0; double x1; })size;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })LTRReplayViewersLabelFrame:(double)frame timeAgoTextSize:(struct CGSize { double x0; double x1; })size shouldShowAcceptsGuests:(_Bool)guests;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })nTotalWatchedLabelFrame:(double)frame timeAgoTextSize:(struct CGSize { double x0; double x1; })size constrainingSize:(struct CGSize { double x0; double x1; })size shouldShowAcceptsGuests:(_Bool)guests;
- (double)maxAvailableWidthForContextViewsInTableViewCellOfSize:(struct CGSize { double x0; double x1; })size liveTextSize:(struct CGSize { double x0; double x1; })size liveViewersLabelWidth:(double)width;
- (double)maxAvailableWidthForContextViewsInTableViewCellOfSize:(struct CGSize { double x0; double x1; })size timeAgoTextSize:(struct CGSize { double x0; double x1; })size replayViewersLabelWidth:(double)width;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })LTRPrivateChannelIconFrameWithLabelWidth:(double)width ImageSize:(struct CGSize { double x0; double x1; })size ConstrainingSize:(struct CGSize { double x0; double x1; })size;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })PrivateChannelImageFrameWithLabelWidth:(double)width ImageSize:(struct CGSize { double x0; double x1; })size ConstrainingSize:(struct CGSize { double x0; double x1; })size;
- (double)liveChannelNameLabelWidth:(id)width liveTextSize:(struct CGSize { double x0; double x1; })size liveViewersLabelWidth:(double)width imageSize:(struct CGSize { double x0; double x1; })size constrainingSize:(struct CGSize { double x0; double x1; })size;
- (double)replayChannelNameLabelWidth:(id)width timeAgoTextSize:(struct CGSize { double x0; double x1; })size replayViewersLabelWidth:(double)width imageSize:(struct CGSize { double x0; double x1; })size constrainingSize:(struct CGSize { double x0; double x1; })size;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })LTRPrivateChannelLabelFrame:(double)frame ConstrainingSize:(struct CGSize { double x0; double x1; })size;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })PrivateChannelLabelFrame:(double)frame ConstrainingSize:(struct CGSize { double x0; double x1; })size;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })LTRTitleFrame:(struct CGSize { double x0; double x1; })frame;
- (double)LTRTitleLabelOriginX;
- (struct CGSize { double x0; double x1; })titleSize:(id)size subtitle:(id)subtitle isSubtitleVisible:(_Bool)visible featuredReasonHeight:(double)height constrainingSize:(struct CGSize { double x0; double x1; })size;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleFrameWithSize:(struct CGSize { double x0; double x1; })size constrainingSize:(struct CGSize { double x0; double x1; })size;
- (struct CGSize { double x0; double x1; })measuredSubtitleSizeWithConstrainingSize:(struct CGSize { double x0; double x1; })size isDisplayingBroadcasterProfileImage:(_Bool)image attributedSubtitle:(id)subtitle;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })LTRSubtitleFrameWithConstrainingSize:(struct CGSize { double x0; double x1; })size isDisplayingBroadcasterProfileImage:(_Bool)image measuredSubtitleSize:(struct CGSize { double x0; double x1; })size;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })subtitleFrameWithConstrainingSize:(struct CGSize { double x0; double x1; })size isDisplayingBroadcasterProfileImage:(_Bool)image measuredSubtitleSize:(struct CGSize { double x0; double x1; })size;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })LTRBroadcasterProfileImageViewFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })broadcasterProfileImageViewFrameWithConstrainingSize:(struct CGSize { double x0; double x1; })size;

@end

#endif /* PTVBroadcastCompactViewLayout_h */
