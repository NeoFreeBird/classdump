//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC8Payments31CreateScheduledPaymentViewModel_h
#define _TtC8Payments31CreateScheduledPaymentViewModel_h
@import Foundation;

@class _$s7Combine9PublishedVMn MoneyProtos.XMoneyRecurrenceFrequency ?, _$s7Combine9PublishedVMn Payments.CreateScheduledPaymentViewModel.End ?, _$s7Combine9PublishedVMn Payments.ScheduledPaymentParams, _$s7Combine9PublishedVMn _$s10Foundation4DateVMn ?, _$sSS, _TtCs12_SwiftObject;

@interface Payments.CreateScheduledPaymentViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.Published Payments.ScheduledPaymentParams _params;
    nominal type descriptor for Combine.Published MoneyProtos.XMoneyRecurrenceFrequency ? _frequency;
    nominal type descriptor for Combine.Published nominal type descriptor for Foundation.Date ? _startDate;
    nominal type descriptor for Combine.Published Payments.CreateScheduledPaymentViewModel.End ? _end;
    Swift.String idempotencyKey;
}

@end

#endif /* _TtC8Payments31CreateScheduledPaymentViewModel_h */
