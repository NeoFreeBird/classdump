//
#ifndef _TtC14XSportsGraphQL17NFLSeasonIDsQuery_h
#define _TtC14XSportsGraphQL17NFLSeasonIDsQuery_h
@import Foundation;

@class Swift.Bool, _$s14GraphQLScalars13NumericStringVMn ?, _$s8TFSModel16PendingStateNodeMp ?, _$sSDyS2SGSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface XSportsGraphQL.NFLSeasonIDsQuery : Swift._SwiftObject { // (Swift)
    /* instance variables */
    protocol descriptor for TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    nominal type descriptor for GraphQLScalars.NumericString ? firstStartTime;
    nominal type descriptor for GraphQLScalars.NumericString ? firstEndTime;
    nominal type descriptor for GraphQLScalars.NumericString ? secondStartTime;
    nominal type descriptor for GraphQLScalars.NumericString ? secondEndTime;
    nominal type descriptor for GraphQLScalars.NumericString ? thirdStartTime;
    nominal type descriptor for GraphQLScalars.NumericString ? thirdEndTime;
}

@end

#endif /* _TtC14XSportsGraphQL17NFLSeasonIDsQuery_h */
