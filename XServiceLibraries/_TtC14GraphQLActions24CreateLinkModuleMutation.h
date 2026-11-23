//
#ifndef _TtC14GraphQLActions24CreateLinkModuleMutation_h
#define _TtC14GraphQLActions24CreateLinkModuleMutation_h
@import Foundation;

@class GraphQLScalars.CallToActionInput ?, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _$sSSSg, _$sSbSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.CreateLinkModuleMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    GraphQLScalars.CallToActionInput ? cta;
    Swift.String? rawURL;
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

#endif /* _TtC14GraphQLActions24CreateLinkModuleMutation_h */
