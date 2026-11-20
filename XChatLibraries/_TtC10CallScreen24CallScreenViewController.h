//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10CallScreen24CallScreenViewController_h
#define _TtC10CallScreen24CallScreenViewController_h
@import Foundation;

@class CallEngine.CallStream, CallModels.CallAvatarViewProviding, CallModels.CallImageLoading _$sSSc, CallScreen.CallActionTrayAvailabilityStream, CallScreen.CallActionTrayBuilder, CallScreen.CallDebugVisibilityStream, CallScreen.CallImmersionStream, CallScreen.CallParticipantTrayBuilder, CallScreen.CallPictureInPictureCornerStream, CallScreen.CallScreenContentViewController ?, CallScreen.CallScreenShareFullScreenStream, CallScreen.CallScreenTopBarButtonPluginPoint, CallScreen.CallScreenVisibilityStream, CallScreen.CallScreenWorkerPluginPoint, UIViewController, _$s10XUtilities14IdleTimerTokenCMn ?, _$sSh -> _$s7Combine14AnyCancellableCMn;

@interface CallScreen.CallScreenViewController : UIViewController { // (Swift)
    /* instance variables */
    CallEngine.CallStream callStream;
    CallScreen.CallPictureInPictureCornerStream callPictureInPictureCornerStream;
    CallScreen.CallScreenVisibilityStream callScreenVisibilityStream;
    CallScreen.CallImmersionStream callImmersionStream;
    CallScreen.CallScreenShareFullScreenStream callScreenShareFullScreenStream;
    CallScreen.CallActionTrayAvailabilityStream callActionTrayAvailabilityStream;
    CallScreen.CallDebugVisibilityStream callDebugVisibilityStream;
    CallScreen.CallScreenTopBarButtonPluginPoint topBarButtonPluginPoint;
    CallScreen.CallScreenWorkerPluginPoint workerPluginPoint;
    CallScreen.CallActionTrayBuilder callActionTrayBuilder;
    CallScreen.CallParticipantTrayBuilder callParticipantTrayBuilder;
    CallModels.CallImageLoading _$sSSc callImageLoaderProvider;
    CallModels.CallAvatarViewProviding callAvatarViewProvider;
    CallScreen.CallScreenContentViewController ? contentViewController;
    nominal type descriptor for XUtilities.IdleTimerToken ? idleTimerToken;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarHidden;
@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
@property (nonatomic, readonly) unsigned long long tfn_supportedInterfaceOrientations;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewWillDisappear:(_Bool)disappear;
- (void)viewDidDisappear:(_Bool)disappear;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC10CallScreen24CallScreenViewController_h */
