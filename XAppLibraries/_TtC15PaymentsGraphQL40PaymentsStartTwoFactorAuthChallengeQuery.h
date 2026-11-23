//
#ifndef _TtC15PaymentsGraphQL40PaymentsStartTwoFactorAuthChallengeQuery_h
#define _TtC15PaymentsGraphQL40PaymentsStartTwoFactorAuthChallengeQuery_h
@import Foundation;

@class Swift.Bool, _$s8TFSModel16PendingStateNodeMp ?, _$sSDyS2SGSg, _$sSS, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface PaymentsGraphQL.PaymentsStartTwoFactorAuthChallengeQuery : Swift._SwiftObject { // (Swift)
    /* instance variables */
    protocol descriptor for TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    Swift.String challengeID;
}

@end

#endif /* _TtC15PaymentsGraphQL40PaymentsStartTwoFactorAuthChallengeQuery_h */
