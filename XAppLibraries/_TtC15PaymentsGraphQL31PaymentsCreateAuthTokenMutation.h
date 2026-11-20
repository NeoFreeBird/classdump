//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC15PaymentsGraphQL31PaymentsCreateAuthTokenMutation_h
#define _TtC15PaymentsGraphQL31PaymentsCreateAuthTokenMutation_h
@import Foundation;

@class Swift.Bool, _$s13GraphQLModels32XPaymentsAuthProviderTokensInputVMn ?, _$s8TFSModel16PendingStateNodeMp ?, _$sSDyS2SGSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface PaymentsGraphQL.PaymentsCreateAuthTokenMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    protocol descriptor for TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    nominal type descriptor for GraphQLModels.XPaymentsAuthProviderTokensInput ? providerTokens;
}

@end

#endif /* _TtC15PaymentsGraphQL31PaymentsCreateAuthTokenMutation_h */
