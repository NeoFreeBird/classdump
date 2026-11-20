//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1CameraCaptureLiveModeViewController_h
#define T1CameraCaptureLiveModeViewController_h
@import Foundation;

#include "PTVTwitterCameraLiveDelegate-Protocol.h"
#include "T1BroadcasterLiveChatSession.h"
#include "T1BroadcasterLiveChatSessionDelegate-Protocol.h"
#include "T1CameraCaptureLiveModeViewControllerTweetPerspective-Protocol.h"
#include "T1CameraCaptureViewController.h"
#include "T1CameraCaptureViewControllerEventHashtagsDelegate-Protocol.h"
#include "T1CameraCaptureViewControllerPlacesDelegate-Protocol.h"
#include "T1CameraControlButton.h"
#include "T1CameraEventHashtagsViewController.h"
#include "T1CameraEventHashtagsViewControllerDelegate-Protocol.h"
#include "T1CameraGeoPickerController.h"
#include "T1CameraGeoPickerControllerDelegate-Protocol.h"
#include "T1CameraPlace.h"
#include "T1ComposePresenter.h"
#include "T1ComposePresenterDelegate-Protocol.h"
#include "TCRAutocompleteControllerDelegate-Protocol.h"
#include "TCRAutocompleteViewControllerDelegate-Protocol.h"
#include "TFNCircularCountProgressDataSource-Protocol.h"
#include "TFSTweetTextCounterContext-Protocol.h"
#include "UIGestureRecognizerDelegate-Protocol.h"
#include "UITextViewDelegate-Protocol.h"
#include "XGoLiveBroadcasterCoordinatorDelegate-Protocol.h"

@class CAGradientLayer, NSArray, NSLayoutConstraint, NSString, PTVAPIResponseErrorInfo, PTVBroadcast, TCRAutocompleteController, TCRAutocompleteViewController, TCRComposeAccountAvatarImageView, TFNCircularCountProgressView, TFNPlaceholderTextView, TFNTwitterComposition, TFNViewController, TFSTweetTextCounter, TFSTwitterScribeContext, UIActivityIndicatorView, UIButton, UILabel, UIPanGestureRecognizer, UIScrollView, UITapGestureRecognizer, UIView, UIViewController, XGoLiveBroadcasterCoordinator, XGoLiveFrostedBackgroundView, XGoLivePillView;

@interface T1CameraCaptureLiveModeViewController : TFNViewController <UITextViewDelegate, TCRAutocompleteControllerDelegate, TCRAutocompleteViewControllerDelegate, T1CameraCaptureViewControllerEventHashtagsDelegate, T1ComposePresenterDelegate, T1CameraCaptureViewControllerPlacesDelegate, T1CameraGeoPickerControllerDelegate, TFNCircularCountProgressDataSource, TFSTweetTextCounterContext, T1CameraEventHashtagsViewControllerDelegate, UIGestureRecognizerDelegate, T1BroadcasterLiveChatSessionDelegate, XGoLiveBroadcasterCoordinatorDelegate, PTVTwitterCameraLiveDelegate>

