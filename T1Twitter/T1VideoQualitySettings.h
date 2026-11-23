//
#ifndef T1VideoQualitySettings_h
#define T1VideoQualitySettings_h
@import Foundation;

@class NSObject, NSUserDefaults;

@interface T1VideoQualitySettings : NSObject

@property (retain, nonatomic) NSUserDefaults *userDefaults;
@property (nonatomic) long long currentValue;
@property (readonly, nonatomic) _Bool hasCellularInterface;

/* instance methods */
- (id)init;
- (id)initWithUserDefaults:(id)defaults;

@end

#endif /* T1VideoQualitySettings_h */
