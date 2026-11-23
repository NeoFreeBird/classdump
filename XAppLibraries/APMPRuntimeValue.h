//
#ifndef APMPRuntimeValue_h
#define APMPRuntimeValue_h
@import Foundation;

#include "APMPMarkable-Protocol.h"
#include "APMPSweepable-Protocol.h"

@class NSObject;

@interface APMPRuntimeValue : NSObject <APMPMarkable, APMPSweepable>

/* instance methods */
- (id)stringValueOrError:(id *)error;
- (double)doubleValueOrError:(id *)error;
- (_Bool)booleanValueOrError:(id *)error;
- (id)applyWithName:(id)name arguments:(id)arguments scope:(id)scope error:(id *)error;
- (_Bool)isEqualToRuntimeValue:(id)value;
- (void)mark;
- (void)sweep;

@end

#endif /* APMPRuntimeValue_h */
