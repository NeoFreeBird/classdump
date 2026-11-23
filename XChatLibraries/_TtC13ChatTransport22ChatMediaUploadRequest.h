//
#ifndef _TtC13ChatTransport22ChatMediaUploadRequest_h
#define _TtC13ChatTransport22ChatMediaUploadRequest_h
@import Foundation;

#include "_TtC13ChatTransport16ChatMediaRequest.h"

@interface ChatTransport.ChatMediaUploadRequest : ChatTransport.ChatMediaRequest // (Swift)

/* class methods */
+ (long long)HTTPMethodValue;

/* instance methods */
- (id)initWithEndpointPath:(id)path parameters:(id)parameters multipartFormData:(id)data bodyData:(id)data bodyFilePath:(id)path headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder emptyResponseDataExpected:(_Bool)expected;

@end

#endif /* _TtC13ChatTransport22ChatMediaUploadRequest_h */
