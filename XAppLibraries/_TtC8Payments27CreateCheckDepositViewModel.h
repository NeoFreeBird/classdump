//
#ifndef _TtC8Payments27CreateCheckDepositViewModel_h
#define _TtC8Payments27CreateCheckDepositViewModel_h
@import Foundation;

@class _$s7Combine9PublishedVMn _$sSSSg, _$s7Combine9PublishedVMn _$ss5Int64VMn, _$sSD -> PaymentsModels.XPaymentsCheckImageSide _$sSS, _$sSS, _$sSSSg, _TtCs12_SwiftObject;

@interface Payments.CreateCheckDepositViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String idempotencyKey;
    nominal type descriptor for Combine.Published Swift.String? _accountID;
    nominal type descriptor for Combine.Published nominal type descriptor for Swift.Int64 _amountLocalMicro;
    Swift.String? uploadSessionID;
    Swift.Dictionary -> PaymentsModels.XPaymentsCheckImageSide Swift.String filesIDs;
}

@end

#endif /* _TtC8Payments27CreateCheckDepositViewModel_h */
