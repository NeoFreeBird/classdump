//
#ifndef TFSTwitterAPIMediaUploadRequest_h
#define TFSTwitterAPIMediaUploadRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterAPIMediaUploadRequest : TFSTwitterAPIEndpointRequest {
    /* instance variables */
    unsigned long long _requestMode;
}

/* class methods */
+ (long long)HTTPMethodValue;
+ (unsigned long long)baseURLType;
+ (_Bool)isMultipartFormPostRequest;
+ (unsigned long long)responseHydrationFlags;

/* instance methods */
- (id)initWithEndpointPath:(id)path parameters:(id)parameters multipartFormData:(id)data bodyData:(id)data bodyFilePath:(id)path headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder emptyResponseDataExpected:(_Bool)expected;
- (id)initWithMultipartFormData:(id)data context:(id)context responseModelBuilder:(id)builder emptyResponseDataExpected:(_Bool)expected;
- (id)initSegmentedMediaUploadSessionWithMediaType:(id)type totalBytes:(id)bytes sourceURLString:(id)urlstring mediaCategory:(id)category salientPoint:(struct CGPoint { double x0; double x1; })point isVoice:(_Bool)voice canUploadFullHDVideo:(_Bool)hdvideo canUpload4kVideo:(_Bool)video durationInMilliseconds:(id)milliseconds context:(id)context responseModelBuilder:(id)builder;
- (id)initSegmentedMediaUploadSessionAppendWithMediaID:(id)id segmentData:(id)data segmentIndex:(id)index MD5Digest:(id)digest context:(id)context responseModelBuilder:(id)builder;
- (id)initSegmentedMediaUploadSessionFinalizeWithMediaID:(id)id originalMediaMD5:(id)md5 uploadTTL:(id)ttl allowAsync:(_Bool)async context:(id)context responseModelBuilder:(id)builder totalBytes:(id)bytes;
- (id)initMediaUploadWithData:(id)data uploadTTL:(id)ttl context:(id)context responseModelBuilder:(id)builder;

@end

#endif /* TFSTwitterAPIMediaUploadRequest_h */
