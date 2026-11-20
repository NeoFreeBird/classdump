//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC13ChatTransport32ChatLegacyMediaUploadPostRequest_h
#define _TtC13ChatTransport32ChatLegacyMediaUploadPostRequest_h
@import Foundation;

@class TFSTwitterAPIEndpointRequest;

@interface ChatTransport.ChatLegacyMediaUploadPostRequest : TFSTwitterAPIEndpointRequest // (Swift)

/* class methods */
+ (long long)HTTPMethodValue;
+ (_Bool)isMultipartFormPostRequest;
+ (unsigned long long)baseURLType;
+ (unsigned long long)responseHydrationFlags;

/* instance methods */
- (id)initWithEndpointPath:(id)path parameters:(id)parameters multipartFormData:(id)data bodyData:(id)data bodyFilePath:(id)path headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder emptyResponseDataExpected:(_Bool)expected;

@end

#endif /* _TtC13ChatTransport32ChatLegacyMediaUploadPostRequest_h */
