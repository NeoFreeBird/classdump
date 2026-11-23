//
#ifndef T1GraphQLFeaturesProtocol_Protocol_h
#define T1GraphQLFeaturesProtocol_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1GraphQLFeaturesProtocol <NSObject>

@required

@property (readonly, nonatomic) _Bool emailNotificationSettingsMutationEnabled;
@property (readonly, nonatomic) _Bool urtIncomingFollowRequestsTimelineEnabled;
@property (readonly, nonatomic) _Bool graphQLDisplayLocationEnabled;

/* required instance methods */
- (_Bool)isEmailNotificationSettingsMutationEnabled;
- (_Bool)isUrtIncomingFollowRequestsTimelineEnabled;
- (_Bool)isGraphQLDisplayLocationEnabled;

@optional

@end

#endif /* T1GraphQLFeaturesProtocol_Protocol_h */
