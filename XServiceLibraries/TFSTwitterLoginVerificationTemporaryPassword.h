//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterLoginVerificationTemporaryPassword_h
#define TFSTwitterLoginVerificationTemporaryPassword_h
@import Foundation;

@class NSObject, NSString;

@interface TFSTwitterLoginVerificationTemporaryPassword : NSObject

@property (readonly, nonatomic) NSString *password;

/* class methods */
+ (id)loginVerificationTemporaryPasswordWithJSONData:(id)jsondata error:(id *)error;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary;

@end

#endif /* TFSTwitterLoginVerificationTemporaryPassword_h */
