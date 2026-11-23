//
#ifndef PKAddPaymentPassViewControllerDelegate_Protocol_h
#define PKAddPaymentPassViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PKAddPaymentPassViewControllerDelegate <NSObject>

@required

/* required instance methods */
- (void)addPaymentPassViewController:(id)controller generateRequestWithCertificateChain:(id)chain nonce:(id)nonce nonceSignature:(id)signature completionHandler:(id /* block */)handler;
- (void)addPaymentPassViewController:(id)controller didFinishAddingPaymentPass:(id)pass error:(id)error;
- (void)addPaymentPassViewController:(id)controller didFinishAddingPaymentPass:(id)pass error:(id)error;

@optional

@end

#endif /* PKAddPaymentPassViewControllerDelegate_Protocol_h */
