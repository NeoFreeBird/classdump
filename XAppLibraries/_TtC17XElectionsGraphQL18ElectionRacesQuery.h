//
#ifndef _TtC17XElectionsGraphQL18ElectionRacesQuery_h
#define _TtC17XElectionsGraphQL18ElectionRacesQuery_h
@import Foundation;

@class Swift.Bool, _$s14GraphQLScalars13NumericStringVMn, _$s14GraphQLScalars13NumericStringVMn ?, _$s8TFSModel16PendingStateNodeMp ?, _$sSDyS2SGSg, _$sSSSg, _$sSbSg, _$ss5Int32VMn ?, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface XElectionsGraphQL.ElectionRacesQuery : Swift._SwiftObject { // (Swift)
    /* instance variables */
    protocol descriptor for TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    nominal type descriptor for GraphQLScalars.NumericString electionRestID;
    nominal type descriptor for GraphQLScalars.NumericString ? chamberRestID;
    nominal type descriptor for GraphQLScalars.NumericString ? geographyRestID;
    Swift.String? level;
    Swift.Bool? marqueeOnly;
    Swift.String? orderBy;
    Swift.String? cursor;
    nominal type descriptor for Swift.Int32 ? limit;
}

@end

#endif /* _TtC17XElectionsGraphQL18ElectionRacesQuery_h */
