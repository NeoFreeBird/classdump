//
#ifndef TSARequestPolicy_Protocol_h
#define TSARequestPolicy_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TSARequestPolicy <NSObject>

@required

@optional

/* optional instance methods */
- (_Bool)shouldExecuteRequest:(id)request withCurrentInAppStatus:(long long)status systemStatus:(long long)status metadata:(id)metadata authorized:(_Bool)authorized;
- (_Bool)shouldSkipPresentationIfInAppAuthorized;
- (_Bool)shouldExecuteRequest:(id)request withRequestLogEntries:(id)entries;

@end

#endif /* TSARequestPolicy_Protocol_h */
