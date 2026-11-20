//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC6AVChat17AVChatToolbarView_h
#define _TtC6AVChat17AVChatToolbarView_h
@import Foundation;

@class Chat.AVChatCoordinator, UIView, _$sSo11UIStackViewCSg, _$sSo9TFNButtonCSg;

@interface AVChat.AVChatToolbarView : UIView { // (Swift)
    /* instance variables */
    __C.TFNButton? $__lazy_storage_$_flipCameraButton;
    __C.TFNButton? $__lazy_storage_$_audioRouteButton;
    __C.TFNButton? $__lazy_storage_$_toggleCameraButton;
    __C.TFNButton? $__lazy_storage_$_toggleMicrophoneButton;
    __C.TFNButton? $__lazy_storage_$_endButton;
    __C.UIStackView? $__lazy_storage_$_bottomStackView;
    oneway _Atomic Chat.AVChatCoordinator coordinator;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)didTapFlipCamera;
- (void)didTapAudioRoute;
- (void)didTapToggleCamera;
- (void)didTapToggleMicrophone;
- (void)didTapEnd;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC6AVChat17AVChatToolbarView_h */
