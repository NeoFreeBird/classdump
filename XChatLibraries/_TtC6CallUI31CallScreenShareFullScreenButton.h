//
#ifndef _TtC6CallUI31CallScreenShareFullScreenButton_h
#define _TtC6CallUI31CallScreenShareFullScreenButton_h
@import Foundation;

@class CallUI.CallScreenShareOrientation, Swift.Bool, UIButton, _$s13XDesignSystem4BlurCMn;

@interface CallUI.CallScreenShareFullScreenButton : UIButton { // (Swift)
    /* instance variables */
    CallUI.CallScreenShareOrientation orientation;
    Swift.Bool isFullScreen;
    nominal type descriptor for XDesignSystem.Blur blur;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtC6CallUI31CallScreenShareFullScreenButton_h */
