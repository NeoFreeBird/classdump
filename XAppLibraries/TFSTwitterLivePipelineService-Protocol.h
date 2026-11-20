//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterLivePipelineService_Protocol_h
#define TFSTwitterLivePipelineService_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSTwitterLivePipelineService <NSObject>

@required

/* required instance methods */
- (id)initWithTwitterAPI:(id)api;

@optional

@end

#endif /* TFSTwitterLivePipelineService_Protocol_h */
