//
#ifndef _TtC15PaymentsGraphQL27PaymentsVerifyPhoneMutation_h
#define _TtC15PaymentsGraphQL27PaymentsVerifyPhoneMutation_h
@import Foundation;

@class Swift.Bool, _$s8TFSModel16PendingStateNodeMp ?, _$sSDyS2SGSg, _$sSS, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface PaymentsGraphQL.PaymentsVerifyPhoneMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    protocol descriptor for TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    Swift.String phoneNumber;
    Swift.String pin;
}

@end

#endif /* _TtC15PaymentsGraphQL27PaymentsVerifyPhoneMutation_h */
