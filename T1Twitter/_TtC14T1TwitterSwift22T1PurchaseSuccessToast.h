//
#ifndef _TtC14T1TwitterSwift22T1PurchaseSuccessToast_h
#define _TtC14T1TwitterSwift22T1PurchaseSuccessToast_h
@import Foundation;

#include "TFNToastViewModel-Protocol.h"

@class NSObject, NSString, T1TwitterSwift.T1PurchaseSuccessToast.PurchaseType, TFNToastAction, _$sSS, _$sSSSg, _$sSo14TFNToastActionCSgSg, _$sSo17TFNTwitterAccountC;

@interface T1TwitterSwift.T1PurchaseSuccessToast : NSObject <TFNToastViewModel> { // (Swift)
    /* instance variables */
    T1TwitterSwift.T1PurchaseSuccessToast.PurchaseType purchaseType;
    __C.TFNTwitterAccount purchasingAccount;
    __C.TFNTwitterAccount currentAccount;
    __C.TFNToastAction?? $__lazy_storage_$_primaryAction;
}

@property (nonatomic, readonly) NSString *messageText;
@property (nonatomic, readonly) NSString *iconName;
@property (nonatomic, retain) TFNToastAction *primaryAction;

/* instance methods */
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift22T1PurchaseSuccessToast_h */
