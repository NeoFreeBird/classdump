//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtCC13GraphQLModels16ApiMediaFragment17MediaAvailability_h
#define _TtCC13GraphQLModels16ApiMediaFragment17MediaAvailability_h
@import Foundation;

@class GraphQLModels.Enumeration GraphQLScalars.MediaAvailabilityStatus, GraphQLModels.Enumeration GraphQLScalars.MediaAvailabilityStatusReason ?, GraphQLModels.Union GraphQLModels.ApiMediaFragment.MediaAvailability.UnavailabilityInfo ?, _TtCs12_SwiftObject;

@interface GraphQLModels.ApiMediaFragment.MediaAvailability : Swift._SwiftObject { // (Swift)
    /* instance variables */
    GraphQLModels.Enumeration GraphQLScalars.MediaAvailabilityStatusReason ? reason;
    GraphQLModels.Enumeration GraphQLScalars.MediaAvailabilityStatus status;
    GraphQLModels.Union GraphQLModels.ApiMediaFragment.MediaAvailability.UnavailabilityInfo ? unavailabilityInfo;
}

@end

#endif /* _TtCC13GraphQLModels16ApiMediaFragment17MediaAvailability_h */
