//
#ifndef TFSISOCountryList_h
#define TFSISOCountryList_h
@import Foundation;

@class NSObject;

@interface TFSISOCountryList : NSObject // (Swift)

/* class methods */
+ (id)allCountries;
+ (id)allCountriesWithPrioritizedCountryCodes:(id)codes;
+ (id)flagForCountryCode:(id)code;

/* instance methods */
- (id)init;

@end

#endif /* TFSISOCountryList_h */
