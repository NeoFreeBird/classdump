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
