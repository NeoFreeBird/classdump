//
#ifndef _TtC14GraphQLActions37SwitchProfessionalAccountTypeMutation_h
#define _TtC14GraphQLActions37SwitchProfessionalAccountTypeMutation_h
@import Foundation;

@class GraphQLScalars.NumericString, GraphQLScalars.ProfessionalTypeInput, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _$sSbSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.SwitchProfessionalAccountTypeMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    GraphQLScalars.NumericString userID;
    GraphQLScalars.ProfessionalTypeInput professionalType;
    Swift.Bool? includeDmMuting;
    Swift.Bool? includeProfessional;
    Swift.Bool includeCanPay;
    Swift.Bool includeGrokTranslatedBio;
    Swift.Bool includeReplyDeviceFollow;
}

@end

#endif /* _TtC14GraphQLActions37SwitchProfessionalAccountTypeMutation_h */
