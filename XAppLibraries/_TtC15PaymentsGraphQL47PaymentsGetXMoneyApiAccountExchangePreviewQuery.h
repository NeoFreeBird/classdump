//
#ifndef _TtC15PaymentsGraphQL47PaymentsGetXMoneyApiAccountExchangePreviewQuery_h
#define _TtC15PaymentsGraphQL47PaymentsGetXMoneyApiAccountExchangePreviewQuery_h
@import Foundation;

@class Swift.Bool, _$s8TFSModel16PendingStateNodeMp ?, _$sSDyS2SGSg, _$sSS, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface PaymentsGraphQL.PaymentsGetXMoneyApiAccountExchangePreviewQuery : Swift._SwiftObject { // (Swift)
    /* instance variables */
    protocol descriptor for TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    Swift.String token;
    Swift.Bool includeCanPay;
    Swift.Bool includeDmMuting;
    Swift.Bool includeGrokTranslatedBio;
    Swift.Bool includeProfessional;
    Swift.Bool includeReplyDeviceFollow;
}

@end

#endif /* _TtC15PaymentsGraphQL47PaymentsGetXMoneyApiAccountExchangePreviewQuery_h */
