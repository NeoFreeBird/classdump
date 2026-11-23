//
#ifndef _TtC11ChatGraphQL18GetPublicKeysQuery_h
#define _TtC11ChatGraphQL18GetPublicKeysQuery_h
@import Foundation;

@class Swift.Bool, _$s8TFSModel16PendingStateNodeMp ?, _$sSDyS2SGSg, _$sSa -> _$s14GraphQLScalars13NumericStringVMn, _$sSbSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface ChatGraphQL.GetPublicKeysQuery : Swift._SwiftObject { // (Swift)
    /* instance variables */
    protocol descriptor for TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    Swift.Array -> nominal type descriptor for GraphQLScalars.NumericString ids;
    Swift.Bool? includeJuiceboxTokens;
}

@end

#endif /* _TtC11ChatGraphQL18GetPublicKeysQuery_h */
