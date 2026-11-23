//
#ifndef T1LiveEventLegacyFloatingMiniPlayerVisibilityController_h
#define T1LiveEventLegacyFloatingMiniPlayerVisibilityController_h
@import Foundation;

#include "T1LiveEventLegacyFloatingMiniPlayerVisibilityControllerDelegate-Protocol.h"
#include "TFNViewControllerEventObserver-Protocol.h"

@class NSHashTable, NSObject, NSString;

@interface T1LiveEventLegacyFloatingMiniPlayerVisibilityController : NSObject <TFNViewControllerEventObserver>

@property (retain, nonatomic) NSHashTable *hidingViewControllers;
@property (weak, nonatomic) id <T1LiveEventLegacyFloatingMiniPlayerVisibilityControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)registerVisibleViewController:(id)controller;
- (void)unregisterVisibleViewController:(id)controller;
- (void)_t1_hideDockingIfNecessaryWithAppearingViewController:(id)controller;
- (void)_t1_showDockingIfPossibleWithDisappearingViewController:(id)controller;
- (void)_t1_changeDockedViewVisibilityWithVisible:(_Bool)visible;
- (void)viewControllerViewWillFullyAppear:(id)appear;
- (void)viewControllerViewDidFullyAppear:(id)appear;
- (void)viewControllerViewDidFullyDisappear:(id)disappear;

@end

#endif /* T1LiveEventLegacyFloatingMiniPlayerVisibilityController_h */
