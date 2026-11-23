//
#ifndef T1QuickFreeTrialWebviewContainer_h
#define T1QuickFreeTrialWebviewContainer_h
@import Foundation;

#include "_TtC14T1TwitterSwift25PreloadedWebviewContainer.h"

@interface T1QuickFreeTrialWebviewContainer : T1TwitterSwift.PreloadedWebviewContainer // (Swift)

/* instance methods */
- (id)initWithAccount:(id)account trialID:(id)id;
- (id)initWithCoder:(id)coder;

@end

#endif /* T1QuickFreeTrialWebviewContainer_h */
