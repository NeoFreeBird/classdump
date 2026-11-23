//
#ifndef XDSSearchCapsule_h
#define XDSSearchCapsule_h
@import Foundation;

@class UIView;

@interface XDSSearchCapsule : UIView { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 hostedView;
}

/* class methods */
+ (double)height;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)host:(id)host;
- (void)layoutSubviews;

@end

#endif /* XDSSearchCapsule_h */
