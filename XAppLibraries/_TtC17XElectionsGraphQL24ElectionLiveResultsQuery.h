//
#ifndef _TtC17XElectionsGraphQL24ElectionLiveResultsQuery_h
#define _TtC17XElectionsGraphQL24ElectionLiveResultsQuery_h
@import Foundation;

@class Swift.Bool, _$s14GraphQLScalars13NumericStringVMn, _$s14GraphQLScalars13NumericStringVMn ?, _$s8TFSModel16PendingStateNodeMp ?, _$sSDyS2SGSg, _$sSSSg, _$ss5Int32VMn ?, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface XElectionsGraphQL.ElectionLiveResultsQuery : Swift._SwiftObject { // (Swift)
    /* instance variables */
    protocol descriptor for TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    nominal type descriptor for GraphQLScalars.NumericString electionRestID;
    nominal type descriptor for GraphQLScalars.NumericString ? updatedSinceMs;
    Swift.String? cursor;
    nominal type descriptor for Swift.Int32 ? limit;
}

@end

#endif /* _TtC17XElectionsGraphQL24ElectionLiveResultsQuery_h */
