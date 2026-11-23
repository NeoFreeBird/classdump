//
#ifndef TFNViewController_h
#define TFNViewController_h
@import Foundation;

#include "TFNHapticFeedback-Protocol.h"
#include "TFNLayoutMetricsEnvironment-Protocol.h"
#include "TFNViewControllerVisibility-Protocol.h"

@class NSHashTable, NSString, UIImpactFeedbackGenerator, UINotificationFeedbackGenerator, UISelectionFeedbackGenerator, UIViewController;

@interface TFNViewController : UIViewController <TFNLayoutMetricsEnvironment, TFNViewControllerVisibility, TFNHapticFeedback> {
    /* instance variables */
    long long _transitionState;
    NSHashTable *_eventObservers;
    _Bool _hasBeenPresented;
    _Bool _hasBeenDismissed;
}

@property (readonly, nonatomic) _Bool changingInterfaceOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) _Bool visible;
@property (readonly, nonatomic) UIImpactFeedbackGenerator *impactFeedbackGenerator;
@property (readonly, nonatomic) UISelectionFeedbackGenerator *selectionFeedbackGenerator;
@property (readonly, nonatomic) UINotificationFeedbackGenerator *notificationFeedbackGenerator;

/* class methods */
+ (id)eventObservers;
+ (void)addViewControllerEventObserver:(id)observer;
+ (void)removeViewControllerEventObserver:(id)observer;
+ (id)viewControllerEventObservers;

/* instance methods */
- (void)awakeFromNib;
- (id)initWithNibName:(id)name bundle:(id)bundle;
- (void)dealloc;
- (void)_prepareNotifications;
- (void)private_configureHapticFeedback;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewWillDisappear:(_Bool)disappear;
- (void)viewDidDisappear:(_Bool)disappear;
- (void)_tfn_postCoveringViewControllerDidChangeIfNeeded;
- (void)viewControllerWillPresentAnimated:(_Bool)animated;
- (void)viewControllerDidPresentAnimated:(_Bool)animated;
- (void)viewControllerWillDismissAnimated:(_Bool)animated;
- (void)viewControllerDidDismissAnimated:(_Bool)animated;
- (void)viewWillLayoutSubviews;
- (void)_enforceFloatingViews;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })size withTransitionCoordinator:(id)coordinator;
- (void)viewSafeAreaInsetsDidChange;
- (_Bool)extendedLayoutIncludesOpaqueBars;
- (void)viewWillFullyAppear:(_Bool)appear;
- (void)viewDidFullyAppear:(_Bool)appear;
- (void)viewWillFullyDisappear:(_Bool)disappear;
- (void)viewDidFullyDisappear:(_Bool)disappear;
- (void)applicationDidEnterBackground:(id)background;
- (void)_tfn_applicationWillEnterForeground:(id)foreground;
- (void)applicationWillEnterForegroundFromBackground:(id)background;
- (void)applicationWillResignActive:(id)active;
- (void)applicationDidBecomeActive:(id)active;
- (void)applicationUserDidTakeScreenshot:(id)screenshot;
- (void)voiceOverStatusDidChange:(id)change;
- (void)addViewControllerEventObserver:(id)observer;
- (void)removeViewControllerEventObserver:(id)observer;
- (id)eventObservers;
- (void)setEditing:(_Bool)editing animated:(_Bool)animated completion:(id /* block */)completion;
- (void)setEditing:(_Bool)editing animated:(_Bool)animated;
- (void)tfn_previewingStateDidChange;
- (void)prepareHapticFeedback:(unsigned long long)feedback;
- (void)performHapticFeedback:(unsigned long long)feedback;
- (id)keyCommands;
- (_Bool)isVisible;
- (_Bool)isChangingInterfaceOrientation;

@end

#endif /* TFNViewController_h */
