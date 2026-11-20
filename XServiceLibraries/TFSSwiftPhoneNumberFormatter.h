//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSSwiftPhoneNumberFormatter_h
#define TFSSwiftPhoneNumberFormatter_h
@import Foundation;

@class NSObject;

@interface TFSSwiftPhoneNumberFormatter : NSObject // (Swift)

/* class methods */
+ (id)formatInternationalNumber:(id)number countryCode:(id)code;
+ (_Bool)isValidNumber:(id)number countryCode:(id)code;

/* instance methods */
- (id)init;

@end

#endif /* TFSSwiftPhoneNumberFormatter_h */
