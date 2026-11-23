//
#ifndef T1NestedQuotePreviewView_h
#define T1NestedQuotePreviewView_h
@import Foundation;

@class UIView;

@interface T1NestedQuotePreviewView : UIView { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *tapHandler;
    NSNumber"16@0:8 *mediaTapHandler;
    NSNumber"16@0:8 *logsVariantExposure;
    NSNumber"16@0:8 *authorView;
    NSNumber"16@0:8 *bodyTextView;
    NSNumber"16@0:8 *thumbnailView;
    NSNumber"16@0:8 *tapHighlightView;
    NSNumber"16@0:8 *mediaTapHighlightView;
    NSNumber"16@0:8 *viewModel;
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *content;
    NSNumber"16@0:8 *cachedSecondaryTextHeight;
}

@property (nonatomic, readonly) UIView *mediaOriginView;
@property (nonatomic, readonly) long long mediaOriginStatusID;
@property (nonatomic, readonly) double mediaOriginCornerRadius;
@property (nonatomic, readonly) long long mediaOriginMediaIndex;

/* instance methods */
- (id)makeMediaTransitionView;
- (id)makeMediaTransitionOverlaySnapshotsAndHide;
- (void)restoreMediaTransitionOverlays;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)didTap;
- (void)pressedStateDidChange:(id)change;
- (void)didTapMedia;

@end

#endif /* T1NestedQuotePreviewView_h */
