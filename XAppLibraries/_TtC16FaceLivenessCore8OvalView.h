//
#ifndef _TtC16FaceLivenessCore8OvalView_h
#define _TtC16FaceLivenessCore8OvalView_h
@import Foundation;

@class Swift.Bool, UIView, __C.CGRect;

@interface FaceLivenessCore.OvalView : UIView { // (Swift)
    /* instance variables */
    __C.CGRect ovalFrame;
    Swift.Bool forceWhiteFill;
}

/* instance methods */
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)traitCollectionDidChange:(id)change;
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC16FaceLivenessCore8OvalView_h */
