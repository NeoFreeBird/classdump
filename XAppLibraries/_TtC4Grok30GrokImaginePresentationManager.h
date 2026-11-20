//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC4Grok30GrokImaginePresentationManager_h
#define _TtC4Grok30GrokImaginePresentationManager_h
@import Foundation;

#include "UINavigationControllerDelegate-Protocol.h"
#include "_TtP4Grok38GrokImaginePresentationManagerDelegate_-Protocol.h"

@class Grok.GrokImagineToolbarViewController ?, Grok.GrokImagineViewModelBox, Grok0A34ImaginePresentationManagerDelegate_pSgXw, NSObject, Swift.Bool, _$s7Combine14AnyCancellableCMn ?, _$sSa -> _$s14TFSTwitterCore16TwitterMediaInfoCMn _$sGycSg, _$sScTyyt _$ss5NeverOMn ?, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo16UIViewControllerCSgXw, _$sSo22UINavigationControllerCSgXw, _$sSo30UINavigationControllerDelegate_pSgXw, _$sSo7NSTimerCSg;

@interface Grok.GrokImaginePresentationManager : NSObject <UINavigationControllerDelegate> { // (Swift)
    /* instance variables */
    Grok.GrokImagineViewModelBox box;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable lifecycleCancellables;
    nominal type descriptor for Combine.AnyCancellable ? stackEventsCancellable;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? upsellResolution;
    weak __C.UIViewController? containerViewController;
    weak __C.UINavigationController? navigationController;
    weak __C.UIViewController? initialRootViewController;
    Grok.GrokImagineToolbarViewController ? toolbarViewController;
    weak __C.UINavigationControllerDelegate? baseNavigationDelegate;
    __C.NSTimer? toolbarVisibilityTimer;
    Swift.Bool isAwaitingAccountLinkEntry;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
    Swift.Array -> nominal type descriptor for TFSTwitterCore.TwitterMediaInfo _$sGycSg timelineImageListMediaProvider;
}

@property (nonatomic, weak) id <Grok.GrokImaginePresentationManagerDelegate> delegate;

/* class methods */
+ (id)openGrokImagineViewControllerNotification;
+ (id)openGrokImagineViewControllerGrokPostIDKey;

/* instance methods */
- (void)navigationController:(id)controller willShowViewController:(id)controller animated:(_Bool)animated;
- (void)navigationController:(id)controller didShowViewController:(id)controller animated:(_Bool)animated;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)orientations;
- (id)navigationController:(id)controller animationControllerForOperation:(long long)operation fromViewController:(id)controller toViewController:(id)controller;
- (id)navigationController:(id)controller interactionControllerForAnimationController:(id)controller;
- (long long)navigationControllerPreferredInterfaceOrientationForPresentation:(id)presentation;
- (void)onChangeHasOpenScreen:(id /* block */)screen;
- (void)pushInNavigationController:(id)controller withInitialPrompt:(id)prompt;
- (void)cleanup;
- (id)init;

@end

#endif /* _TtC4Grok30GrokImaginePresentationManager_h */
