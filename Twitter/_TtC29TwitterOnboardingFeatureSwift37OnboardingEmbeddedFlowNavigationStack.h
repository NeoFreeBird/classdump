//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC29TwitterOnboardingFeatureSwift37OnboardingEmbeddedFlowNavigationStack_h
#define _TtC29TwitterOnboardingFeatureSwift37OnboardingEmbeddedFlowNavigationStack_h
@import Foundation;

#include "OCFNavigationStack-Protocol.h"

@class NSArray, NSObject, Swift.Bool, UIViewController, _$sSo22UINavigationControllerCSg, _$sySo6UIViewCSg_yycSgtcSg, _$sySo6UIViewCSgcSg, _$syycSg;
@protocol UIViewControllerTransitionCoordinator;

@interface TwitterOnboardingFeatureSwift.OnboardingEmbeddedFlowNavigationStack : NSObject <OCFNavigationStack> { // (Swift)
    /* instance variables */
    Swift.Bool shouldAlwaysDismissBeforeOpeningLinks;
    Swift.Bool shouldAnimateViewControllerPushes;
    Swift.Bool shouldUseCompactLayout;
    Swift.Bool hostsActionButtons;
    Swift.Bool navbarVisible;
    ((__C.UIView?) -> ())? updateAction;
    ((__C.UIView?, (() -> ())?) -> ())? dismissAction;
    __C.UINavigationController? contentViewController;
    (() -> ())? hostedActionButtonsDidChange;
}

@property (nonatomic, readonly) UIViewController *topViewController;
@property (nonatomic, readonly) NSArray *viewControllers;
@property (nonatomic, readonly) UIViewController *visibleViewController;
@property (nonatomic, readonly) id <UIViewControllerTransitionCoordinator> transitionCoordinator;

/* instance methods */
- (void)pushViewController:(id)controller animated:(_Bool)animated completion:(id /* block */)completion;
- (id)replaceTopViewController:(id)controller animated:(_Bool)animated completion:(id /* block */)completion;
- (id)popToRootViewControllerAnimated:(_Bool)animated completion:(id /* block */)completion;
- (id)popToViewController:(id)controller animated:(_Bool)animated completion:(id /* block */)completion;
- (id)popToRootAndPushViewController:(id)controller animated:(_Bool)animated completion:(id /* block */)completion;
- (id)popViewControllerAnimated:(_Bool)animated completion:(id /* block */)completion;
- (_Bool)shouldPushViewController:(id)controller fromPresentationType:(long long)type toPresentationType:(long long)type;
- (_Bool)restoreNavigationStateForPresenter:(id)presenter animated:(_Bool)animated completion:(id /* block */)completion;
- (void)prepareToOpenLinkForPresenter:(id)presenter completion:(id /* block */)completion;
- (id)viewControllerForPresentationByPresenter:(id)presenter;
- (_Bool)shouldUseCompactLayoutForPresenter:(id)presenter;
- (_Bool)shouldIgnoreSafeAreaInsetsForPresenter:(id)presenter;
- (_Bool)shouldHostActionButtonsForPresenter:(id)presenter;
- (void)dataViewControllerDidUpdate:(id)update;
- (id)init;

@end

#endif /* _TtC29TwitterOnboardingFeatureSwift37OnboardingEmbeddedFlowNavigationStack_h */
