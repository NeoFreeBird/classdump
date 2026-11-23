//
#ifndef TFNLayoutMetricsLayoutGuide_h
#define TFNLayoutMetricsLayoutGuide_h
@import Foundation;

@class NSLayoutConstraint, NSObject, UILayoutGuide;

@interface TFNLayoutMetricsLayoutGuide : NSObject {
    /* instance variables */
    _Bool _hasInsetsConstraints;
    _Bool _hasDimensionsConstraints;
}

@property (readonly, nonatomic) id /* block */ constraintsBlock;
@property (readonly, nonatomic) UILayoutGuide *layoutGuide;
@property (readonly, nonatomic) NSLayoutConstraint *topConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *bottomConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *leadingConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *trailingConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *widthConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *heightConstraint;

/* instance methods */
- (id)initWithConstraintsBlock:(id /* block */)block;
- (void)constrainToCanvasView:(id)view layoutMetrics:(id)metrics insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (void)constrainToCanvasView:(id)view layoutMetrics:(id)metrics origin:(struct CGPoint { double x0; double x1; })origin size:(struct CGSize { double x0; double x1; })size;
- (void)clearLayoutConstraints;

@end

#endif /* TFNLayoutMetricsLayoutGuide_h */
