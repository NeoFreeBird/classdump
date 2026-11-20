//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNToaster_h
#define TFNToaster_h
@import Foundation;

#include "T1ToastBox.h"
#include "TFNScribeSink-Protocol.h"
#include "TFNToastViewController.h"
#include "TFNToastViewControllerDelegate-Protocol.h"
#include "TFNToasterContextDelegate-Protocol.h"
#include "TFNViewControllerEventObserver-Protocol.h"
#include "TFNViewControllerVisibility-Protocol.h"
#include "TFSTimer.h"

@class NSDate, NSMutableArray, NSObject, NSString, UINotificationFeedbackGenerator, UIViewController;

@interface TFNToaster : NSObject <TFNViewControllerEventObserver, TFNToastViewControllerDelegate>

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSMutableArray *queue;
@property (retain, nonatomic) T1ToastBox *activeToastBox;
@property (retain, nonatomic) TFSTimer *timer;
@property (nonatomic) _Bool isTimerFiring;
@property (nonatomic) double restoreTimeInterval;
@property (retain, nonatomic) NSDate *throttleNormalToastsUntilDate;
@property (weak, nonatomic) TFNToastViewController *toastViewController;
@property (retain, nonatomic) UINotificationFeedbackGenerator *notificationFeedbackGenerator;
@property (weak, nonatomic) UIViewController<TFNViewControllerVisibility, TFNToasterContextDelegate> *contextDelegate;
@property (retain, nonatomic) id <TFNScribeSink> scribeSink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)defaultToaster;
+ (unsigned long long)normalToastQueueMaxCount;
+ (double)normalToastThrottleCooldownDuration;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)resetToaster;
- (void)registerToastViewController:(id)controller;
- (void)pushToast:(id)toast;
- (void)pushToast:(id)toast withPriority:(unsigned long long)priority;
- (void)dequeueToastsPassingTest:(id /* block */)test;
- (void)setActivityProgressView:(id)view;
- (void)_tfn_insertToastBoxIntoQueue:(id)queue;
- (id)_tfn_popToastBox;
- (_Bool)_tfn_isThrottlingNormalToasts;
- (_Bool)_tfn_throttleNormalToastsIfNeeded;
- (void)_tfn_showNextToastWithStyle:(unsigned long long)style;
- (void)_tfn_dismissCurrentToastWithStyle:(unsigned long long)style completion:(id /* block */)completion;
- (void)_tfn_startToastTimerWithInterval:(double)interval;
- (void)_tfn_timerDidFinish;
- (void)_tfn_applicationDidEnterBackground:(id)background;
- (void)_tfn_callDismissCompletionHandlerIfNeededForToast:(id)toast fromGesture:(_Bool)gesture;
- (void)viewControllerViewDidFullyAppear:(id)appear;
- (void)viewControllerViewDidFullyDisappear:(id)disappear;
- (void)toastViewController:(id)controller didInvokeToastAction:(id)action forToast:(id)toast actionView:(id)view;
- (void)toastViewController:(id)controller willPresentToast:(id)toast;
- (void)toastViewController:(id)controller didPresentToast:(id)toast;
- (void)toastViewController:(id)controller willDismissToast:(id)toast;
- (void)toastViewController:(id)controller didDismissToast:(id)toast withStyle:(unsigned long long)style byGesture:(_Bool)gesture;
- (void)toastViewController:(id)controller isInteractingWithToast:(id)toast;
- (void)toastViewController:(id)controller didEndInteractingWithToast:(id)toast;
- (void)_tfn_scribeAction:(id)action forToast:(id)toast;
- (id)activeToast;
- (id)toastQueue;
- (unsigned long long)priorityForToast:(id)toast;

@end

#endif /* TFNToaster_h */
