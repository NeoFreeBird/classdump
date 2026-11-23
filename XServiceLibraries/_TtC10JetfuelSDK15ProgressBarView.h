//
#ifndef _TtC10JetfuelSDK15ProgressBarView_h
#define _TtC10JetfuelSDK15ProgressBarView_h
@import Foundation;

@class UIView, _$s10Foundation4DateVMn ?, _$sSd, _$sSo14UIProgressViewC, _$sSo7NSTimerCSg, _$sSo7UIColorC, _$syycSg;

@interface JetfuelSDK.ProgressBarView : UIView { // (Swift)
    /* instance variables */
    __C.UIProgressView progressView;
    __C.NSTimer? timer;
    nominal type descriptor for Foundation.Date ? startTime;
    Swift.Double duration;
    __C.UIColor color;
    (() -> ())? onComplete;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC10JetfuelSDK15ProgressBarView_h */
