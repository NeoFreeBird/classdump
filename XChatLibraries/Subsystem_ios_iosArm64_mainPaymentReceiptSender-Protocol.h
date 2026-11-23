//
#ifndef Subsystem_ios_iosArm64_mainPaymentReceiptSender_Protocol_h
#define Subsystem_ios_iosArm64_mainPaymentReceiptSender_Protocol_h
@import Foundation;

@protocol Subsystem_ios_iosArm64_mainPaymentReceiptSender

@required

/* required instance methods */
- (void)sendConversationId:(id)id receiptToken:(id)token transactionId:(id)id;
- (void)sendConversationId:(id)id receiptToken:(id)token transactionId:(id)id;

@optional

@end

#endif /* Subsystem_ios_iosArm64_mainPaymentReceiptSender_Protocol_h */
