//
#ifndef _TtC21TweetMediaAttachments14MultiMediaView_h
#define _TtC21TweetMediaAttachments14MultiMediaView_h
@import Foundation;

#include "TAVUIAutoplayable-Protocol.h"
#include "TUIImageViewFetchHelperDelegate-Protocol.h"
#include "_TtP21TweetMediaAttachments18MultiMediaPlayable_-Protocol.h"

@class NSArray, Swift.Bool, TIPImagePipeline, TweetMediaAttachments.MultiMediaOverflowOverlayView ?, TweetMediaAttachments.MultiMediaView _$s_Si -> __C.TIPImageLoadSource _$stcSg, TweetMediaAttachments.MultiMediaView _$s_SiSStcSg ->, TweetMediaAttachments.MultiMediaView _$s_SitcSg ->, TweetMediaAttachments.MultiMediaView.AdvancingAutoplayPolicy ?, TweetMediaAttachments.MultiMediaView.DisabledPlayableFilterPolicy ?, TweetMediaAttachments.MultiMediaView.DisplayOptions, TweetMediaAttachments.MultiMediaViewDisplayType, UIView, _$s12CoreGraphics7CGFloatVMn, _$s6XVideo15AutoplayManagerCMn ?, _$s6XVideo20AutoplayUpdatePolicyCMn ?, _$s6XVideo23AutoplayDisablingFilterCMn ?, _$sSa -> TweetMediaAttachments.MultiMediaViewEntry, _$sSa -> TweetMediaAttachments.MultiMediaViewImageView, _$sSay21TweetMediaAttachments05MultiB8Playable_So6UIViewCXcG, _$sSo12UIScrollViewCSgXw, _$sSo16TIPImagePipelineCSg, _$sSo6UIViewC, _$ss5Int64VMn ?;

@interface TweetMediaAttachments.MultiMediaView : UIView <TAVUIAutoplayable, TUIImageViewFetchHelperDelegate> { // (Swift)
    /* instance variables */
    weak __C.UIScrollView? parentScrollView;
    TweetMediaAttachments.MultiMediaView.DisplayOptions options;
    Swift.Bool isBorderHidden;
    Swift.Bool isAltTextBadgeEnabled;
    TweetMediaAttachments.MultiMediaOverflowOverlayView ? overflowOverlayView;
    __C.UIView autoplayableGeometryView;
    Swift.Array -> TweetMediaAttachments.MultiMediaViewEntry mediaEntries;
    Swift.Array -> TweetMediaAttachments.MultiMediaViewImageView imageViewPool;
    [__C.UIView & TweetMediaAttachments.MultiMediaPlayable] playableViews;
    nominal type descriptor for XVideo.AutoplayDisablingFilter ? $__lazy_storage_$_autoplayDisablingFilter;
    nominal type descriptor for XVideo.AutoplayUpdatePolicy ? $__lazy_storage_$_autoplayUpdatePolicy;
    TweetMediaAttachments.MultiMediaView.DisabledPlayableFilterPolicy ? $__lazy_storage_$_videoErrorFilterPolicy;
    TweetMediaAttachments.MultiMediaView.AdvancingAutoplayPolicy ? $__lazy_storage_$_advancingAutoplayPolicy;
    nominal type descriptor for XVideo.AutoplayManager ? autoplayManager;
}

@property (nonatomic, readonly) UIView *autoplayableView;
@property (nonatomic, readonly) long long autoplayableType;
@property (nonatomic, readonly) long long numberOfVisibleMediaViews;
@property (nonatomic, readonly) NSArray *inlineMediaInfos;
@property (nonatomic, readonly) long long inlineMediaSourceStatusId;
@property (nonatomic, copy) id /* block */ multiPhotoTapBlock;
@property (nonatomic, copy) id /* block */ multiPhotoDoubleTapBlock;
@property (nonatomic, copy) id /* block */ multiPhotoLoadedBlock;
@property (nonatomic, copy) id /* block */ multiPhotoLoadFailedBlock;
@property (nonatomic, copy) id /* block */ multiPhotoAltTextTapBlock;
@property (nonatomic) long long displayType;
@property (nonatomic) _Bool useAdaptiveMediaLayout;
@property (nonatomic, copy) NSArray *images;
@property (nonatomic, readonly) UIView<TweetMediaAttachments.MultiMediaPlayable> *activePlayableView;
@property (nonatomic) double gutterWidth;
@property (nonatomic) double borderCornerRadius;
@property (nonatomic, retain) TIPImagePipeline *imagePipeline;
@property (nonatomic) _Bool altTextBadgeEnabled;

/* class methods */
+ (double)defaultHeightOverWidthRatio;
+ (double)mediaMinimumImageAspectRatio;
+ (double)mediaMaximumImageAspectRatio;
+ (struct CGSize { double x0; double x1; })preferredSizeForWidth:(double)width mediaCount:(long long)count primaryMediaDimensions:(struct CGSize { double x0; double x1; })dimensions isAttachmentPlayer:(_Bool)player displayType:(long long)type isAutoplayEnabled:(_Bool)enabled;
+ (double)adaptiveMediaHeightWithSquareAspectRatioForWidth:(double)width imageSize:(struct CGSize { double x0; double x1; })size;

/* instance methods */
- (void)didBecomeActiveAutoplayableWithManager:(id)manager;
- (void)willResignAsActiveAutoplayableWithManager:(id)manager;
- (void)tui_fetchHelper:(id)helper didLoadInitialImageFromSource:(long long)source;
- (void)tui_fetchHelper:(id)helper didFailToLoadImageWithError:(id)error;
- (void)tui_fetchHelper:(id)helper readyToConfigureView:(id)view state:(long long)state;
- (id)tui_focusRectanglesForFocusMode:(long long)mode inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds forFetchHelper:(id)helper;
- (long long)tui_scaleAspectFillFocusModeForFetchHelper:(id)helper;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame images:(id)images;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (long long)mediaIndexAtPoint:(struct CGPoint { double x0; double x1; })point;
- (id)imageAtIndex:(long long)index;
- (id)mediaViewAtIndex:(long long)index;
- (id)overflowOverlayViewCoveringMediaAtIndex:(long long)index;
- (id)makeOverflowOverlayTransitionViewCoveringMediaAtIndex:(long long)index;
- (id)altTextBadgeAtIndex:(long long)index;
- (void)setAttributionPillView:(id)view atIndex:(long long)index;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mediaItemContentsRectAtIndex:(long long)index;
- (long long)mediaItemContentModeAtIndex:(long long)index;
- (id)mediaInfoAtIndex:(long long)index;
- (void)reset;
- (void)multiPhotoDidDoubleTap:(id)tap;
- (void)multiPhotoDidTap:(id)tap;

@end

#endif /* _TtC21TweetMediaAttachments14MultiMediaView_h */
