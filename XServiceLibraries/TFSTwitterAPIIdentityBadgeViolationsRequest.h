//
#ifndef TFSTwitterAPIIdentityBadgeViolationsRequest_h
#define TFSTwitterAPIIdentityBadgeViolationsRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterAPIIdentityBadgeViolationsRequest : TFSTwitterAPIEndpointRequest

/* class methods */
+ (unsigned long long)baseURLType;

/* instance methods */
- (id)initWithUserID:(id)id context:(id)context responseModelBuilder:(id)builder;

@end

#endif /* TFSTwitterAPIIdentityBadgeViolationsRequest_h */
