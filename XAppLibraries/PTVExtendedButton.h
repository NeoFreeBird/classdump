//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVExtendedButton_h
#define PTVExtendedButton_h
@import Foundation;

@class UIButton, UIView;

@interface PTVExtendedButton : UIButton {
    /* instance variables */
    UIView *_debugHitFrameView;
    id /* block */ _isHighlightedCallback;
}

@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } hitTestEdgeInsets;

/* instance methods */
- (void)setHighlighted:(_Bool)highlighted;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (void)setIsHighlightedCallback:(id /* block */)callback;

@end

#endif /* PTVExtendedButton_h */
