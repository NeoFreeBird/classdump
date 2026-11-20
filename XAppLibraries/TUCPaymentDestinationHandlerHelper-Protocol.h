//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
