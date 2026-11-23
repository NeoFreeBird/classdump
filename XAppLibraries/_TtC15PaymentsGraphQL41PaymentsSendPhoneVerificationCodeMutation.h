//
#ifndef _TtC15PaymentsGraphQL41PaymentsSendPhoneVerificationCodeMutation_h
#define _TtC15PaymentsGraphQL41PaymentsSendPhoneVerificationCodeMutation_h
@import Foundation;

@class Swift.Bool, _$s8TFSModel16PendingStateNodeMp ?, _$sSDyS2SGSg, _$sSS, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface PaymentsGraphQL.PaymentsSendPhoneVerificationCodeMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    protocol descriptor for TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    Swift.String phoneNumber;
}

@end

#endif /* _TtC15PaymentsGraphQL41PaymentsSendPhoneVerificationCodeMutation_h */
