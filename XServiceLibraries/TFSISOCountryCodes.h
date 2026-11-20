//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSISOCountryCodes_h
#define TFSISOCountryCodes_h
@import Foundation;

@class NSObject;

@interface TFSISOCountryCodes : NSObject // (Swift)

/* class methods */
+ (id)countryCodes;
+ (id)localizedCountryNames;

/* instance methods */
- (id)init;

@end

#endif /* TFSISOCountryCodes_h */
