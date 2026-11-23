//
#ifndef TFSTwitterAuthenticatedScribeDelegate_Protocol_h
#define TFSTwitterAuthenticatedScribeDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSTwitterAuthenticatedScribeDelegate <NSObject>

@required

/* required instance methods */
- (void)logEvent:(id)event parameters:(id)parameters;
- (void)logPerformanceEvent:(id)event duration:(double)duration;

@optional

@end

#endif /* TFSTwitterAuthenticatedScribeDelegate_Protocol_h */
