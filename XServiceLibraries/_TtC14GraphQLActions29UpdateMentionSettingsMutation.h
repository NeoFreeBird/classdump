//
#ifndef _TtC14GraphQLActions29UpdateMentionSettingsMutation_h
#define _TtC14GraphQLActions29UpdateMentionSettingsMutation_h
@import Foundation;

@class GraphQLScalars.MentionAllowOptionInput, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.UpdateMentionSettingsMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    Swift.Bool allowMentions;
    GraphQLScalars.MentionAllowOptionInput allowMentionsOption;
}

@end

#endif /* _TtC14GraphQLActions29UpdateMentionSettingsMutation_h */
