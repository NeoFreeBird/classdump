//
#ifndef TIPDependencyOperation_Protocol_h
#define TIPDependencyOperation_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TIPDependencyOperation <NSObject>

@required

/* required instance methods */
- (void)makeDependencyOfTargetOperation:(id)operation;
- (void)waitUntilFinished;
- (_Bool)isFinished;
- (_Bool)isExecuting;

@optional

@end

#endif /* TIPDependencyOperation_Protocol_h */
