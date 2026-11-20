//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
