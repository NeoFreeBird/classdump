//
#ifndef TFSPhoneNumberFormatter_h
#define TFSPhoneNumberFormatter_h
@import Foundation;

@class NSFormatter, NSString;

@interface TFSPhoneNumberFormatter : NSFormatter

@property (readonly, copy, nonatomic) NSString *countryCode;

/* class methods */
+ (id)countryToCallingCodeMapping;
+ (id)phoneNumberFormatterWithCountryCode:(id)code;
+ (id)_cleanAndFormatNumber:(id)number countryCode:(id)code;
+ (id)_formatNumber:(id)number countryCode:(id)code;
+ (_Bool)_validateNumber:(id)number countryCode:(id)code;
+ (id)_cleanedPhoneNumber:(id)number;
+ (id)formatForDisplay:(id)display normalized:(_Bool)normalized countryCode:(id)code;

/* instance methods */
- (id)initWithCountryCode:(id)code;
- (id)formatForDisplay:(id)display normalized:(_Bool)normalized;
- (id)stringForObjectValue:(id)value;
- (id)stringForObjectValue:(id)value countryCode:(id)code;
- (_Bool)isPartialStringValid:(id)valid newEditingString:(id *)string errorDescription:(id *)description;
- (_Bool)getObjectValue:(out id *)value forString:(id)string errorDescription:(out id *)description;

@end

#endif /* TFSPhoneNumberFormatter_h */
