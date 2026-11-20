//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1DynamicVideoAdViewModel_h
#define T1DynamicVideoAdViewModel_h
@import Foundation;

@class NSObject, NSString;

@interface T1DynamicVideoAdViewModel : NSObject

@property (nonatomic) double countdownValue;
@property (readonly, nonatomic) NSString *advertiserName;
@property (readonly, nonatomic) unsigned long long pillViewAdType;
@property (readonly, nonatomic) long long numberOfLines;

/* instance methods */
- (id)initWithAdContext:(id)context;
- (id)getDisplayTextFromAutoplayAdCountdownValue:(double)value;
- (id)getDisplayTextWithAdvertiserNameFromAutoplayAdCountdownValue:(double)value;
- (id)getDisplayTextForAdWithPIPFromAutoplayAdCountdownValue:(double)value;

@end

#endif /* T1DynamicVideoAdViewModel_h */
