//
#ifndef _TtC8Payments31PaymentsPlaidFundingCardService_h
#define _TtC8Payments31PaymentsPlaidFundingCardService_h
@import Foundation;

@class NSObject, Payments.PaymentsActionService, Payments.PaymentsDataSource, Payments.PaymentsLogging, _$s7LinkKit7HandlerMp ?, _$sSSSg;

@interface Payments.PaymentsPlaidFundingCardService : NSObject { // (Swift)
    /* instance variables */
    Payments.PaymentsActionService actionService;
    Payments.PaymentsDataSource dataSource;
    Payments.PaymentsLogging logger;
    Swift.String? plaidToken;
    protocol descriptor for LinkKit.Handler ? plaidHandler;
}

/* instance methods */
- (id)init;

@end

#endif /* _TtC8Payments31PaymentsPlaidFundingCardService_h */
