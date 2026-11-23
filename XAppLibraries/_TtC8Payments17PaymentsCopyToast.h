//
#ifndef _TtC8Payments17PaymentsCopyToast_h
#define _TtC8Payments17PaymentsCopyToast_h
@import Foundation;

#include "TFNToastViewModel-Protocol.h"

@class NSObject, NSString, _$sSS;

@interface Payments.PaymentsCopyToast : NSObject <TFNToastViewModel> { // (Swift)
    /* instance variables */
    Swift.String attributeName;
}

@property (nonatomic, readonly) NSString *messageText;

/* instance methods */
- (id)init;

@end

#endif /* _TtC8Payments17PaymentsCopyToast_h */
