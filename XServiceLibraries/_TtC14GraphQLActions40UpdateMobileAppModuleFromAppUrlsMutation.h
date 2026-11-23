//
#ifndef _TtC14GraphQLActions40UpdateMobileAppModuleFromAppUrlsMutation_h
#define _TtC14GraphQLActions40UpdateMobileAppModuleFromAppUrlsMutation_h
@import Foundation;

@class GraphQLModels.AppUrlsByStoreInput, GraphQLScalars.NumericString, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.UpdateMobileAppModuleFromAppUrlsMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    GraphQLScalars.NumericString moduleID;
    GraphQLModels.AppUrlsByStoreInput appUrlsByStore;
    Swift.Bool includeProductDescriptionField;
    Swift.Bool includeAdditionalProductMediaField;
    Swift.Bool includeDmMuting;
    Swift.Bool includeProfessional;
    Swift.Bool includeCanPay;
    Swift.Bool includeGrokTranslatedBio;
    Swift.Bool includeReplyDeviceFollow;
}

@end

#endif /* _TtC14GraphQLActions40UpdateMobileAppModuleFromAppUrlsMutation_h */
