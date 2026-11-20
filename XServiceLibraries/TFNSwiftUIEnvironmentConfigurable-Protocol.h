//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNSwiftUIEnvironmentConfigurable_Protocol_h
#define TFNSwiftUIEnvironmentConfigurable_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNSwiftUIEnvironmentConfigurable <NSObject>

@required

/* required instance methods */
- (void)applySwiftUIEnvironment:(id)uienvironment;
- (void)applySwiftUIEnvironment:(id)uienvironment;

@optional

@end

#endif /* TFNSwiftUIEnvironmentConfigurable_Protocol_h */
