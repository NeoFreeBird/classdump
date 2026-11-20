//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11JobsGraphQL14JobSearchQuery_h
#define _TtC11JobsGraphQL14JobSearchQuery_h
@import Foundation;

@class Swift.Bool, _$s13GraphQLModels20JobSearchParamsInputVMn ?, _$s8TFSModel16PendingStateNodeMp ?, _$sSDyS2SGSg, _$sSSSg, _$ss5Int32VMn ?, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface JobsGraphQL.JobSearchQuery : Swift._SwiftObject { // (Swift)
    /* instance variables */
    protocol descriptor for TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    nominal type descriptor for Swift.Int32 ? count;
    Swift.String? cursor;
    nominal type descriptor for GraphQLModels.JobSearchParamsInput ? searchParams;
}

@end

#endif /* _TtC11JobsGraphQL14JobSearchQuery_h */
