//
#ifndef _TtC8Payments29PaymentsCardIncompatibleToast_h
#define _TtC8Payments29PaymentsCardIncompatibleToast_h
@import Foundation;

#include "TFNToastViewModel-Protocol.h"

@class MoneyProtos.XMoneyPaymentMethodStatus ?, NSObject, NSString;

@interface Payments.PaymentsCardIncompatibleToast : NSObject <TFNToastViewModel> { // (Swift)
    /* instance variables */
    MoneyProtos.XMoneyPaymentMethodStatus ? status;
}

@property (nonatomic, readonly) NSString *messageText;
@property (nonatomic, readonly) NSString *detailText;

/* instance methods */
- (id)init;

@end

#endif /* _TtC8Payments29PaymentsCardIncompatibleToast_h */
