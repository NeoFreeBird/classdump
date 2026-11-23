//
#ifndef T1LiveEventCardRefreshEndpoint_h
#define T1LiveEventCardRefreshEndpoint_h
@import Foundation;

@class NSDictionary, NSObject, NSString;

@interface T1LiveEventCardRefreshEndpoint : NSObject

@property (copy, nonatomic) NSString *cardURI;
@property (copy, nonatomic) NSString *cardName;
@property (copy, nonatomic) NSString *liveEventID;
@property (readonly, copy, nonatomic) NSString *capiURL;
@property (readonly, copy, nonatomic) NSDictionary *requestParameters;

/* instance methods */
- (id)init;
- (id)initWithCardContext:(id)context;

@end

#endif /* T1LiveEventCardRefreshEndpoint_h */
