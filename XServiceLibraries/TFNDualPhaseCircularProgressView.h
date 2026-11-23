//
#ifndef TFNDualPhaseCircularProgressView_h
#define TFNDualPhaseCircularProgressView_h
@import Foundation;

#include "TFNDualPhaseCircularProgressViewDataSource-Protocol.h"
#include "TFNLayoutMetricsEnvironment-Protocol.h"

@class UIColor, UIView;

@interface TFNDualPhaseCircularProgressView : UIView <TFNLayoutMetricsEnvironment> { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 currentCount;
    B24@0:8@"NSString"16 totalLimit;
    B24@0:8@"NSString"16 ringLimit;
    B24@0:8@"NSString"16 ringWarningLimit;
    B24@0:8@"NSString"16 fillWarningLimit;
    B24@0:8@"NSString"16 fillOverflowLimit;
    B24@0:8@"NSString"16 warningColor;
    B24@0:8@"NSString"16 errorColor;
    B24@0:8@"NSString"16 warningTextColor;
    B24@0:8@"NSString"16 errorTextColor;
    B24@0:8@"NSString"16 overflowTextColor;
    B24@0:8@"NSString"16 characterCounterLabelFont;
    B24@0:8@"NSString"16 ringBackgroundArc;
    B24@0:8@"NSString"16 ringProgressArc;
    B24@0:8@"NSString"16 circleProgressFill;
    B24@0:8@"NSString"16 characterCountLabel;
}

@property (nonatomic, weak) id <TFNDualPhaseCircularProgressViewDataSource> dataSource;
@property (nonatomic, retain) UIColor *ringBackgroundColor;
@property (nonatomic, retain) UIColor *progressColor;
@property (nonatomic, retain) UIColor *progressTextColor;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)reloadData;
- (void)traitCollectionDidChange:(id)change;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)calculatedLayoutMetrics;
- (void)layoutMetricsDidChange:(id)change to:(id)to;

@end

#endif /* TFNDualPhaseCircularProgressView_h */
