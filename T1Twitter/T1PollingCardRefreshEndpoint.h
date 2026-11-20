//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1PollingCardRefreshEndpoint_h
#define T1PollingCardRefreshEndpoint_h
@import Foundation;

@class NSDictionary, NSObject, NSString;

@interface T1PollingCardRefreshEndpoint : NSObject

@property (copy, nonatomic) NSString *cardURI;
@property (copy, nonatomic) NSString *cardName;
@property (readonly, copy, nonatomic) NSString *capiURL;
@property (readonly, copy, nonatomic) NSDictionary *requestParameters;

/* instance methods */
- (id)initWithCardContext:(id)context;

@end

#endif /* T1PollingCardRefreshEndpoint_h */
