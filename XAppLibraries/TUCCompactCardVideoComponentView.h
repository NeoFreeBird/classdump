//
#ifndef TUCCompactCardVideoComponentView_h
#define TUCCompactCardVideoComponentView_h
@import Foundation;

#include "TUCImageViewLoadDelegate-Protocol.h"
#include "TUCVideoComponentView.h"

@interface TUCCompactCardVideoComponentView : TUCVideoComponentView <TUCImageViewLoadDelegate> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 backgroundImageView;
    @40@0:8:16@24@32 $__lazy_storage_$_fallbackHighlightView;
    @40@0:8:16@24@32 $__lazy_storage_$_layoutToggle;
    @40@0:8:16@24@32 videoViewUpdateBlock;
}

@property (nonatomic) long long layoutToggleState;

/* class methods */
+ (id)sharedLayoutDelegate;

/* instance methods */
- (void)videoViewTapped:(id)tapped;
- (void)videoView:(id)view didPlayToEndWithCurrentPlaybackState:(id)state;
- (void)didLoadImage:(id)image;
- (void)handleTapWithSender:(id)sender;
- (void)handleLayoutToggleWithSender:(id)sender;
- (id)initWithVideoView:(id)view videoViewUpdateBlock:(id /* block */)block;
- (void)updateViewWithIsExpanded:(_Bool)expanded cornerRadius:(double)radius;
- (id)initWithVideoView:(id)view disableInteractionForSalesWebCard:(_Bool)card hideVanityForSalesWebCard:(_Bool)card trimVanityZeroWidthCharacters:(_Bool)characters features:(id)features;

@end

#endif /* TUCCompactCardVideoComponentView_h */
