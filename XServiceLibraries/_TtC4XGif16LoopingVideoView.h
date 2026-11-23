//
#ifndef _TtC4XGif16LoopingVideoView_h
#define _TtC4XGif16LoopingVideoView_h
@import Foundation;

@class UIView, _$s10Foundation3URLVMn ?, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo8AVPlayerC, _$syycSg;

@interface XGif.LoopingVideoView : UIView { // (Swift)
    /* instance variables */
    nominal type descriptor for Foundation.URL ? url;
    (() -> ())? onReadyToPlay;
    __C.AVPlayer player;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable playerSubscriptions;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

/* class methods */
+ (Class)layerClass;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)didMoveToWindow;

@end

#endif /* _TtC4XGif16LoopingVideoView_h */
