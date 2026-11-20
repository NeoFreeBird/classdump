//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNDragDropIndicationView_h
#define TFNDragDropIndicationView_h
@import Foundation;

#include "XDSBlur.h"

@class CAShapeLayer, NSString, UIColor, UIFont, UILabel, UIView;

@interface TFNDragDropIndicationView : UIView

@property (retain, nonatomic) XDSBlur *blurView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) CAShapeLayer *dashedBorderLayer;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIFont *textFont;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *dashedBorderStrokeColor;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)setHidden:(_Bool)hidden animated:(_Bool)animated;

@end

#endif /* TFNDragDropIndicationView_h */
