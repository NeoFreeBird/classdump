//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1JetfuelViewController_h
#define T1JetfuelViewController_h
@import Foundation;

#include "JetXRuntimeObjC.h"
#include "TFNMediaTransitionDelegate-Protocol.h"

@class NSURL, TFNViewController;

@interface T1JetfuelViewController : TFNViewController <TFNMediaTransitionDelegate> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *env;
    NSNumber"16@0:8 *allowsRotation;
    NSNumber"16@0:8 *forcedOrientation;
    NSNumber"16@0:8 *runtime;
    NSNumber"16@0:8 *item;
    NSNumber"16@0:8 *skipCache;
    NSNumber"16@0:8 *backgroundColor;
    NSNumber"16@0:8 *keyboardHeight;
    NSNumber"16@0:8 *debugOverlayManager;
    NSNumber"16@0:8 *domRenderingVC;
    NSNumber"16@0:8 *presentedVC;
    NSNumber"16@0:8 *renderingDeps;
    NSNumber"16@0:8 *transition;
    NSNumber"16@0:8 *transitionOriginalFrame;
    NSNumber"16@0:8 *transitionTag;
    NSNumber"16@0:8 *blocksUserDismissal;
    NSNumber"16@0:8 *onPresentationResolved;
    NSNumber"16@0:8 *onLoadFailed;
    NSNumber"16@0:8 *onRequestStarted;
    NSNumber"16@0:8 *resolvedPresentation;
    NSNumber"16@0:8 *responseHeadersObserverToken;
    NSNumber"16@0:8 *requestFailureObserverToken;
    NSNumber"16@0:8 *requestStartObserverToken;
    NSNumber"16@0:8 *hostMode;
    NSNumber"16@0:8 *pageWidth;
    NSNumber"16@0:8 *backRootViewController;
    NSNumber"16@0:8 *onContentDidLayout;
    NSNumber"16@0:8 *onScrollRequest;
    NSNumber"16@0:8 *reportsContentLayoutImmediately;
    NSNumber"16@0:8 *lastRenderedSize;
    NSNumber"16@0:8 *contentBoundsObservation;
    NSNumber"16@0:8 *lastContentSize;
    NSNumber"16@0:8 *domLeftConstraint;
    NSNumber"16@0:8 *domRightConstraint;
    NSNumber"16@0:8 *navVC;
    NSNumber"16@0:8 *$__lazy_storage_$_actionService;
}

@property (nonatomic, readonly) JetXRuntimeObjC *objcRuntime;
@property (nonatomic, copy) id /* block */ onDismiss;
@property (nonatomic, readonly) NSURL *path;
@property (nonatomic, readonly) unsigned long long tfn_supportedInterfaceOrientations;
@property (nonatomic, readonly) long long preferredInterfaceOrientationForPresentation;

/* instance methods */
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mediaTransitionPreviewFrameInWindow:(id)window forObject:(id)object;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mediaTransitionPreviewHostViewFrameInWindow:(id)window forObject:(id)object;
- (void)mediaTransitionOfType:(long long)type didEndForObject:(id)object;
- (id)initWithPath:(id)path account:(id)account skipCache:(_Bool)cache backgroundColor:(id)color;
- (id)initWithPath:(id)path payload:(id)payload account:(id)account skipCache:(_Bool)cache backgroundColor:(id)color;
- (id)initWithCoder:(id)coder;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewDidLoad;
- (void)viewSafeAreaInsetsDidChange;
- (void)keyboardWillShowWithNotification:(id)notification;
- (void)keyboardWillHideWithNotification:(id)notification;
- (void)keyboardDidHideWithNotification:(id)notification;
- (void)keyboardWillChangeFrameWithNotification:(id)notification;
- (void)viewDidDisappear:(_Bool)disappear;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)traitCollectionDidChange:(id)change;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })size withTransitionCoordinator:(id)coordinator;
- (void)dealloc;
- (void)dynamicColorsDidReloadWithNotification:(id)notification;
- (void)fontSizeDidChangeWithNotification:(id)notification;
- (void)orientationChanged:(id)changed;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* T1JetfuelViewController_h */
