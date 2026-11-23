//
#ifndef _TtC6AVChat26AVChatScreenShareVideoView_h
#define _TtC6AVChat26AVChatScreenShareVideoView_h
@import Foundation;

#include "RTCVideoRenderer-Protocol.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class UIView, XGravityLayout.XGravityLayoutController, _$sSo15RTCMTLVideoViewC, _$sSo25UIImpactFeedbackGeneratorCSg, __C.CGSize;

@interface AVChat.AVChatScreenShareVideoView : UIView <UIGestureRecognizerDelegate, RTCVideoRenderer> { // (Swift)
    /* instance variables */
    __C.RTCMTLVideoView _videoView;
    XGravityLayout.XGravityLayoutController _gravityLayout;
    __C.UIImpactFeedbackGenerator? $__lazy_storage_$__zoomHaptic;
    __C.CGSize _lastObservedFrameSize;
}

/* instance methods */
- (_Bool)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)renderFrame:(id)frame;
- (void)setSize:(struct CGSize { double x0; double x1; })size;

@end

#endif /* _TtC6AVChat26AVChatScreenShareVideoView_h */
