//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSInternationalCallingCountryCodes_h
#define TFSInternationalCallingCountryCodes_h
@import Foundation;

@class NSObject;

@interface TFSInternationalCallingCountryCodes : NSObject // (Swift)

/* class methods */
+ (id)callingCountryCodes;
+ (id)alphabeticalCountryListWithHighlightedCountryCode:(id)code;

/* instance methods */
- (id)init;

@end

#endif /* TFSInternationalCallingCountryCodes_h */
