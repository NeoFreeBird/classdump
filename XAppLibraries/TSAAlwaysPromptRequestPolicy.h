//
#ifndef TSAAlwaysPromptRequestPolicy_h
#define TSAAlwaysPromptRequestPolicy_h
@import Foundation;

#include "TSARequestPolicy-Protocol.h"

@class NSObject, NSString;

@interface TSAAlwaysPromptRequestPolicy : NSObject <TSARequestPolicy>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (_Bool)shouldExecuteRequest:(id)request withCurrentInAppStatus:(long long)status systemStatus:(long long)status metadata:(id)metadata authorized:(_Bool)authorized;

@end

#endif /* TSAAlwaysPromptRequestPolicy_h */
