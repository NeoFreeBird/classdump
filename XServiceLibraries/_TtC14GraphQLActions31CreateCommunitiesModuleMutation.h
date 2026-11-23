//
#ifndef _TtC14GraphQLActions31CreateCommunitiesModuleMutation_h
#define _TtC14GraphQLActions31CreateCommunitiesModuleMutation_h
@import Foundation;

@class GraphQLModels.CommunitiesModuleInput, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.CreateCommunitiesModuleMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    GraphQLModels.CommunitiesModuleInput communitiesModuleInput;
    Swift.Bool visibleOnCreation;
    Swift.Bool includeProductDescriptionField;
    Swift.Bool includeAdditionalProductMediaField;
    Swift.Bool includeDmMuting;
    Swift.Bool includeProfessional;
    Swift.Bool includeCanPay;
    Swift.Bool includeGrokTranslatedBio;
    Swift.Bool includeReplyDeviceFollow;
}

@end

#endif /* _TtC14GraphQLActions31CreateCommunitiesModuleMutation_h */
