//
#ifndef PTVLocalPipelineOwner_Protocol_h
#define PTVLocalPipelineOwner_Protocol_h
@import Foundation;

#include "PTVPipelineUser-Protocol.h"
#include "PTVPublishingPipeline.h"

@protocol PTVLocalPipelineOwner <PTVPipelineUser>

@required

@property (readonly) PTVPublishingPipeline *localPipeline;

@optional

@end

#endif /* PTVLocalPipelineOwner_Protocol_h */
