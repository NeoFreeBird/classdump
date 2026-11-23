//
#ifndef _TtC14T1TwitterSwift34QuickPromoteDeferredPurchasesToast_h
#define _TtC14T1TwitterSwift34QuickPromoteDeferredPurchasesToast_h
@import Foundation;

#include "TFNToastViewModel-Protocol.h"

@class NSObject, NSString, TFNToastAction, TFNToastScribeContext, _$sSS, _$sSSSg, _$sSo14TFNToastActionCSg, _$sSo21TFNToastScribeContextCSg;

@interface T1TwitterSwift.QuickPromoteDeferredPurchasesToast : NSObject <TFNToastViewModel> // (Swift)

@property (nonatomic, readonly) NSString *messageText;
@property (nonatomic, readonly) NSString *iconName;
@property (nonatomic, readonly) TFNToastAction *primaryAction;
@property (nonatomic, readonly) TFNToastAction *alternateAction;
@property (nonatomic, readonly) TFNToastScribeContext *scribeContext;

/* instance methods */
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift34QuickPromoteDeferredPurchasesToast_h */
