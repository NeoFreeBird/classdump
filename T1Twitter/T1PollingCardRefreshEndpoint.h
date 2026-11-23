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