@property (readonly, weak, nonatomic) T1CameraCaptureViewController *captureViewController;
@property (retain, nonatomic) PTVAPIResponseErrorInfo *periscopeAccountAuthenticationErrorInfo;
@property (retain, nonatomic) UIView *backgroundShade;
@property (retain, nonatomic) T1CameraControlButton *backButton;
@property (retain, nonatomic) XGoLivePillView *livePillView;
@property (retain, nonatomic) UIViewController *liveChatViewController;
@property (retain, nonatomic) UIButton *stopBroadcastButton;
@property (retain, nonatomic) XGoLiveFrostedBackgroundView *stopBroadcastBlurView;
@property (retain, nonatomic) CAGradientLayer *topScrimLayer;
@property (readonly, nonatomic) _Bool usesXDSChrome;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } stopLiveButtonSize;
@property (nonatomic) _Bool stopButtonDidTransitionToIcon;
@property (retain, nonatomic) NSLayoutConstraint *stopLiveButtonWidthAnchor;
@property (retain, nonatomic) T1CameraGeoPickerController *geoPickerController;
@property (retain, nonatomic) UIView *geoPickerEntryPointButton;
@property (retain, nonatomic) NSLayoutConstraint *geoPickerEntryPointButtonTopAnchor;
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (retain, nonatomic) UITapGestureRecognizer *preBroadcastDoubleTapRecognizer;
@property (retain, nonatomic) XGoLiveBroadcasterCoordinator *broadcasterCoordinator;
@property (nonatomic) double initialPanY;
@property (retain, nonatomic) UIScrollView *tweetTextScrollView;
@property (retain, nonatomic) NSLayoutConstraint *tweetTextScrollViewBottomAnchor;
@property (retain, nonatomic) TCRComposeAccountAvatarImageView *avatarImageView;
@property (retain, nonatomic) TFNPlaceholderTextView *tweetTextView;
@property (retain, nonatomic) TFNCircularCountProgressView *progressView;
@property (retain, nonatomic) T1CameraEventHashtagsViewController *eventHashtagsViewController;
@property (copy, nonatomic) NSArray *currentEventHashtags;
@property (copy, nonatomic) NSString *currentHashtag;
@property (retain, nonatomic) UIButton *goLiveButton;
@property (retain, nonatomic) UIActivityIndicatorView *goLiveButtonSpinner;
@property (retain, nonatomic) UILabel *goLiveConnectingText;
@property (retain, nonatomic) NSLayoutConstraint *goLiveButtonBottomAnchor;
@property (retain, nonatomic) NSLayoutConstraint *goLiveButtonBottomAnchorForKeyboard;
@property (retain, nonatomic) NSArray *constraints;
@property (retain, nonatomic) TCRAutocompleteViewController *autocompleteViewController;
@property (retain, nonatomic) TCRAutocompleteController *autocompleteController;
@property (retain, nonatomic) TFNTwitterComposition *currentComposition;
@property (retain, nonatomic) TFSTweetTextCounter *tweetTextCounter;
@property (retain, nonatomic) T1CameraPlace *selectedPlace;
@property (nonatomic) unsigned long long periscopeModeState;
@property (nonatomic) long long liveBroadcastCapabilityStatus;
@property (retain, nonatomic) PTVBroadcast *broadcast;
@property (retain, nonatomic) id <T1CameraCaptureLiveModeViewControllerTweetPerspective> sentStatus;
@property (retain, nonatomic) T1BroadcasterLiveChatSession *liveChatSession;
@property (nonatomic) _Bool didDetectAuthenticationError;
@property (nonatomic) _Bool isPresentingRectifyViewController;
@property (nonatomic) _Bool presented;
@property (nonatomic) _Bool isDismissing;
@property (retain, nonatomic) T1ComposePresenter *composeTweetPresenter;
@property (readonly, nonatomic) unsigned long long periscopePreBroadcastModeState;
@property (copy, nonatomic) TFSTwitterScribeContext *scribeContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *textForCharacterCount;

