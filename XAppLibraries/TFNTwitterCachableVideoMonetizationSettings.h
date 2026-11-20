//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterCachableVideoMonetizationSettings_h
#define TFNTwitterCachableVideoMonetizationSettings_h
@import Foundation;

@class NSDate, NSObject, TFSTwitterVideoMonetizationSettings;

@interface TFNTwitterCachableVideoMonetizationSettings : NSObject

@property (retain, nonatomic) NSDate *expiresAt;
@property (retain, nonatomic) TFSTwitterVideoMonetizationSettings *settings;

/* instance methods */
- (_Bool)shouldRefresh;

@end

#endif /* TFNTwitterCachableVideoMonetizationSettings_h */
