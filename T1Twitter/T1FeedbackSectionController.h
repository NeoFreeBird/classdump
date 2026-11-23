//
#ifndef T1FeedbackSectionController_h
#define T1FeedbackSectionController_h
@import Foundation;

#include "TFNTwitterDismissibleItem-Protocol.h"

@class NSMutableArray, TFNItemsDataViewSectionController, TFNTwitterAccount, TFNTwitterFeedbackModule;

@interface T1FeedbackSectionController : TFNItemsDataViewSectionController

@property (retain, nonatomic) TFNTwitterAccount *account;
@property (retain, nonatomic) NSMutableArray *prompts;
@property (readonly, nonatomic) TFNTwitterFeedbackModule *feedbackModule;
@property (readonly, nonatomic) id <TFNTwitterDismissibleItem> itemToDismiss;

/* instance methods */
- (id)initWithAccount:(id)account itemToDismiss:(id)dismiss;
- (id)init;
- (_Bool)isLogicalSectionController;
- (unsigned long long)sectionBreaksForItem:(id)item atIndexPath:(id)path;
- (void)showConfirmationForFeedback:(id)feedback;
- (id)calculatedLayoutMetricsForItem:(id)item atIndexPath:(id)path;

@end

#endif /* T1FeedbackSectionController_h */
