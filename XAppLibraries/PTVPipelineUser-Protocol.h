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
