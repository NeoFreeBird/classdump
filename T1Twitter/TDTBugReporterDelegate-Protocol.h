//
#ifndef TDTBugReporterDelegate_Protocol_h
#define TDTBugReporterDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TDTBugReporterDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (id)contextForBugReporter:(id)reporter;
- (void)bugReporter:(id)reporter didTriggerBugReport:(id)report;
- (void)bugReporter:(id)reporter sendBugReport:(id)report didCompleteWithResult:(long long)result;

@end

#endif /* TDTBugReporterDelegate_Protocol_h */
