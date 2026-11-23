//
#ifndef _TtC8Payments13PaymentsToast_h
#define _TtC8Payments13PaymentsToast_h
@import Foundation;

#include "TFNToastViewModel-Protocol.h"

@class NSObject, NSString, TFNToastAction, _$sSS, _$sSSSg, _$sSd, _$sSo14TFNToastActionCSg;

@interface Payments.PaymentsToast : NSObject <TFNToastViewModel> // (Swift)

@property (nonatomic, readonly) NSString *messageText;
@property (nonatomic, readonly) NSString *detailText;
@property (nonatomic, readonly) NSString *iconName;
@property (nonatomic, readonly) TFNToastAction *primaryAction;
@property (nonatomic, readonly) double displayDuration;

/* instance methods */
- (id)init;

@end

#endif /* _TtC8Payments13PaymentsToast_h */
