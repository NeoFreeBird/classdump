//
#ifndef _TtC15TwitterSearchV232SearchSafetySettingsWriteRequest_h
#define _TtC15TwitterSearchV232SearchSafetySettingsWriteRequest_h
@import Foundation;

@class TFSTwitterAPIEndpointRequest;

@interface TwitterSearchV2.SearchSafetySettingsWriteRequest : TFSTwitterAPIEndpointRequest // (Swift)

/* class methods */
+ (long long)HTTPMethodValue;
+ (unsigned long long)responseHydrationFlags;

/* instance methods */
- (id)initWithEndpointPath:(id)path parameters:(id)parameters multipartFormData:(id)data bodyData:(id)data bodyFilePath:(id)path headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder emptyResponseDataExpected:(_Bool)expected;

@end

#endif /* _TtC15TwitterSearchV232SearchSafetySettingsWriteRequest_h */
