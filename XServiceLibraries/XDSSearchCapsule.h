//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
