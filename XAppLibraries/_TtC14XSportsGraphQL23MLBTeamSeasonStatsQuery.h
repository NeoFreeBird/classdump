//
#ifndef _TtC14XSportsGraphQL23MLBTeamSeasonStatsQuery_h
#define _TtC14XSportsGraphQL23MLBTeamSeasonStatsQuery_h
@import Foundation;

@class Swift.Bool, _$s14GraphQLScalars13NumericStringVMn, _$s8TFSModel16PendingStateNodeMp ?, _$sSDyS2SGSg, _$sSSSg, _$ss5Int32VMn ?, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface XSportsGraphQL.MLBTeamSeasonStatsQuery : Swift._SwiftObject { // (Swift)
    /* instance variables */
    protocol descriptor for TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    nominal type descriptor for GraphQLScalars.NumericString restID;
    nominal type descriptor for Swift.Int32 ? seasonYear;
    Swift.String? seasonType;
}

@end

#endif /* _TtC14XSportsGraphQL23MLBTeamSeasonStatsQuery_h */
