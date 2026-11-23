//
#ifndef TUCBlurBackgroundImageComponentView_h
#define TUCBlurBackgroundImageComponentView_h
@import Foundation;

#include "TUCImageComponentView.h"
#include "TUCImageViewLoadDelegate-Protocol.h"

@interface TUCBlurBackgroundImageComponentView : TUCImageComponentView <TUCImageViewLoadDelegate> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 backgroundImageView;
    @40@0:8:16@24@32 $__lazy_storage_$_fallbackHighlightView;
}

/* class methods */
+ (id)sharedLayoutDelegate;

/* instance methods */
- (void)didLoadImage:(id)image;
- (void)handleTapWithSender:(id)sender;
- (id)initWithImageView:(id)view hideTitleForSalesWebCard:(_Bool)card disableInteractionForSalesWebCard:(_Bool)card trimVanityZeroWidthCharacters:(_Bool)characters mediaExpandEnabledForSalesWebCard:(_Bool)card;
- (id)initWithCoder:(id)coder;
- (void)cleanupMediaView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* TUCBlurBackgroundImageComponentView_h */
