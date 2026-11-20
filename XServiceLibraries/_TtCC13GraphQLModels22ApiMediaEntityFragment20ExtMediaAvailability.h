//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtCC13GraphQLModels22ApiMediaEntityFragment20ExtMediaAvailability_h
#define _TtCC13GraphQLModels22ApiMediaEntityFragment20ExtMediaAvailability_h
@import Foundation;

@class GraphQLModels.Enumeration GraphQLScalars.ApiMediaAvailabilityStatus, GraphQLModels.Enumeration GraphQLScalars.ApiMediaUnavailabilityReason ?, GraphQLModels.Union GraphQLModels.ApiMediaEntityFragment.ExtMediaAvailability.UnavailabilityInfo ?, _TtCs12_SwiftObject;

@interface GraphQLModels.ApiMediaEntityFragment.ExtMediaAvailability : Swift._SwiftObject { // (Swift)
    /* instance variables */
    GraphQLModels.Enumeration GraphQLScalars.ApiMediaUnavailabilityReason ? reason;
    GraphQLModels.Enumeration GraphQLScalars.ApiMediaAvailabilityStatus status;
    GraphQLModels.Union GraphQLModels.ApiMediaEntityFragment.ExtMediaAvailability.UnavailabilityInfo ? unavailabilityInfo;
}

@end

#endif /* _TtCC13GraphQLModels22ApiMediaEntityFragment20ExtMediaAvailability_h */
