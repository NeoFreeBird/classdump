//
#ifndef TFNCircularCountProgressView_h
#define TFNCircularCountProgressView_h
@import Foundation;

#include "TFNLayoutMetricsEnvironment-Protocol.h"

@class CAShapeLayer, NSNumberFormatter, NSString, UIColor, UIFont, UILabel, UINotificationFeedbackGenerator, UIView;
@protocol TFNCircularCountProgressDataSource;

@interface TFNCircularCountProgressView : UIView <TFNLayoutMetricsEnvironment> {
    /* instance variables */
    CAShapeLayer *_backgroundArc;
    CAShapeLayer *_progressArc;
    double _arcDiameter;
    double _actStrokeWidth;
    double _progressPercent;
    long long _remainingCharacterCount;
    NSNumberFormatter *_numberFormatter;
    unsigned long long _currentDisplayMode;
    UILabel *_remainderCharacterCountLabel;
    UINotificationFeedbackGenerator *_hapticFeedbackGenerator;
}

@property (weak, nonatomic) id <TFNCircularCountProgressDataSource> dataSource;
@property (retain, nonatomic) UIFont *remainderCountTextFont;
@property (retain, nonatomic) UIColor *remainderCountTextNormalColor;
@property (retain, nonatomic) UIColor *remainderCountTextWarningColor;
@property (retain, nonatomic) UIColor *remainderCountTextErrorColor;
@property (retain, nonatomic) UIColor *arcForegroundNormalColor;
@property (retain, nonatomic) UIColor *arcForegroundWarningColor;
@property (retain, nonatomic) UIColor *arcForegroundErrorColor;
@property (retain, nonatomic) UIColor *arcBackgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)traitCollectionDidChange:(id)change;
- (void)_tfn_updateArcColorsWithoutAnimation;
- (void)_tfn_updateArcColors;
- (void)reloadData;
- (void)_tfn_configureView;
- (void)_tfn_configureLayout;
- (void)_tfn_updateContentWithDisplayMode:(unsigned long long)mode;
- (void)_tfn_updateContentAnimated:(_Bool)animated;
- (id)_tfn_expandArcAnimation;
- (id)_tfn_pulseArcAnimation;
- (id)_tfn_presentCountLabelAnimation;
- (id)_tfn_textColor;
- (id)_tfn_strokeColor;
- (double)_tfn_strokeWidth;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })_tfn_arcTransformMatrix;
- (double)_tfn_countLabelOpacity;
- (double)_tfn_arcOpacity;
- (long long)_tfn_hapticFeedbackType;
- (id)_tfn_remainderCharacterCountText;
- (long long)_tfn_lowestDisplayCountForLimit:(long long)limit;
- (void)_tfn_prepareHapticFeedback;
- (void)_tfn_performHapticFeedback:(long long)feedback;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)calculatedLayoutMetrics;
- (void)layoutMetricsDidChange:(id)change to:(id)to;
- (void)layoutSubviews;

@end

#endif /* TFNCircularCountProgressView_h */
