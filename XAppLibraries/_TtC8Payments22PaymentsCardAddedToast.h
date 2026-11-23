//
#ifndef _TtC8Payments22PaymentsCardAddedToast_h
#define _TtC8Payments22PaymentsCardAddedToast_h
@import Foundation;

#include "TFNToastViewModel-Protocol.h"

@class NSObject, NSString;

@interface Payments.PaymentsCardAddedToast : NSObject <TFNToastViewModel> // (Swift)

@property (nonatomic, readonly) NSString *messageText;

/* instance methods */
- (id)init;

@end

#endif /* _TtC8Payments22PaymentsCardAddedToast_h */
