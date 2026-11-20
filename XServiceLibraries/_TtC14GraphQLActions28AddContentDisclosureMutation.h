//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14GraphQLActions28AddContentDisclosureMutation_h
#define _TtC14GraphQLActions28AddContentDisclosureMutation_h
@import Foundation;

@class GraphQLModels.AdvertisingDisclosureOptionsInput ?, GraphQLModels.AiGeneratedDisclosureOptionsInput ?, GraphQLScalars.NumericString, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.AddContentDisclosureMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    GraphQLScalars.NumericString tweetID;
    GraphQLModels.AdvertisingDisclosureOptionsInput ? advertisingDisclosure;
    GraphQLModels.AiGeneratedDisclosureOptionsInput ? aiGeneratedDisclosure;
}

@end

#endif /* _TtC14GraphQLActions28AddContentDisclosureMutation_h */
