//
#ifndef _TtC13XDesignSystemP33_B7299E07628B7397557602EB2919B45916LinkOnlyTextView_h
#define _TtC13XDesignSystemP33_B7299E07628B7397557602EB2919B45916LinkOnlyTextView_h
@import Foundation;

@class UITextView;

@interface XDesignSystem.(LinkOnlyTextView in _B7299E07628B7397557602EB2919B459) : UITextView { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 onLinkTap;
}

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (void)handleTap:(id)tap;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame textContainer:(id)container;

@end

#endif /* _TtC13XDesignSystemP33_B7299E07628B7397557602EB2919B45916LinkOnlyTextView_h */
