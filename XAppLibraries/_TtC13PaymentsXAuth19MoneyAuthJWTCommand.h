//
#ifndef _TtC13PaymentsXAuth19MoneyAuthJWTCommand_h
#define _TtC13PaymentsXAuth19MoneyAuthJWTCommand_h
@import Foundation;

@class TFSTwitterAPICommand, _$sSSSg;

@interface PaymentsXAuth.MoneyAuthJWTCommand : TFSTwitterAPICommand { // (Swift)
    /* instance variables */
    Swift.String? dtab;
}

/* instance methods */
- (id)request;
- (id)initWithAccountID:(id)id context:(id)context authContext:(id)context networkTransactionMetrics:(id)metrics source:(unsigned long long)source completionBlock:(id /* block */)block;

@end

#endif /* _TtC13PaymentsXAuth19MoneyAuthJWTCommand_h */
