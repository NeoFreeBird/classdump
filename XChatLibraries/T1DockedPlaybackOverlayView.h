//
#ifndef T1DockedPlaybackOverlayView_h
#define T1DockedPlaybackOverlayView_h
@import Foundation;

@class UIView;

@interface T1DockedPlaybackOverlayView : UIView { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 coverView;
    @40@0:8:16@24@32 label;
    @40@0:8:16@24@32 fullText;
    @40@0:8:16@24@32 iconOnlyText;
    @40@0:8:16@24@32 isShowingIconOnly;
}

/* class methods */
+ (double)fadeDuration;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)playAppearanceFade;
- (void)traitCollectionDidChange:(id)change;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* T1DockedPlaybackOverlayView_h */
