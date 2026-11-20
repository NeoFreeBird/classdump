//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC4DMV230KMPInitiateMoneyTransferWorker_h
#define _TtC4DMV230KMPInitiateMoneyTransferWorker_h
@import Foundation;

@class DMModels.MoneyTransferActionTriggerStream, DMUI.RootNavigation, _$s11XFoundation13CombineWorkerCN, _$s13ChatUtilities0A21PaymentReceiptSendingMp;

@interface DMV2.KMPInitiateMoneyTransferWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    DMModels.MoneyTransferActionTriggerStream moneyTransferActionTriggerStream;
    protocol descriptor for ChatUtilities.ChatPaymentReceiptSending paymentReceiptSender;
    DMUI.RootNavigation rootNavigation;
}

@end

#endif /* _TtC4DMV230KMPInitiateMoneyTransferWorker_h */
