//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef FIRInstallationsAuthTokenResult_h
#define FIRInstallationsAuthTokenResult_h
@import Foundation;

@class NSDate, NSObject, NSString;

@interface FIRInstallationsAuthTokenResult : NSObject

@property (readonly, nonatomic) NSString *authToken;
@property (readonly, nonatomic) NSDate *expirationDate;

/* instance methods */
- (id)initWithToken:(id)token expirationDate:(id)date;

@end

#endif /* FIRInstallationsAuthTokenResult_h */
