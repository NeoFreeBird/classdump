//
#ifndef _TtC14GraphQLActions34CreateAboutModuleFromVenueMutation_h
#define _TtC14GraphQLActions34CreateAboutModuleFromVenueMutation_h
@import Foundation;

@class GraphQLModels.AboutModuleConfigInputSimplifiedInput, GraphQLModels.BusinessVenueInput, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _$sSbSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.CreateAboutModuleFromVenueMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    GraphQLModels.BusinessVenueInput venueData;
    GraphQLModels.AboutModuleConfigInputSimplifiedInput config;
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

#endif /* _TtC14GraphQLActions34CreateAboutModuleFromVenueMutation_h */
