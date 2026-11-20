//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TSAAdTrackingRequestPolicy_h
#define TSAAdTrackingRequestPolicy_h
@import Foundation;

#include "TSAAlwaysPromptRequestPolicy.h"

@interface TSAAdTrackingRequestPolicy : TSAAlwaysPromptRequestPolicy

/* instance methods */
- (id)initWithAcknowledgement:(id)acknowledgement;

@end

#endif /* TSAAdTrackingRequestPolicy_h */
