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
