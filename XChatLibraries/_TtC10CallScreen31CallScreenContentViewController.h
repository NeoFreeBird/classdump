//
#ifndef _TtC10CallScreen31CallScreenContentViewController_h
#define _TtC10CallScreen31CallScreenContentViewController_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"

@class CallEngine.Call, CallModels.CallCaptureConsentRequest ?, CallModels.CallImageLoading, CallScreen.CallActionTrayAvailabilityStream, CallScreen.CallActionTrayBuilder, CallScreen.CallDebugVisibilityStream, CallScreen.CallImmersionStream, CallScreen.CallParticipantTrayBuilder, CallScreen.CallPictureInPictureCornerStream, CallScreen.CallScreenShareFullScreenStream, CallScreen.CallScreenTopBarButtonPluginPoint, CallScreen.CallScreenView, Swift.Bool, UIViewController, _$s13XDesignSystem19AlertViewControllerCMn ?, _$sSa -> CallScreen.CallScreenTopBarButtonPlugin, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo22UITapGestureRecognizerC;

@interface CallScreen.CallScreenContentViewController : UIViewController <UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    CallEngine.Call call;
    CallScreen.CallActionTrayBuilder callActionTrayBuilder;
    CallScreen.CallParticipantTrayBuilder callParticipantTrayBuilder;
    CallScreen.CallPictureInPictureCornerStream callPictureInPictureCornerStream;
    CallScreen.CallImmersionStream callImmersionStream;
    CallScreen.CallScreenShareFullScreenStream callScreenShareFullScreenStream;
    CallScreen.CallActionTrayAvailabilityStream callActionTrayAvailabilityStream;
    CallScreen.CallDebugVisibilityStream callDebugVisibilityStream;
    CallScreen.CallScreenTopBarButtonPluginPoint topBarButtonPluginPoint;
    CallModels.CallImageLoading imageLoader;
    CallScreen.CallScreenView internalView;
    Swift.Array -> CallScreen.CallScreenTopBarButtonPlugin topBarButtonPlugins;
    __C.UITapGestureRecognizer immersiveTapRecognizer;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
    Swift.Bool isImmersive;
    CallModels.CallCaptureConsentRequest ? captureConsentRequest;
    CallModels.CallCaptureConsentRequest ? captureConsentAlertRequest;
    nominal type descriptor for XDesignSystem.AlertViewController ? captureConsentAlert;
}

@property (nonatomic, readonly) _Bool prefersStatusBarHidden;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewIsAppearing:(_Bool)appearing;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewDidDisappear:(_Bool)disappear;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })size withTransitionCoordinator:(id)coordinator;
- (void)viewDidLayoutSubviews;
- (void)handleContentTap;
- (void)toggleScreenShareFullScreen;
- (void)toggleMicrophone;
- (void)toggleCamera;
- (void)endCall;
- (void)toggleReactionPicker;
- (void)dismissReactionPicker;
- (void)showCallActions;
- (_Bool)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC10CallScreen31CallScreenContentViewController_h */
