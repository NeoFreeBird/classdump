//
#ifndef T1StatusMediaHandler_h
#define T1StatusMediaHandler_h
@import Foundation;

#include "T1VideoBitRateManager.h"

@class NSObject, TFNDataViewController, TFNTwitterAccount;

@interface T1StatusMediaHandler : NSObject

@property (readonly, nonatomic) TFNTwitterAccount *account;
@property (retain, nonatomic) T1VideoBitRateManager *videoBitRateManager;
@property (readonly, weak, nonatomic) TFNDataViewController *dataViewController;

/* class methods */
+ (id)statusMediaHandlerForDataViewController:(id)controller account:(id)account;
+ (id)statusMediaHandlerForDataViewController:(id)controller account:(id)account additionalAutoplayFilterPolicies:(id)policies;

/* instance methods */
- (id)init;
- (id)initWithMainDataViewController:(id)controller account:(id)account additionalAutoplayFilterPolicies:(id)policies;
- (void)_t1_setUpPolicyBasedAutoplayManagerWithDataViewController:(id)controller additionalAutoplayFilterPolicies:(id)policies;
- (void)willDisplayPlayerViewContainerCell:(id)cell;
- (void)_t1_configureAutoplayable:(id)autoplayable withScribeContext:(id)context;
- (id)_t1_autoplayableViewInCell:(id)cell;
- (id)_t1_quotedAutoplayableViewInCell:(id)cell;
- (id)_buildScribeContextWithController:(id)controller withSourceStatusViewModel:(id)model;

@end

#endif /* T1StatusMediaHandler_h */
