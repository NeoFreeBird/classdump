//
#ifndef T1AppealPivotView_h
#define T1AppealPivotView_h
@import Foundation;

#include "T1AppealPivotViewDelegate-Protocol.h"
#include "TFNLayoutMetricsEnvironment-Protocol.h"

@class NSString, TFNSolidColorView, UIImageView, UILabel, UIStackView, UITapGestureRecognizer;

@interface T1AppealPivotView : TFNSolidColorView <TFNLayoutMetricsEnvironment>

@property (readonly, nonatomic) UIImageView *iconImageView;
@property (readonly, nonatomic) UILabel *displayTextLabel;
@property (readonly, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UITapGestureRecognizer *singleTapRecognizer;
@property (weak, nonatomic) id <T1AppealPivotViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (double)preferredHeightForViewModel:(id)model appealPivotWidth:(double)width;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)_t1_didSingleTap:(id)tap;

@end

#endif /* T1AppealPivotView_h */
