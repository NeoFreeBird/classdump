//
#ifndef TCRComposerHeaderAccessorySlot_h
#define TCRComposerHeaderAccessorySlot_h
@import Foundation;

@class UIView;

@interface TCRComposerHeaderAccessorySlot : UIView { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 contentViews;
    @40@0:8:16@24@32 fadingViews;
    @40@0:8:16@24@32 transitionGeneration;
    @40@0:8:16@24@32 $__lazy_storage_$_barAppearance;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)setContentViews:(id)views animated:(_Bool)animated;
- (void)didMoveToWindow;
- (void)layoutSubviews;

@end

#endif /* TCRComposerHeaderAccessorySlot_h */
