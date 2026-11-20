//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterScribeGlobalParameterProvider_Protocol_h
#define TFNTwitterScribeGlobalParameterProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNTwitterScribeGlobalParameterProvider <NSObject>

@required

/* required instance methods */
- (id)updateScribeParameters:(id)parameters;

@optional

@end

#endif /* TFNTwitterScribeGlobalParameterProvider_Protocol_h */
