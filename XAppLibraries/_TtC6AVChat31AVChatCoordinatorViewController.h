//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC6AVChat31AVChatCoordinatorViewController_h
#define _TtC6AVChat31AVChatCoordinatorViewController_h
@import Foundation;

#include "AVPictureInPictureControllerDelegate-Protocol.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class Chat.AVChatCoordinatorViewController.Layout, Chat.AVChatCoordinatorViewController.ParticipantSourceViewContainer ?, Chat.AVChatCoordinatorViewModel, Chat.AVChatCurrentUserViewController ?, Chat.AVChatParticipantGridViewController ?, Chat.AVChatParticipantGridViewController.GridLayout, Chat.AVChatParticipantView ?, Chat.AVChatScreenShareViewController ?, Chat.AVChatSecondaryParticipantsViewController ?, Chat.AVChatToolBarView ?, Chat.AVChatTopBarView ?, Swift.Bool, TFNViewController, _$s7Combine14AnyCancellableCMn ?, _$sSb8animated_ySbcSg10completiontSg, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo15TFNGradientViewCSg, _$sSo22UIViewPropertyAnimatorCSg, _$sSo28AVPictureInPictureControllerCSg, _$sypSg, _$syycSg, __C.UIModalPresentationStyle style_ __C.UIModalTransitionStyle transitiontSg;

@interface AVChat.AVChatCoordinatorViewController : TFNViewController <AVPictureInPictureControllerDelegate, UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    oneway _Atomic Chat.AVChatCoordinatorViewModel _viewModel;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable _cancellables;
    oneway _Atomic Chat.AVChatTopBarView ? _topBarView;
    __C.TFNGradientView? _topGradientView;
    __C.TFNGradientView? _bottomGradientView;
    oneway _Atomic Chat.AVChatToolBarView ? _toolbarView;
    oneway _Atomic Chat.AVChatParticipantGridViewController ? _gridViewController;
    oneway _Atomic Chat.AVChatCurrentUserViewController ? _currentUserViewController;
    __C.UIViewPropertyAnimator? _currentUserAnimator;
    oneway _Atomic Chat.AVChatSecondaryParticipantsViewController ? _secondaryParticipantsViewController;
    nominal type descriptor for Combine.AnyCancellable ? _secondaryParticipantsCancellable;
    oneway _Atomic Chat.AVChatScreenShareViewController ? _screenShareViewController;
    Any? _disablingApplicationIdleTimerToken;
    oneway _Atomic Chat.AVChatCoordinatorViewController.Layout _layout;
    oneway _Atomic Chat.AVChatParticipantGridViewController.GridLayout _gridLayout;
    Swift.Bool _isScreenShareFullscreen;
    __C.AVPictureInPictureController? _pictureInPictureController;
    Swift.Bool _isStartedPictureInPicture;
    (animated: Swift.Bool, completion: ((Swift.Bool) -> ())?)? _pictureInPicturePresentationCompletion;
    oneway _Atomic Chat.AVChatCoordinatorViewController.ParticipantSourceViewContainer ? _pictureInPictureSourceViewContainer;
    oneway _Atomic Chat.AVChatParticipantView ? _pictureInPictureDetachedParticipantView;
    __C.UIModalPresentationStyle style_ __C.UIModalTransitionStyle transitiontSg _pictureInPictureRestorePresentationStyles;
    (() -> ())? _pictureInPictureOnWillAppear;
}

@property (nonatomic, readonly) unsigned long long tfn_supportedInterfaceOrientations;

/* instance methods */
- (void)pictureInPictureControllerWillStartPictureInPicture:(id)picture;
- (void)pictureInPictureControllerDidStartPictureInPicture:(id)picture;
- (void)pictureInPictureController:(id)controller failedToStartPictureInPictureWithError:(id)error;
- (void)pictureInPictureController:(id)controller restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id /* block */)handler;
- (void)pictureInPictureControllerWillStopPictureInPicture:(id)picture;
- (void)pictureInPictureControllerDidStopPictureInPicture:(id)picture;
- (_Bool)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewWillAppear:(_Bool)appear;
- (void)tfn_dismissAnimated:(_Bool)animated completion:(id /* block */)completion;
- (void)viewControllerDidPresentAnimated:(_Bool)animated;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)array;
- (void)_didTapBackground;
- (void)_didTapScreenShareFullscreenButton;
- (void)_didTapEndCall;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC6AVChat31AVChatCoordinatorViewController_h */
