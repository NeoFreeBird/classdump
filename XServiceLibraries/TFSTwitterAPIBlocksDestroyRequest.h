//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAPIBlocksDestroyRequest_h
#define TFSTwitterAPIBlocksDestroyRequest_h
@import Foundation;

#include "TFSTwitterAPIBlocksCreateRequest.h"

@interface TFSTwitterAPIBlocksDestroyRequest : TFSTwitterAPIBlocksCreateRequest

/* class methods */
+ (long long)HTTPMethodValue;
+ (id)endpointPath;

@end

#endif /* TFSTwitterAPIBlocksDestroyRequest_h */
