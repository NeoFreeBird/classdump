//
#ifndef _TtC13GraphQLModels23AboutModuleDataFragment_h
#define _TtC13GraphQLModels23AboutModuleDataFragment_h
@import Foundation;

@class GraphQLModels.ApiShortenedUrlFragment ?, GraphQLModels.BusinessAddressResponseFragment ?, GraphQLModels.BusinessContactFragment ?, GraphQLModels.BusinessOpenTimesResponseFragment ?, GraphQLModels.BusinessTimezoneFragment ?, GraphQLModels.GoogleVerificationDataFragment ?, _TtCs12_SwiftObject;

@interface GraphQLModels.AboutModuleDataFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    GraphQLModels.BusinessAddressResponseFragment ? address;
    GraphQLModels.BusinessContactFragment ? contact;
    GraphQLModels.GoogleVerificationDataFragment ? googleVerificationData;
    GraphQLModels.BusinessOpenTimesResponseFragment ? openTimes;
    GraphQLModels.BusinessTimezoneFragment ? timezone;
    GraphQLModels.ApiShortenedUrlFragment ? website;
}

@end

#endif /* _TtC13GraphQLModels23AboutModuleDataFragment_h */
