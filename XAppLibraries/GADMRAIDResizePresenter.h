//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADMRAIDResizePresenter_h
#define GADMRAIDResizePresenter_h
@import Foundation;

#include "GADCloseButton.h"
#include "GADEventContext.h"
#include "GADMRAIDResizeProperties.h"
#include "GADMonitorOwner-Protocol.h"
#include "GADObserverCollection.h"
#include "GADPresenting-Protocol.h"

@class NSMutableArray, NSObject, NSString, UIView, UIWindowScene;

@interface GADMRAIDResizePresenter : NSObject <GADPresenting, GADMonitorOwner> {
    /* instance variables */
    UIView *_contentView;
    UIView *_pivotView;
    UIView *_cropView;
    UIView *_referenceView;
    _Bool _relinquishCalled;
    GADObserverCollection *_observers;
    NSMutableArray *_monitors;
}

@property (readonly, nonatomic) GADCloseButton *closeButton;
@property (readonly, nonatomic) _Bool willDismissAfterOrientationChange;
@property (retain, nonatomic) GADMRAIDResizeProperties *resizeProperties;
@property (readonly, weak, nonatomic) UIWindowScene *windowScene;
@property (readonly, nonatomic) GADEventContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithContentView:(id)view resizeProperties:(id)properties referenceView:(id)view context:(id)context;
- (void)closeButtonPressed:(id)pressed;
- (void)addMonitor:(id)monitor;
- (_Bool)canPresentFromViewController:(id)controller error:(id *)error;
- (_Bool)shouldDismissOnApplicationEnteringForeground;
- (void)presentFromViewController:(id)controller completion:(id /* block */)completion;
- (void)relinquishScreenWithCompletion:(id /* block */)completion;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cropViewFrameForOrientation:(long long)orientation;
- (void)composeTransparentInterstitialViewsForPresentation;
- (void)animateTransparentInterstitialPresentationWithCompletionHandler:(id /* block */)handler;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentFrame;
- (void)repositionContentIfNeeded;
- (void)didChangeToOrientation:(long long)orientation;
- (void)handleOrientationChangeEvent;

@end

#endif /* GADMRAIDResizePresenter_h */
