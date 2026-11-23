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
