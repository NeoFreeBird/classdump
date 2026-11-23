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
