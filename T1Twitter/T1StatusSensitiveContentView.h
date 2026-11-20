//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1StatusSensitiveContentView_h
#define T1StatusSensitiveContentView_h
@import Foundation;

@class TFNAttributedTextView, TFNSolidColorView, UIView;

@interface T1StatusSensitiveContentView : UIView

@property (retain, nonatomic) TFNAttributedTextView *textView;
@property (retain, nonatomic) TFNSolidColorView *borderView;
@property (retain, nonatomic) TFNSolidColorView *backgroundView;

/* class methods */
+ (double)heightForViewModel:(id)model width:(double)width layoutMetrics:(id)metrics;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })private_innerContentInsetsForMetrics:(id)metrics;
+ (id)private_sensitiveContentTextModel;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;

@end

#endif /* T1StatusSensitiveContentView_h */
