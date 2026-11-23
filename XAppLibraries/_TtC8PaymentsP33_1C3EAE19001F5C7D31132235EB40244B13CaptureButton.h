//
#ifndef _TtC8PaymentsP33_1C3EAE19001F5C7D31132235EB40244B13CaptureButton_h
#define _TtC8PaymentsP33_1C3EAE19001F5C7D31132235EB40244B13CaptureButton_h
@import Foundation;

@class UIButton;

@interface Payments.(CaptureButton in _1C3EAE19001F5C7D31132235EB40244B) : UIButton { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 innerCircle;
    @40@0:8:16@24@32 outerCircle;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic) _Bool enabled;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (_Bool)isEnabled;

@end

#endif /* _TtC8PaymentsP33_1C3EAE19001F5C7D31132235EB40244B13CaptureButton_h */
