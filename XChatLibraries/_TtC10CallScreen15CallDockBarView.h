//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10CallScreen15CallDockBarView_h
#define _TtC10CallScreen15CallDockBarView_h
@import Foundation;

@class UIControl, _$s13XDesignSystem6ButtonCMn, _$sSo7UILabelC, _$sSo9UIControlC;

@interface CallScreen.CallDockBarView : UIControl { // (Swift)
    /* instance variables */
    nominal type descriptor for XDesignSystem.Button microphoneButton;
    nominal type descriptor for XDesignSystem.Button endCallButton;
    __C.UIControl titleControl;
    __C.UILabel titleLabel;
    __C.UILabel statusLabel;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtC10CallScreen15CallDockBarView_h */
