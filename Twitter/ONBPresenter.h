//
#ifndef ONBPresenter_h
#define ONBPresenter_h
@import Foundation;

#include "OCFWaitable-Protocol.h"
#include "ONBPresenterDelegate-Protocol.h"
#include "TFNNavigationStack-Protocol.h"
#include "_TtP24TwitterOnboardingFeature26TwitterOnboardingPresenter_-Protocol.h"

@class NSMapTable, NSObject, NSString, TFNHUD, UIViewController, UIWindow, XNAVEventObservationToken;

@interface ONBPresenter : NSObject <TwitterOnboardingFeature.TwitterOnboardingPresenter> {
    /* instance variables */
    NSObject<TFNNavigationStack> *_originalNavigationController;
    UIViewController *_originalTopViewController;
    UIViewController *_originalBottomViewController;
    UIViewController *_originalPresentingViewController;
    UIViewController *_originalPresentedViewController;
    UIViewController *_presentedViewController;
    UIViewController *_presentingViewController;
    long long _originalPresentationType;
    id <OCFWaitable> _waitingWaitable;
    id /* block */ _backNavigationLinkBlock;
    NSMapTable *_viewControllerSubtaskIDMap;
    NSString *_activeSubtaskID;
    TFNHUD *_hud;
    XNAVEventObservationToken *_stackEventObservationToken;
    _Bool _cancellable;
}

@property (weak, nonatomic) id <ONBPresenterDelegate> delegate;
@property (readonly, nonatomic) long long currentPresentationType;
@property (readonly, nonatomic) UIWindow *currentWindow;
@property (readonly, nonatomic) UIWindow *hudWindow;
@property (readonly, nonatomic) NSString *topViewControllerSubtaskID;
@property (readonly, nonatomic) _Bool shouldUseCompactLayout;
@property (readonly, nonatomic) _Bool shouldIgnoreSafeAreaInsets;
@property (readonly, nonatomic) _Bool shouldHostActionButtons;

/* instance methods */
- (void)openWebURL:(id)url withTitle:(id)title forAccount:(id)account chromeless:(_Bool)chromeless;
- (id)initWithNavigationController:(id)controller presentationType:(long long)type;
- (id)initWithPresentingViewController:(id)controller;
- (id)initWithPresentingViewController:(id)controller cancellable:(_Bool)cancellable;
- (id)initInternalCancellable:(_Bool)cancellable;
- (id)pushViewController:(id)controller withPresentationType:(long long)type hideBackButton:(_Bool)button forceCancelButton:(_Bool)button backNavigationLinkBlock:(id /* block */)block completion:(id /* block */)completion;
- (void)presentViewController:(id)controller animated:(_Bool)animated completion:(id /* block */)completion;
- (id)private_presentingViewControllerFrom:(id)from defaultPresenter:(id)presenter;
- (id)private_currentViewControllerForPresentation;
- (void)handleWebURL:(id)url withTitle:(id)title forAccount:(id)account chromeless:(_Bool)chromeless;
- (void)handleDeepLinkURL:(id)url;
- (void)handleDeepLinkInPlaceURL:(id)url forAccount:(id)account;
- (void)waitWithMessage:(id)message waitable:(id)waitable;
- (void)waitWithMessage:(id)message;
- (void)stopWaiting;
- (void)dismissAnimated:(_Bool)animated completion:(id /* block */)completion;
- (void)willStartSubtaskWithID:(id)id;
- (void)didFinishSubtaskWithID:(id)id;
- (_Bool)restoreSubtaskWithID:(id)id completion:(id /* block */)completion;
- (void)private_playAnnouncementForViewController:(id)controller;
- (void)private_prepareToOpenLinkWithCompletion:(id /* block */)completion;
- (void)private_updateLeftBarButtonItemForViewController:(id)controller presentedBy:(id)by orPushedOnBy:(id)by hideBackButton:(_Bool)button forceCancelButton:(_Bool)button;
- (void)private_declareEntryNavigation:(long long)navigation forViewController:(id)controller;
- (id)private_cancelItemForViewController:(id)controller presentedBy:(id)by orPushedOnBy:(id)by;
- (void)private_cancelItemAction:(id)action;
- (void)private_presentingViewControllerWillShow:(id)show;
- (void)private_handleStackEvent:(id)event;
- (void)private_restoreOriginalNavigationStateAnimated:(_Bool)animated completion:(id /* block */)completion;
- (void)private_dismissAnythingPresentedByViewController:(id)controller completion:(id /* block */)completion;
- (void)private_associateNewViewControllersWithSubtaskID:(id)id;
- (id)private_firstViewControllerWithSubtaskID:(id)id;
- (void)private_restoreViewController:(id)controller completion:(id /* block */)completion;
- (id)private_originalPresentedViewControllerIfPresented;
- (id)private_allNavigationControllers;
- (id)private_allNavigationControllersWithOriginalNavigationController:(id)controller originalPresentingViewController:(id)controller;
- (id)private_currentNavigationController;
- (id)private_currentModalNavigationController;
- (id)private_currentWaitable;
- (void)private_waitWithMessage:(id)message waitable:(id)waitable;
- (void)private_stopWaiting;
- (_Bool)private_isOriginalStateOfOriginalNavigationController:(id)controller;

@end

#endif /* ONBPresenter_h */
