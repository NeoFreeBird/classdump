//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1GraphQLFeatures_h
#define T1GraphQLFeatures_h
@import Foundation;

#include "T1GraphQLFeaturesProtocol-Protocol.h"
#include "TPSFeatureSwitchesAccess-Protocol.h"

@class NSObject, NSString;

@interface T1GraphQLFeatures : NSObject <T1GraphQLFeaturesProtocol>

@property (readonly, nonatomic) id <TPSFeatureSwitchesAccess> featureSwitches;
@property (readonly, nonatomic) _Bool emailNotificationSettingsMutationEnabled;
@property (readonly, nonatomic) _Bool urtIncomingFollowRequestsTimelineEnabled;
@property (readonly, nonatomic) _Bool graphQLDisplayLocationEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFeatureSwitches:(id)switches;
- (id)init;
- (_Bool)isEmailNotificationSettingsMutationEnabled;
- (_Bool)isUrtIncomingFollowRequestsTimelineEnabled;
- (_Bool)isGraphQLDisplayLocationEnabled;

@end

#endif /* T1GraphQLFeatures_h */
