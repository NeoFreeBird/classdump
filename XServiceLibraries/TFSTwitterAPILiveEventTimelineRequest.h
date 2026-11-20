//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
