//
#ifndef _TtC14XSportsGraphQL21NBAMatchupSeasonQuery_h
#define _TtC14XSportsGraphQL21NBAMatchupSeasonQuery_h
@import Foundation;

@class Swift.Bool, _$s14GraphQLScalars13NumericStringVMn, _$s14GraphQLScalars13NumericStringVMn ?, _$s8TFSModel16PendingStateNodeMp ?, _$sSDyS2SGSg, _$ss5Int32VMn ?, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface XSportsGraphQL.NBAMatchupSeasonQuery : Swift._SwiftObject { // (Swift)
    /* instance variables */
    protocol descriptor for TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    nominal type descriptor for GraphQLScalars.NumericString awayTeamRestID;
    nominal type descriptor for GraphQLScalars.NumericString homeTeamRestID;
    nominal type descriptor for Swift.Int32 ? seasonYear;
    nominal type descriptor for GraphQLScalars.NumericString ? recentStartMs;
    nominal type descriptor for GraphQLScalars.NumericString ? recentEndMs;
}

@end

#endif /* _TtC14XSportsGraphQL21NBAMatchupSeasonQuery_h */
