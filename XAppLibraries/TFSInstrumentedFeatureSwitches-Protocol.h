//
#ifndef TFSInstrumentedFeatureSwitches_Protocol_h
#define TFSInstrumentedFeatureSwitches_Protocol_h
@import Foundation;

#include "TFSFeatureSwitches-Protocol.h"

@protocol TFSInstrumentedFeatureSwitches <TFSFeatureSwitches>

@required

/* required instance methods */
- (void)setFeatureSwitchValue:(id)value forKey:(id)key;
- (void)resetFeatureSwitchValueForKey:(id)key;

@optional

@end

#endif /* TFSInstrumentedFeatureSwitches_Protocol_h */
