//
#ifndef _TtC14GraphQLActions20SearchPlaceNameQuery_h
#define _TtC14GraphQLActions20SearchPlaceNameQuery_h
@import Foundation;

@class Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _$sSSSg, _$sSdSg, _$ss5Int32VMn ?, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.SearchPlaceNameQuery : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    Swift.String? placeName;
    Swift.Double? latitude;
    Swift.Double? longitude;
    nominal type descriptor for Swift.Int32 ? maxPlaces;
}

@end

#endif /* _TtC14GraphQLActions20SearchPlaceNameQuery_h */
