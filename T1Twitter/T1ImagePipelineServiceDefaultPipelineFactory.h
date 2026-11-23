//
#ifndef T1ImagePipelineServiceDefaultPipelineFactory_h
#define T1ImagePipelineServiceDefaultPipelineFactory_h
@import Foundation;

#include "T1ImagePipelineServicePipelineFactory-Protocol.h"

@class NSObject;

@interface T1ImagePipelineServiceDefaultPipelineFactory : NSObject <T1ImagePipelineServicePipelineFactory>

/* instance methods */
- (id)pipelineForAccountID:(id)id;

@end

#endif /* T1ImagePipelineServiceDefaultPipelineFactory_h */
