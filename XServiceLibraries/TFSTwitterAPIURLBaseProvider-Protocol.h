//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAPIURLBaseProvider_Protocol_h
#define TFSTwitterAPIURLBaseProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSTwitterAPIURLBaseProvider <NSObject>

@required

/* required instance methods */
- (id)baseURLStringForBaseURLType:(unsigned long long)urltype endpointPath:(id)path;

@optional

@end

#endif /* TFSTwitterAPIURLBaseProvider_Protocol_h */
