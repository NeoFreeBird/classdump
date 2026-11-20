//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAPILiveEventTimelineCommand_h
#define TFSTwitterAPILiveEventTimelineCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithExternalResponseProcessor.h"

@class NSString;

@interface TFSTwitterAPILiveEventTimelineCommand : TFSTwitterAPICommandWithExternalResponseProcessor

@property (copy, nonatomic) NSString *eventID;
@property (copy, nonatomic) NSString *sourceID;

/* instance methods */
- (id)initWithAccountID:(id)id eventID:(id)id sourceID:(id)id context:(id)context responseModelBuilder:(id)builder responseProcessorBlock:(id /* block */)block completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPILiveEventTimelineCommand_h */
