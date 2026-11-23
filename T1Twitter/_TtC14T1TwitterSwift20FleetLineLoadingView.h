//
#ifndef _TtC14T1TwitterSwift20FleetLineLoadingView_h
#define _TtC14T1TwitterSwift20FleetLineLoadingView_h
@import Foundation;

#include "TFNLayoutMetricsEnvironment-Protocol.h"

@class T1TwitterSwift.FleetLineLoadingView.State, UIView, _$s12CoreGraphics7CGFloatVMn, _$sSd, _$sSo11UIStackViewC, _$sSo15TFNGradientViewC, _$sSo6UIViewC, _$sSo7UILabelCSg;

@interface T1TwitterSwift.FleetLineLoadingView : UIView <TFNLayoutMetricsEnvironment> { // (Swift)
    /* instance variables */
    nominal type descriptor for CoreGraphics.CGFloat itemSize;
    nominal type descriptor for CoreGraphics.CGFloat itemSpacing;
    __C.UIStackView stackView;
    __C.TFNGradientView gradientView;
    __C.UIView loadingBackgroundView;
    __C.UILabel? errorLabel;
    nominal type descriptor for CoreGraphics.CGFloat gradientWidth;
    Swift.Double gradientAnimationDuration;
    Swift.Double transitionDuration;
    nominal type descriptor for CoreGraphics.CGFloat loadingBackgroundViewAlpha;
    T1TwitterSwift.FleetLineLoadingView.State currentState;
}

@property (nonatomic) _Bool hidden;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (_Bool)isHidden;
- (void)layoutMetricsDidChange:(id)change to:(id)to;
- (void)layoutSubviews;

@end

#endif /* _TtC14T1TwitterSwift20FleetLineLoadingView_h */
