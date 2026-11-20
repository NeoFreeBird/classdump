//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14XSportsGraphQL19SoccerScheduleQuery_h
#define _TtC14XSportsGraphQL19SoccerScheduleQuery_h
@import Foundation;

@class Swift.Bool, _$s14GraphQLScalars13NumericStringVMn ?, _$s8TFSModel16PendingStateNodeMp ?, _$sSDyS2SGSg, _$sSSSg, _$ss5Int32VMn ?, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface XSportsGraphQL.SoccerScheduleQuery : Swift._SwiftObject { // (Swift)
    /* instance variables */
    protocol descriptor for TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    Swift.String? league;
    nominal type descriptor for GraphQLScalars.NumericString ? startMs;
    nominal type descriptor for GraphQLScalars.NumericString ? endMs;
    nominal type descriptor for Swift.Int32 ? limit;
}

@end

#endif /* _TtC14XSportsGraphQL19SoccerScheduleQuery_h */
