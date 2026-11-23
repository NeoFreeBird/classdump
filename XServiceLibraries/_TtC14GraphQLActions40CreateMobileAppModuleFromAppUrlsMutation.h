//
#ifndef _TtC14GraphQLActions40CreateMobileAppModuleFromAppUrlsMutation_h
#define _TtC14GraphQLActions40CreateMobileAppModuleFromAppUrlsMutation_h
@import Foundation;

@class GraphQLModels.AppUrlsByStoreInput, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _$sSbSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.CreateMobileAppModuleFromAppUrlsMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    GraphQLModels.AppUrlsByStoreInput appUrlsByStore;
    Swift.Bool? visibleOnCreation;
    Swift.Bool includeProductDescriptionField;
    Swift.Bool includeAdditionalProductMediaField;
    Swift.Bool includeDmMuting;
    Swift.Bool includeProfessional;
    Swift.Bool includeCanPay;
    Swift.Bool includeGrokTranslatedBio;
    Swift.Bool includeReplyDeviceFollow;
}

@end

#endif /* _TtC14GraphQLActions40CreateMobileAppModuleFromAppUrlsMutation_h */
