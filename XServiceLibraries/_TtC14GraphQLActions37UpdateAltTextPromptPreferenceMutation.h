//
#ifndef _TtC14GraphQLActions37UpdateAltTextPromptPreferenceMutation_h
#define _TtC14GraphQLActions37UpdateAltTextPromptPreferenceMutation_h
@import Foundation;

@class GraphQLScalars.AltTextPromptTypeInput, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.UpdateAltTextPromptPreferenceMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    GraphQLScalars.AltTextPromptTypeInput promptType;
}

@end

#endif /* _TtC14GraphQLActions37UpdateAltTextPromptPreferenceMutation_h */