/* instance methods */
- (id)initWithNibName:(id)name bundle:(id)bundle;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCaptureViewController:(id)controller;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewControllerDidPresentAnimated:(_Bool)animated;
- (void)viewControllerDidDismissAnimated:(_Bool)animated;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)disappear;
- (void)_t1_main_createViews;
- (void)_t1_main_createProgressViewUsingXDSChrome:(_Bool)xdschrome;
- (void)updateViewConstraints;
- (void)_t1_main_createDoubleTapGestureRecognizer;
- (void)tfn_viewControllerWillSwapWithTransitionCoordinator:(id)coordinator;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)array;
- (void)_t1_main_setHideCameraControls:(_Bool)controls;
- (_Bool)_t1_main_isLive;
- (void)_t1_main_goLive;
- (void)_t1_main_updateForLiveState;
- (_Bool)_t1_main_didGoLive;
- (void)_t1_main_updateStopButton;
- (void)_t1_main_transitionInitialStopButton;
- (void)_t1_main_transitionFinalStopButton;
- (unsigned long long)tfn_supportedInterfaceOrientations;
- (_Bool)tfn_prefersNavigationBarHidden;
- (void)_t1_main_createComposition;
- (void)_t1_main_dismissEditor;
- (void)_t1_main_dismiss;
- (void)_t1_main_deleteAndDismiss:(id)dismiss;
- (void)_t1_action_closeButtonDidTouchUpInside:(id)inside;
- (void)_t1_main_closeAfterBroadcast;
- (void)_t1_action_stopBroadcastButtonDidTouchUpInside:(id)inside event:(id)event;
- (void)_t1_main_stopBroadcast;
- (void)_t1_action_goLiveButtonDidTouchUp:(id)up;
- (void)_t1_main_sendTweet;
- (void)cameraCaptureViewController:(id)controller didChangeAudioScopeEnabled:(_Bool)enabled;
- (void)_t1_main_handleAuthError:(id)error;
- (void)_t1_main_presentRectifyViewControllerWithURL:(id)url;
- (void)_t1_main_rectifyViewControllerDidComplete:(_Bool)complete;
- (void)composePresenterDidBeginSession:(id)session;
- (void)composePresenterDidEndSession:(id)session;
- (void)twitterCameraLiveDidDetectCopyrightViolation;
- (id)twitterCameraLiveCopyrightViolationLearnMoreURL;
- (void)twitterCameraLiveDidObserveAuthErrorWithInfo:(id)info;
- (void)_t1_main_handlePeriscopeAuthenticationErrorIfNeeded;
- (void)_t1_main_handleViewUpdatesFromAuthenticationError;
- (void)twitterCameraLiveDidDismissCopyrightViewController;
- (void)twitterCameraLiveBroadcastCapabilityChanged:(long long)changed;
- (_Bool)twitterCameraLiveCanShareBroadcast;
- (void)twitterCameraLiveComposeTweetForBroadcast:(id)broadcast atTimecode:(double)timecode initialTimecode:(double)timecode screenshot:(id)screenshot fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect inView:(id)view withCompletion:(id /* block */)completion;
- (void)twitterCameraLiveComposeDirectMessageForBroadcast:(id)broadcast atTimecode:(double)timecode initialTimecode:(double)timecode fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect inView:(id)view withCompletion:(id /* block */)completion;
- (void)twitterCameraLiveShareURLOfBroadcast:(id)broadcast atTimecode:(double)timecode initialTimecode:(double)timecode fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect inView:(id)view withCompletion:(id /* block */)completion;
- (id)_t1_main_shareURLWithTimecode:(double)timecode withShareURL:(id)url;
- (void)_t1_main_presentActivityViewControllerWithShareURL:(id)url image:(id)image type:(long long)type fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect inView:(id)view completion:(id /* block */)completion;
- (void)twitterCameraLiveDidBlockUser:(id)user;
- (void)twitterCameraLiveDidUnblockUser:(id)user;
- (id)twitterCameraLiveBlockedTwitterIDs;
- (void)twitterCameraLiveDidStartBroadcast:(id)broadcast;
- (void)twitterCameraLiveDidStopBroadcast:(id)broadcast;
- (void)twitterCameraLiveDidSendChatMessage:(id)message;
- (void)twitterCameraLiveDidFailToStartBroadcastWithError:(id)error;
- (void)twitterCameraLiveDidUpdateTotalViewerCount:(long long)count;
- (void)_t1_main_presentBroadcasterMenu;
- (void)broadcasterCoordinator:(id)coordinator setChromeHidden:(_Bool)hidden;
- (void)broadcasterCoordinatorDidRequestFlipCamera:(id)camera;
- (void)broadcasterCoordinatorDidConfirmDeleteBroadcast:(id)broadcast;
- (void)broadcasterCoordinator:(id)coordinator didRequestReplayOfBroadcastWithID:(id)id;
- (void)_t1_main_attachLiveChatIfNeeded;
- (void)_t1_main_detachLiveChat;
- (void)twitterCameraLiveDeleteBroadcast:(id)broadcast;
- (void)_t1_main_deleteBroadcastTweetAndDismiss:(id)dismiss;
- (id)twitterCameraLiveViewControllerForProfileFollow:(id)follow;
- (double)twitterCameraLiveGuestViewsTopMargin;
- (_Bool)twitterCameraLiveIsGuestBroadcastingCreationEnabled;
- (void)twitterCameraLiveLogAction:(id)action element:(id)element;
- (_Bool)twitterCameraLiveShouldUseModalSheetForUserProfile;
- (void)_t1_main_startLiveChatSessionIfNeeded;
- (void)_t1_main_stopLiveChatSession;
- (void)broadcasterLiveChatSession:(id)session didReceiveMessages:(id)messages;
- (void)_t1_notification_compositionDidSend:(id)send;
- (void)geoPickerDidSelectPlaceWithPlace:(id)place preciseLocation:(id)location;
- (void)geoPickerRequestedPresentation;
- (void)_t1_main_presentGeoPicker;
- (void)geoPickerRequestedLocationRetry;
- (void)geoPickerRequestedDismiss;
- (void)cameraCaptureViewController:(id)controller didUpdateCurrentPlacesFetchResult:(id)result;
- (void)_t1_main_updateGeoPicker;
- (long long)currentCharacterCountForCircularCountProgressView:(id)view;
- (long long)remainingCharacterCountForCircularCountProgressView:(id)view;
- (long long)warningCharacterLimitForCircularCountProgressView:(id)view;
- (void)_t1_main_updateControlsForTextInput;
- (void)_t1_updateProgressCounter;
- (void)_t1_updateGeoPickerButtonPosition;
- (void)textViewDidChange:(id)change;
- (void)textViewDidChangeSelection:(id)selection;
- (_Bool)textView:(id)view shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementText:(id)text;
- (void)_t1_main_scrollToCursor;
- (void)_t1_notification_textInputCurrentInputModeDidChange:(id)change;
- (void)_t1_gesture_panGestureRecognizerAction:(id)action;
- (void)_t1_gesture_doubleTapGestureAction:(id)action;
- (_Bool)gestureRecognizer:(id)recognizer shouldBeRequiredToFailByGestureRecognizer:(id)recognizer;
- (_Bool)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (void)scrollViewDidScroll:(id)scroll;
- (void)_t1_main_adjustViewsWithKeyboard;
- (void)_t1_notification_keyboardDidChange:(id)change;
- (double)_t1_main_keyboardHeightInView;
- (void)_t1_main_updateAutocompleteController;
- (_Bool)_t1_main_shouldShowAutocomplete;
- (void)_t1_main_updateAutocompleteVisibility:(_Bool)visibility;
- (void)_t1_main_adjustTextViewForAutocompleteWithDuration:(double)duration;
- (void)_t1_main_cleanupAutocomplete;
- (void)_t1_main_initializeAutocompleteViewController;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_t1_main_autocompleteViewFrameForVisibility:(_Bool)visibility;
- (double)_t1_main_preferredAutocompleteViewHeight;
- (void)autocompleteViewController:(id)controller scrollViewDidScroll:(id)scroll;
- (void)autocompleteViewController:(id)controller didSelectItem:(id)item;
- (void)autocompleteControllerDidBegin:(id)begin;
- (void)autocompleteControllerDidEnd:(id)end;
- (void)autocompleteController:(id)controller didReceiveResult:(id)result;
- (void)_t1_main_updateCurrentHashtags;
- (void)_t1_main_updateEventHashtagsViewAnimated:(_Bool)animated;
- (void)_t1_main_updateForEventHashtagsAnimated:(_Bool)animated;
- (void)cameraEventHashtagsViewController:(id)controller didChangeSelectedIndex:(long long)index;
- (void)cameraCaptureViewController:(id)controller didUpdateCurrentEventHashtagsFetchResult:(id)result;
- (void)_t1_main_updateGoLiveButton;
- (void)_t1_main_updateConnectionStatus;
- (_Bool)_t1_main_isPeriscopeReady;
- (void)cameraCaptureViewControllerDidChangePeriscopeAccountAuthentication:(id)authentication;
- (void)cameraCaptureViewController:(id)controller didChangeGuestBroadcastingEnabled:(_Bool)enabled;
- (id)scribe;
- (id)scribePage;
- (id)scribeSection;
- (id)scribeComponent;
- (_Bool)isPresented;

@end

#endif /* T1CameraCaptureLiveModeViewController_h */
