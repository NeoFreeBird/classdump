//
#ifndef _TtC8Payments36PaymentsBankAccountIncompatibleToast_h
#define _TtC8Payments36PaymentsBankAccountIncompatibleToast_h
@import Foundation;

#include "TFNToastViewModel-Protocol.h"

@class MoneyProtos.XMoneyPaymentMethodStatus ?, NSObject, NSString, TFNToastAction, _$syyYacSg;

@interface Payments.PaymentsBankAccountIncompatibleToast : NSObject <TFNToastViewModel> { // (Swift)
    /* instance variables */
    MoneyProtos.XMoneyPaymentMethodStatus ? status;
    (() async -> ())? updateAction;
}

@property (nonatomic, readonly) NSString *messageText;
@property (nonatomic, readonly) NSString *detailText;
@property (nonatomic, readonly) TFNToastAction *alternateAction;

/* instance methods */
- (id)init;

@end

#endif /* _TtC8Payments36PaymentsBankAccountIncompatibleToast_h */
