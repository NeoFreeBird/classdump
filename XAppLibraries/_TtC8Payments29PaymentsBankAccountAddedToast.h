//
#ifndef _TtC8Payments29PaymentsBankAccountAddedToast_h
#define _TtC8Payments29PaymentsBankAccountAddedToast_h
@import Foundation;

#include "TFNToastViewModel-Protocol.h"

@class NSObject, NSString;

@interface Payments.PaymentsBankAccountAddedToast : NSObject <TFNToastViewModel> // (Swift)

@property (nonatomic, readonly) NSString *messageText;

/* instance methods */
- (id)init;

@end

#endif /* _TtC8Payments29PaymentsBankAccountAddedToast_h */
