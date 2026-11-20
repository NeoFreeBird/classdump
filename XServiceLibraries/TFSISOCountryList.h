//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
