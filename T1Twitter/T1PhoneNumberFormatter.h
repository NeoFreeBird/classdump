//
#ifndef T1PhoneNumberFormatter_h
#define T1PhoneNumberFormatter_h
@import Foundation;

@class TFSPhoneNumberFormatter;

@interface T1PhoneNumberFormatter : TFSPhoneNumberFormatter

/* class methods */
+ (id)currentCountryCode;
+ (id)phoneNumberFormatterWithCurrentCountryCode;

@end

#endif /* T1PhoneNumberFormatter_h */
