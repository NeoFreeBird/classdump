//
#ifndef _TtC4Grok33GrokImagineToolbarPassthroughView_h
#define _TtC4Grok33GrokImagineToolbarPassthroughView_h
@import Foundation;

@class Grok.GrokImagineToolbarViewModel, UIView;

@interface Grok.GrokImagineToolbarPassthroughView : UIView { // (Swift)
    /* instance variables */
    Grok.GrokImagineToolbarViewModel toolbarViewModel;
}

/* instance methods */
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC4Grok33GrokImagineToolbarPassthroughView_h */
