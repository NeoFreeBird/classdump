//
#ifndef TSASkipIfDeniedRequestPolicy_h
#define TSASkipIfDeniedRequestPolicy_h
@import Foundation;

#include "TSARequestPolicy-Protocol.h"

@class NSObject, NSString;

@interface TSASkipIfDeniedRequestPolicy : NSObject <TSARequestPolicy>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (_Bool)shouldExecuteRequest:(id)request withCurrentInAppStatus:(long long)status systemStatus:(long long)status metadata:(id)metadata authorized:(_Bool)authorized;

@end

#endif /* TSASkipIfDeniedRequestPolicy_h */
