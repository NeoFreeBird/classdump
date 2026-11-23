//
#ifndef _TtC14XDraftsGraphQL25FetchScheduledTweetsQuery_h
#define _TtC14XDraftsGraphQL25FetchScheduledTweetsQuery_h
@import Foundation;

@class Swift.Bool, _$s14GraphQLScalars13NumericStringVMn ?, _$s8TFSModel16PendingStateNodeMp ?, _$sSDyS2SGSg, _$ss5Int16VMn ?, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface XDraftsGraphQL.FetchScheduledTweetsQuery : Swift._SwiftObject { // (Swift)
    /* instance variables */
    protocol descriptor for TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    Swift.Bool ascending;
    nominal type descriptor for Swift.Int16 ? limit;
    nominal type descriptor for GraphQLScalars.NumericString ? maxID;
    nominal type descriptor for GraphQLScalars.NumericString ? minID;
}

@end

#endif /* _TtC14XDraftsGraphQL25FetchScheduledTweetsQuery_h */
