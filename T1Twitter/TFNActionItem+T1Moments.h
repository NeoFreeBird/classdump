//
#ifndef TFNActionItem_T1Moments_h
#define TFNActionItem_T1Moments_h
@import Foundation;

@interface TFNActionItem (T1Moments)

/* class methods */
+ (id)actionItemForReportingMomentID:(id)id status:(id)status onViewController:(id)controller account:(id)account trustAndSafetyDelegate:(id)delegate;
+ (id)actionItemForBlockingMomentID:(id)id status:(id)status user:(id)user userContext:(id)context account:(id)account onViewController:(id)controller trustAndSafetyDelegate:(id)delegate;
+ (void)_t1_userDidTapBlockOrReportActionWithContext:(id)context onViewController:(id)controller trustAndSafetyDelegate:(id)delegate;

@end

#endif /* TFNActionItem_T1Moments_h */
