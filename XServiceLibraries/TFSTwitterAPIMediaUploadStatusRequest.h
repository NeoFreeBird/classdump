//
#ifndef TFSTwitterAPIMediaUploadStatusRequest_h
#define TFSTwitterAPIMediaUploadStatusRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterAPIMediaUploadStatusRequest : TFSTwitterAPIEndpointRequest

/* class methods */
+ (unsigned long long)baseURLType;
+ (unsigned long long)responseHydrationFlags;

/* instance methods */
- (id)initSegmentedMediaUploadSessionStatusWithMediaID:(id)id context:(id)context responseModelBuilder:(id)builder;

@end

#endif /* TFSTwitterAPIMediaUploadStatusRequest_h */
