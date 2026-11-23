//
#ifndef TUCPaymentDestinationHandlerHelper_Protocol_h
#define TUCPaymentDestinationHandlerHelper_Protocol_h
@import Foundation;

@protocol TUCPaymentDestinationHandlerHelper

@required

/* required instance methods */
- (void)showCheckoutConfirmationWithVariantID:(id)id context:(id)context completion:(id /* block */)completion;

@optional

@end

#endif /* TUCPaymentDestinationHandlerHelper_Protocol_h */
