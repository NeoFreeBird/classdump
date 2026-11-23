//
#ifndef _TtC14GraphQLActions23UserResultByRestIdQuery_h
#define _TtC14GraphQLActions23UserResultByRestIdQuery_h
@import Foundation;

@class GraphQLScalars.NumericString, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _$sSbSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.UserResultByRestIdQuery : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    GraphQLScalars.NumericString restID;
    Swift.Bool? includeDmMuting;
    Swift.Bool? includeIsProfileTranslatable;
    Swift.Bool? includeProfessional;
    Swift.Bool? includeBusinessAccount;
    Swift.Bool? includeHighlightsInfo;
    Swift.Bool? includeCreatorSubscriptionsCount;
    Swift.Bool? includeHiddenProfileLikes;
    Swift.Bool? creatorSubscriptionsEmailShareEnabled;
    Swift.Bool? includeCanPay;
    Swift.Bool includeGrokTranslatedBio;
    Swift.Bool includeReplyDeviceFollow;
}

@end

#endif /* _TtC14GraphQLActions23UserResultByRestIdQuery_h */
