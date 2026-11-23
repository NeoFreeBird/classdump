//
#ifndef TCRPreciseLocationSwitch_h
#define TCRPreciseLocationSwitch_h
@import Foundation;

@class CALayer, UIControl, UILabel, UISwitch;

@interface TCRPreciseLocationSwitch : UIControl

@property (retain, nonatomic) CALayer *topBorderLayer;
@property (retain, nonatomic) UILabel *locationPromptLabel;
@property (retain, nonatomic) UILabel *locationCoordinatesLabel;
@property (retain, nonatomic) UISwitch *locationShareSwitch;
@property (nonatomic) _Bool on;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithLocationCoordinateText:(id)text;
- (void)layoutSubviews;
- (_Bool)isOn;
- (void)_locationSwitchDidChangeOnState:(id)state;

@end

#endif /* TCRPreciseLocationSwitch_h */
