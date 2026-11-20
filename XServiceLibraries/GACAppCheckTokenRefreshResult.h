//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GACAppCheckTokenRefreshResult_h
#define GACAppCheckTokenRefreshResult_h
@import Foundation;

@class NSDate, NSObject;

@interface GACAppCheckTokenRefreshResult : NSObject

@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) NSDate *tokenExpirationDate;
@property (readonly, nonatomic) NSDate *tokenReceivedAtDate;

/* instance methods */
- (id)initWithStatus:(long long)status expirationDate:(id)date receivedAtDate:(id)date;
- (id)initWithStatusNever;
- (id)initWithStatusFailure;
- (id)initWithStatusSuccessAndExpirationDate:(id)date receivedAtDate:(id)date;

@end

#endif /* GACAppCheckTokenRefreshResult_h */
