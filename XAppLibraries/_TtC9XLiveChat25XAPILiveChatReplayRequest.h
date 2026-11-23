//
#ifndef _TtC9XLiveChat25XAPILiveChatReplayRequest_h
#define _TtC9XLiveChat25XAPILiveChatReplayRequest_h
@import Foundation;

@class TFSTwitterAPIEndpointRequest;

@interface XLiveChat.XAPILiveChatReplayRequest : TFSTwitterAPIEndpointRequest // (Swift)

/* class methods */
+ (unsigned long long)baseURLType;
+ (id)endpointPath;
+ (unsigned long long)responseHydrationFlags;

/* instance methods */
- (id)initWithEndpointPath:(id)path parameters:(id)parameters multipartFormData:(id)data bodyData:(id)data bodyFilePath:(id)path headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder emptyResponseDataExpected:(_Bool)expected;

@end

#endif /* _TtC9XLiveChat25XAPILiveChatReplayRequest_h */
