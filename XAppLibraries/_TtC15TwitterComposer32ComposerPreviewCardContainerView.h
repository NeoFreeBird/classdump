//
#ifndef _TtC15TwitterComposer32ComposerPreviewCardContainerView_h
#define _TtC15TwitterComposer32ComposerPreviewCardContainerView_h
@import Foundation;

@class Swift.Bool, TwitterComposer.ComposerPreviewRenderer, UIView;

@interface TwitterComposer.ComposerPreviewCardContainerView : UIView { // (Swift)
    /* instance variables */
    TwitterComposer.ComposerPreviewRenderer renderer;
    Swift.Bool hasAppeared;
    Swift.Bool isDismissing;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC15TwitterComposer32ComposerPreviewCardContainerView_h */
