//
#ifndef _TtC13QuickComposer37QuickComposerChevronHitForwardingView_h
#define _TtC13QuickComposer37QuickComposerChevronHitForwardingView_h
@import Foundation;

@class QuickComposer.QuickComposerChevronView ?, QuickComposer.QuickComposerView ?, UIView;

@interface QuickComposer.QuickComposerChevronHitForwardingView : UIView { // (Swift)
    /* instance variables */
    QuickComposer.QuickComposerChevronView ? chevron;
    QuickComposer.QuickComposerView ? composer;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;

@end

#endif /* _TtC13QuickComposer37QuickComposerChevronHitForwardingView_h */
