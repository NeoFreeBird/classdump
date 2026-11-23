//
#ifndef _TtC14T1TwitterSwift25SurveyCardCheckboxControl_h
#define _TtC14T1TwitterSwift25SurveyCardCheckboxControl_h
@import Foundation;

@class Swift.Bool, UIControl, _$s12CoreGraphics7CGFloatVMn;

@interface T1TwitterSwift.SurveyCardCheckboxControl : UIControl { // (Swift)
    /* instance variables */
    nominal type descriptor for CoreGraphics.CGFloat boxSize;
    nominal type descriptor for CoreGraphics.CGFloat cornerRadius;
    nominal type descriptor for CoreGraphics.CGFloat strokeWidth;
    Swift.Bool isChecked;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;

@end

#endif /* _TtC14T1TwitterSwift25SurveyCardCheckboxControl_h */
