//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
