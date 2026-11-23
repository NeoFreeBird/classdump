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
