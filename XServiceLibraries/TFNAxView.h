//
#ifndef TFNAxView_h
#define TFNAxView_h
@import Foundation;

@class NSObject, UIView;

@interface TFNAxView : UIView {
    /* instance variables */
    NSObject *_parent;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame parent:(id)parent;
- (_Bool)isAccessibilityElement;

@end

#endif /* TFNAxView_h */
