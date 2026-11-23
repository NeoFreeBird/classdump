//
#ifndef _TtC14T1TwitterSwift34GrokActiveConvoContainerController_h
#define _TtC14T1TwitterSwift34GrokActiveConvoContainerController_h
@import Foundation;

#include "TFNToasterContextDelegate-Protocol.h"

@class Swift.Bool, _$s10TFNUISwift20TFNHostingControllerCN, _$s4Grok0A20ActiveConvoViewModelCMn ?, _$s4Grok0A21ConversationsProviderCMn ?, _$s4Grok0A24NavBarButtonsCoordinatorCMn, _$s4Grok0A29SpeechPermissionTrayPresenterCMn ?, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo17TFNTwitterAccountC, _$syXlSg, _$syyc;

@interface T1TwitterSwift.GrokActiveConvoContainerController : type metadata for TFNUISwift.TFNHostingController <TFNToasterContextDelegate> { // (Swift)
    /* instance variables */
    nominal type descriptor for Grok.GrokConversationsProvider ? conversationsProvider;
    nominal type descriptor for Grok.GrokNavBarButtonsCoordinator navBarButtonsCoordinator;
    nominal type descriptor for Grok.GrokActiveConvoViewModel ? viewModel;
    __C.TFNTwitterAccount account;
    nominal type descriptor for Grok.GrokConvoStartingValue function type (escaping) presentNewConvo;
    () -> () presentHistory;
    () -> () startTracking;
    () -> () stopTracking;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
    Swift.Bool isAwaitingTextToSpeechCloseForNewConvo;
    Swift.Bool needsKeyboardAvoidanceReconcile;
    Swift.AnyObject? composerContent;
    Swift.AnyObject? composerPresentation;
    nominal type descriptor for Grok.GrokSpeechPermissionTrayPresenter ? speechPermissionTrayPresenter;
    Swift.Bool declaresGlassComposer;
    Swift.Bool seedsNavigationBarCoverage;
    Swift.Bool isUpdatingCollapsingSafeAreaInsets;
}

@property (nonatomic, readonly) _Bool tfn_prefersTabBarShadowHidden;

/* instance methods */
- (_Bool)toaster:(id)toaster canDisplayToast:(id)toast withPriority:(unsigned long long)priority;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)disappear;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)disappear;
- (void)viewSafeAreaInsetsDidChange;
- (void)tfn_contentScrollViewWillBeginDragging:(id)dragging;
- (id)scribePage;
- (id)scribeSection;
- (id)scribe;

@end

#endif /* _TtC14T1TwitterSwift34GrokActiveConvoContainerController_h */
