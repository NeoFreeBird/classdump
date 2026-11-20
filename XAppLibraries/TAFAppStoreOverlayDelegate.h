//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAFAppStoreOverlayDelegate_h
#define TAFAppStoreOverlayDelegate_h
@import Foundation;

#include "SKOverlayDelegate-Protocol.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class NSObject;

@interface TAFAppStoreOverlayDelegate : NSObject <SKOverlayDelegate, UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 presentationType;
    @40@0:8:16@24@32 displayedAppIdentifier;
    @40@0:8:16@24@32 window;
    @40@0:8:16@24@32 eventLogger;
    @40@0:8:16@24@32 scribeContext;
    @40@0:8:16@24@32 loadCompletion;
    @40@0:8:16@24@32 dismissCompletion;
    @40@0:8:16@24@32 dismissalAction;
    @40@0:8:16@24@32 willStartPresentation;
    @40@0:8:16@24@32 willStartDismissal;
    @40@0:8:16@24@32 startedTime;
    @40@0:8:16@24@32 wasDismissedByGesture;
    @40@0:8:16@24@32 currentOverlayState;
    @40@0:8:16@24@32 presentationContext;
    @40@0:8:16@24@32 $__lazy_storage_$_gestureRecognizers;
}

/* instance methods */
- (id)initWithDisplayedAppIdentifier:(id)identifier presentingViewController:(id)controller presentationContext:(long long)context eventLogger:(id)logger scribeContext:(id)context viewControllerWillDisappearNotificationName:(id)name loadCompletion:(id /* block */)completion dismissCompletion:(id /* block */)completion dismissalAction:(id /* block */)action willStartPresentation:(id /* block */)presentation willStartDismissal:(id /* block */)dismissal;
- (void)displayingViewControllerWillDisappear:(id)disappear;
- (void)storeOverlay:(id)overlay willStartPresentation:(id)presentation;
- (void)storeOverlay:(id)overlay didFinishPresentation:(id)presentation;
- (void)storeOverlay:(id)overlay willStartDismissal:(id)dismissal;
- (void)storeOverlay:(id)overlay didFinishDismissal:(id)dismissal;
- (void)storeOverlay:(id)overlay didFailToLoadWithError:(id)error;
- (_Bool)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (_Bool)gestureRecognizerShouldBegin:(id)begin;
- (_Bool)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (void)didReceiveHideOverlayForAppIdentifierNotification:(id)notification;
- (id)init;

@end

#endif /* TAFAppStoreOverlayDelegate_h */
