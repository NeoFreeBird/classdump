//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterTimelineFactory_Protocol_h
#define TFNTwitterTimelineFactory_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNTwitterTimelineFactory <NSObject>

@required

/* required instance methods */
- (id)homeTimelineForAccount:(id)account;
- (id)homeLatestTimelineForAccount:(id)account;
- (_Bool)isCreatorSubscriptionsTimelineEnabledForAccount:(id)account;
- (_Bool)isHomeCountryFilteredTimelineEnabledForAccount:(id)account;
- (_Bool)isHomeTopicFilteredTimelineEnabledForAccount:(id)account;
- (_Bool)isDeferLoadingInactiveTimelinesEnabledForAccount:(id)account;
- (_Bool)shouldRefreshHomeCountryFilteredTimelineForAccount:(id)account;
- (_Bool)shouldRefreshHomeTopicFilteredTimelineForAccount:(id)account;
- (id)homeRankedFollowingTimelineForAccount:(id)account;
- (id)creatorSubscriptionsTimelineForAccount:(id)account;
- (id)pinnedCreatorSubscriptionsTimelineForAccount:(id)account;
- (id)homeCountryFilteredTimelineForAccount:(id)account;
- (id)homeTopicFilteredTimelineForAccount:(id)account;

@optional

@end

#endif /* TFNTwitterTimelineFactory_Protocol_h */
