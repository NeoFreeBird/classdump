//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtCV8Payments25TransactionCompletionView9ViewModel_h
#define _TtCV8Payments25TransactionCompletionView9ViewModel_h
@import Foundation;

@class MoneyProtos.XMoneyTransfer, Payments.ScheduledPaymentParams ?, Payments.TransactionCompletionView.ViewModel.PollSettings, _$s7Combine9PublishedVMn Payments.TransactionCompletionView.ViewModel.LoadingState, _TtCs12_SwiftObject;

@interface Payments.TransactionCompletionView.ViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.Published Payments.TransactionCompletionView.ViewModel.LoadingState _loadingState;
    MoneyProtos.XMoneyTransfer transfer;
    Payments.TransactionCompletionView.ViewModel.PollSettings pollSettings;
    Payments.ScheduledPaymentParams ? scheduleParams;
}

@end

#endif /* _TtCV8Payments25TransactionCompletionView9ViewModel_h */
