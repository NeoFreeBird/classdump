//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVShareBroadcastView_h
#define PTVShareBroadcastView_h
@import Foundation;

#include "PTVBroadcastController.h"
#include "PTVBroadcastOverflowScrollStackContainerView.h"
#include "PTVButton.h"
#include "PTVDividerView.h"
#include "PTVScrubbingThumbnailView.h"
#include "PTVScrubbingThumbnailViewDelegate-Protocol.h"
#include "PTVShareBroadcastViewDelegate-Protocol.h"
#include "PTVShareHighlightScrubbingView.h"
#include "PTVShareHighlightScrubbingViewDelegate-Protocol.h"

@class NSString, UIActivityIndicatorView, UIButton, UIImageView, UIScrollView, UIStackView;

@interface PTVShareBroadcastView : PTVBroadcastOverflowScrollStackContainerView <PTVShareHighlightScrubbingViewDelegate, PTVScrubbingThumbnailViewDelegate> {
    /* instance variables */
    _Bool _hasLoadedShareDestinationButtons;
    _Bool _hasScrolledToEndOfShareDestinations;
}

@property (readonly, nonatomic) PTVButton *shareBroadcastButton;
@property (readonly, nonatomic) PTVDividerView *shareBroadcastButtonDivider;
@property (readonly, nonatomic) PTVButton *shareHighlightButton;
@property (readonly, nonatomic) UIActivityIndicatorView *shareHighlightActivityIndicatorView;
@property (readonly, nonatomic) UIImageView *shareHighlightErrorIconView;
@property (readonly, nonatomic) PTVScrubbingThumbnailView *shareHighlightThumbnailView;
@property (readonly, nonatomic) PTVShareHighlightScrubbingView *shareHighlightScrubbingView;
@property (readonly, nonatomic) PTVDividerView *shareHighlightButtonDivider;
@property (nonatomic) _Bool shareHighlightThumbnailViewHidden;
@property (nonatomic) _Bool shareHighlightScrubbingViewHidden;
@property (readonly, nonatomic) UIScrollView *shareDestinationsScrollView;
@property (readonly, nonatomic) UIStackView *shareDestinationsView;
@property (nonatomic) _Bool hasLoadedThumbnailImage;
@property (readonly, nonatomic) PTVBroadcastController *broadcastController;
@property (weak, nonatomic) id <PTVShareBroadcastViewDelegate> delegate;
@property (readonly, nonatomic) long long shareHighlightState;
@property (readonly, nonatomic) double highlightShareTime;
@property (readonly, nonatomic) double selectedTimecode;
@property (readonly, nonatomic) UIButton *shareURLButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)ShareTypeButton;
+ (id)ShareTitleFont;
+ (double)ShareDestinationButtonSpacing;
+ (id)ShareDestinationButtonWithImage:(id)image LocalizedTitle:(id)title AccessibilityLabel:(id)label;
+ (id)ShareDestinationButtonWithImage:(id)image;
+ (id)ComposeTweetButton;
+ (id)ComposeDirectMessageButton;
+ (id)ShareURLButton;

/* instance methods */
- (void)shareHighlightScrubbingViewDidUpdate:(id)update;
- (void)scrubbingThumbnailViewDidLoadThumbnail:(id)thumbnail;
- (id)initWithBroadcastController:(id)controller delegate:(id)delegate currentVideoPlayerSize:(struct CGSize { double x0; double x1; })size shouldFillScrubbingViewByDefault:(_Bool)_default;
- (void)traitCollectionDidChange:(id)change;
- (void)willMoveToSuperview:(id)superview;
- (void)layoutSubviews;
- (void)didTapEmptySpace;
- (void)didSelectShareBroadcast;
- (void)selectShareBroadcastAnimated:(_Bool)animated;
- (void)didSelectShareHighlight;
- (void)selectShareHighlightAnimated:(_Bool)animated;
- (void)setShareHighlightSelected:(_Bool)selected animated:(_Bool)animated;
- (void)updateAlphaForShareHighlightSelected:(_Bool)selected;
- (void)loadShareDestinationButtonsIfNeeded;
- (void)loadShareDestinationButtons;
- (void)addShareDestinationButton:(id)button;
- (void)addComposeTweetButtonIfNeeded;
- (void)didSelectComposeTweet:(id)tweet;
- (void)addComposeDirectMessageButtonIfNeeded;
- (void)didSelectComposeDirectMessage:(id)message;
- (void)addShareURLButton;
- (void)didSelectShareURL:(id)url;
- (void)configureWithSelectedHighlightShareTime:(double)time minimumHighlightShareTime:(double)time maximumHighlightShareTime:(double)time;
- (void)highlightShareTimeDidChange;
- (void)willBeginLoadingHighlight;
- (void)didFailToLoadHighlight;
- (void)didFinishLoadingHighlight;
- (void)transitionToShareHighlightState:(long long)state;
- (void)executeState;
- (void)alphaState;
- (_Bool)isSharingHighlightEnabled;
- (_Bool)isSharingHighlightSelected;

@end

#endif /* PTVShareBroadcastView_h */
