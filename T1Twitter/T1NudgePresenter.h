//
#ifndef T1NudgePresenter_h
#define T1NudgePresenter_h
@import Foundation;

#include "T1Nudge-Protocol.h"
#include "T1NudgeDelegate-Protocol.h"
#include "TFNHapticFeedback-Protocol.h"

@class NSObject, NSString, TFNTwitterAccount, TFNTwitterComposition, UIImpactFeedbackGenerator, UINotificationFeedbackGenerator, UISelectionFeedbackGenerator, UIViewController;

@interface T1NudgePresenter : NSObject <TFNHapticFeedback, T1Nudge>

@property (retain, nonatomic) UIViewController *nudgeTrayViewController;
@property (readonly, nonatomic) _Bool hasSelectedMenuItem;
@property (nonatomic) _Bool isObservingBackgroundNotification;
@property (nonatomic) _Bool hasNotifiedDelegateOfDismissal;
@property (nonatomic) _Bool didPresent;
@property (readonly, nonatomic) TFNTwitterComposition *composition;
@property (readonly, nonatomic) TFNTwitterAccount *account;
@property (weak, nonatomic) id <T1NudgeDelegate> delegate;
@property (readonly, nonatomic) _Bool isTrayPresented;
@property (readonly, nonatomic) UIImpactFeedbackGenerator *impactFeedbackGenerator;
@property (readonly, nonatomic) UISelectionFeedbackGenerator *selectionFeedbackGenerator;
@property (readonly, nonatomic) UINotificationFeedbackGenerator *notificationFeedbackGenerator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long nudgeType;

/* instance methods */
- (id)init;
- (id)initWithComposition:(id)composition account:(id)account;
- (void)presentNudgeFromViewController:(id)controller animated:(_Bool)animated;
- (void)dismissNudgeAnimated:(_Bool)animated completion:(id /* block */)completion;
- (void)_t1_nudgeTrayDidDismiss;
- (void)_t1_notifyDelegateOfDismissalIfNeeded;
- (id)_t1_quotedStatusPreviewView;
- (void)_t1_deleteTweet;
- (void)_t1_sendTweetAnywaysAndRecordAction:(_Bool)action;
- (void)prepareHapticFeedback:(unsigned long long)feedback;
- (void)performHapticFeedback:(unsigned long long)feedback;
- (void)_t1_recordNudgeAction:(unsigned long long)action;
- (void)_t1_recordNudgeAction:(unsigned long long)action forPage:(id)page;
- (void)_t1_recordNudgeResult:(unsigned long long)result;
- (void)_t1_nudgeControllerDidEnterBackground:(id)background;

@end

#endif /* T1NudgePresenter_h */
