//
#ifndef _TtC13GraphQLModels27ProductSubscriptionFragment_h
#define _TtC13GraphQLModels27ProductSubscriptionFragment_h
@import Foundation;

@class GraphQLModels.Enumeration GraphQLScalars.UserSubscriptionClientPlatformAttribution ?, GraphQLModels.Enumeration GraphQLScalars.UserSubscriptionPaymentSource ?, GraphQLModels.Enumeration GraphQLScalars.UserSubscriptionState ?, GraphQLModels.SubscriptionProductFragment ?, _$sSS, _TtCs12_SwiftObject;

@interface GraphQLModels.ProductSubscriptionFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    GraphQLModels.Enumeration GraphQLScalars.UserSubscriptionClientPlatformAttribution ? clientPlatformAttribution;
    GraphQLModels.Enumeration GraphQLScalars.UserSubscriptionPaymentSource ? paymentSource;
    GraphQLModels.SubscriptionProductFragment ? product;
    Swift.String restId;
    GraphQLModels.Enumeration GraphQLScalars.UserSubscriptionState ? state;
}

@end

#endif /* _TtC13GraphQLModels27ProductSubscriptionFragment_h */
