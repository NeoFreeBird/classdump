//
#ifndef TFSTwitterAPIAccountTeamsPendingContributeesRequest_h
#define TFSTwitterAPIAccountTeamsPendingContributeesRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterAPIAccountTeamsPendingContributeesRequest : TFSTwitterAPIEndpointRequest

/* class methods */
+ (id)endpointPath;
+ (unsigned long long)responseHydrationFlags;
+ (long long)HTTPMethodValue;

/* instance methods */
- (id)initWithContext:(id)context responseModelBuilder:(id)builder;

@end

#endif /* TFSTwitterAPIAccountTeamsPendingContributeesRequest_h */
