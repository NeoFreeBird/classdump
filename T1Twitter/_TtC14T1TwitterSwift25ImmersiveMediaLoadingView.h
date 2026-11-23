//
#ifndef _TtC14T1TwitterSwift25ImmersiveMediaLoadingView_h
#define _TtC14T1TwitterSwift25ImmersiveMediaLoadingView_h
@import Foundation;

@class T1TwitterSwift.ImmersiveMediaLoadingState, T1TwitterSwift.ImmersiveMediaLoadingViewDelegate ?, UIView, _$sSo23UIActivityIndicatorViewC, _$sSo7NSTimerCSg;

@interface T1TwitterSwift.ImmersiveMediaLoadingView : UIView { // (Swift)
    /* instance variables */
    __C.UIActivityIndicatorView mediaLoadingSpinner;
    __C.NSTimer? loadingStateTimer;
    T1TwitterSwift.ImmersiveMediaLoadingViewDelegate ? delegate;
    T1TwitterSwift.ImmersiveMediaLoadingState loadingState;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)dealloc;

@end

#endif /* _TtC14T1TwitterSwift25ImmersiveMediaLoadingView_h */
