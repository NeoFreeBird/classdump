//
#ifndef TFNTwitterSimpleScribeDelegate_h
#define TFNTwitterSimpleScribeDelegate_h
@import Foundation;

#include "TFSTwitterAuthenticatedScribeDelegate-Protocol.h"

@class NSObject, NSString;

@interface TFNTwitterSimpleScribeDelegate : NSObject <TFSTwitterAuthenticatedScribeDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)logEvent:(id)event parameters:(id)parameters;
- (void)logPerformanceEvent:(id)event duration:(double)duration;

@end

#endif /* TFNTwitterSimpleScribeDelegate_h */
