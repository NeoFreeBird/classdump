//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAPICommandContextProvider_Protocol_h
#define TFSTwitterAPICommandContextProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSTwitterAPICommandContextProvider <NSObject>

@required

/* required instance methods */
- (id)apiCommandContextWithAPIConfiguration:(id)apiconfiguration scribeIntegration:(id)integration;

@optional

@end

#endif /* TFSTwitterAPICommandContextProvider_Protocol_h */
