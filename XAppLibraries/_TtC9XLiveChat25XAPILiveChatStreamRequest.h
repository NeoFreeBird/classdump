//
#ifndef _TtC9XLiveChat25XAPILiveChatStreamRequest_h
#define _TtC9XLiveChat25XAPILiveChatStreamRequest_h
@import Foundation;

@class TFSTwitterAPIEndpointRequest;

@interface XLiveChat.XAPILiveChatStreamRequest : TFSTwitterAPIEndpointRequest // (Swift)

/* class methods */
+ (unsigned long long)baseURLType;
+ (id)endpointPath;
+ (unsigned long long)responseHydrationFlags;
+ (id)configuration;

/* instance methods */
- (id)initWithEndpointPath:(id)path parameters:(id)parameters multipartFormData:(id)data bodyData:(id)data bodyFilePath:(id)path headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder emptyResponseDataExpected:(_Bool)expected;

@end

#endif /* _TtC9XLiveChat25XAPILiveChatStreamRequest_h */
