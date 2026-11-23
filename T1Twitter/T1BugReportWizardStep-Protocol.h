//
#ifndef T1BugReportWizardStep_Protocol_h
#define T1BugReportWizardStep_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1BugReportWizardStep <NSObject>

@required

/* required instance methods */
- (void)updateBugReport:(id)report;
- (_Bool)hasNextStep;
- (id)nextStep;

@optional

@end

#endif /* T1BugReportWizardStep_Protocol_h */
