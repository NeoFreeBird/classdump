//
#ifndef TFSTwitterAPILiveEventTimelineRequest_h
#define TFSTwitterAPILiveEventTimelineRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterAPILiveEventTimelineRequest : TFSTwitterAPIEndpointRequest

/* instance methods */
- (id)initWithEndpointPath:(id)path parameters:(id)parameters multipartFormData:(id)data bodyData:(id)data bodyFilePath:(id)path headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder emptyResponseDataExpected:(_Bool)expected;
- (id)initWithEventID:(id)id sourceID:(id)id utcOffset:(id)offset context:(id)context responseModelBuilder:(id)builder;

@end

#endif /* TFSTwitterAPILiveEventTimelineRequest_h */
