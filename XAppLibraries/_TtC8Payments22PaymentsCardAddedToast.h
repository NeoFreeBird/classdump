//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
