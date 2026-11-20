//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TSASkipIfSystemDeniedRequestPolicy_h
#define TSASkipIfSystemDeniedRequestPolicy_h
@import Foundation;

#include "TSARequestPolicy-Protocol.h"

@class NSObject, NSString;

@interface TSASkipIfSystemDeniedRequestPolicy : NSObject <TSARequestPolicy>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (_Bool)shouldExecuteRequest:(id)request withCurrentInAppStatus:(long long)status systemStatus:(long long)status metadata:(id)metadata authorized:(_Bool)authorized;

@end

#endif /* TSASkipIfSystemDeniedRequestPolicy_h */
