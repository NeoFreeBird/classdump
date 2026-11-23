//
#ifndef _TtC13ChatTransport16ChatMediaRequest_h
#define _TtC13ChatTransport16ChatMediaRequest_h
@import Foundation;

@class TFSTwitterAPIEndpointRequest;

@interface ChatTransport.ChatMediaRequest : TFSTwitterAPIEndpointRequest // (Swift)

/* class methods */
+ (unsigned long long)baseURLType;
+ (unsigned long long)responseHydrationFlags;

/* instance methods */
- (id)initWithEndpointPath:(id)path parameters:(id)parameters multipartFormData:(id)data bodyData:(id)data bodyFilePath:(id)path headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder emptyResponseDataExpected:(_Bool)expected;

@end

#endif /* _TtC13ChatTransport16ChatMediaRequest_h */
