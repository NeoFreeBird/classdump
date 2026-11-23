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
