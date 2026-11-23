//
#ifndef TFSTwitterLoginVerificationTOTPKey_h
#define TFSTwitterLoginVerificationTOTPKey_h
@import Foundation;

@class NSObject, NSString;

@interface TFSTwitterLoginVerificationTOTPKey : NSObject

@property (readonly, nonatomic) NSString *key;

/* class methods */
+ (id)loginVerificationTOTPKeyWithJSONData:(id)jsondata error:(id *)error;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary;

@end

#endif /* TFSTwitterLoginVerificationTOTPKey_h */
