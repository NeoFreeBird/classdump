//
#ifndef _TtC14GraphQLActions27UserResultByScreenNameQuery_h
#define _TtC14GraphQLActions27UserResultByScreenNameQuery_h
@import Foundation;

@class Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _$sSS, _$sSbSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.UserResultByScreenNameQuery : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    Swift.String screenName;
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

#endif /* _TtC14GraphQLActions27UserResultByScreenNameQuery_h */
