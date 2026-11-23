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
