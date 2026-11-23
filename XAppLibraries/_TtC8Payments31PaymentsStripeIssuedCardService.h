//
#ifndef _TtC8Payments31PaymentsStripeIssuedCardService_h
#define _TtC8Payments31PaymentsStripeIssuedCardService_h
@import Foundation;

#include "PKAddPaymentPassViewControllerDelegate-Protocol.h"

@class NSArray, NSData, NSObject, PKAddPaymentPassViewController, Payments.PaymentsActionService, Payments.PaymentsDataSource, Payments.PaymentsLogging, _$sSSSg, _$sSo13PKPassLibraryC;

@interface Payments.PaymentsStripeIssuedCardService : NSObject <PKAddPaymentPassViewControllerDelegate> { // (Swift)
    /* instance variables */
    Payments.PaymentsActionService actionService;
    Payments.PaymentsDataSource dataSource;
    Payments.PaymentsLogging logger;
    __C.PKPassLibrary passLibrary;
    Swift.String? addToWalletCardId;
    Swift.String? addToWalletEphemeralKeySecret;
}

/* instance methods */
- (void)addPaymentPassViewController:(PKAddPaymentPassViewController *)controller generateRequestWithCertificateChain:(NSArray *)chain nonce:(NSData *)nonce nonceSignature:(NSData *)signature completionHandler:(id /* block */)handler;
- (void)addPaymentPassViewController:(id)controller didFinishAddingPaymentPass:(id)pass error:(id)error;
- (id)init;

@end

#endif /* _TtC8Payments31PaymentsStripeIssuedCardService_h */
