//
#ifndef T1YTAttributionView_h
#define T1YTAttributionView_h
@import Foundation;

@class UIView;

@interface T1YTAttributionView : UIView { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *attributionTapURL;
    NSNumber"16@0:8 *label;
    NSNumber"16@0:8 *imageView;
}

/* class methods */
+ (double)preferredHeight;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* T1YTAttributionView_h */
