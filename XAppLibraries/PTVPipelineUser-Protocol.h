//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVPipelineUser_Protocol_h
#define PTVPipelineUser_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "PTVPipelineOwner-Protocol.h"
#include "PTVPublishingPipelineDelegate-Protocol.h"

@class NSObject;

@protocol PTVPipelineUser <NSObject, PTVPublishingPipelineDelegate>

@required

@property (retain) NSObject<PTVPipelineOwner> *pipelineOwner;

@optional

/* optional instance methods */
- (void)sourcePipelineBroadcastingStateDidChange;

@end

#endif /* PTVPipelineUser_Protocol_h */
