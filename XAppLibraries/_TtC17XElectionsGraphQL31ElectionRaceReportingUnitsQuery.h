//
#ifndef _TtC17XElectionsGraphQL31ElectionRaceReportingUnitsQuery_h
#define _TtC17XElectionsGraphQL31ElectionRaceReportingUnitsQuery_h
@import Foundation;

@class Swift.Bool, _$s14GraphQLScalars13NumericStringVMn, _$s8TFSModel16PendingStateNodeMp ?, _$sSDyS2SGSg, _$sSSSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface XElectionsGraphQL.ElectionRaceReportingUnitsQuery : Swift._SwiftObject { // (Swift)
    /* instance variables */
    protocol descriptor for TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    nominal type descriptor for GraphQLScalars.NumericString electionRestID;
    nominal type descriptor for GraphQLScalars.NumericString candidateRestID;
    Swift.String? cursor;
}

@end

#endif /* _TtC17XElectionsGraphQL31ElectionRaceReportingUnitsQuery_h */
