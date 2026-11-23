//
#ifndef TCRSmartTagInfoResult_h
#define TCRSmartTagInfoResult_h
@import Foundation;

@class NSObject, NSString;

@interface TCRSmartTagInfoResult : NSObject // (Swift)

@property (nonatomic, readonly) _Bool active;
@property (nonatomic, readonly) NSString *themeOverrideRawValue;

/* instance methods */
- (id)initWithActive:(_Bool)active themeOverrideRawValue:(id)value;
- (id)init;

@end

#endif /* TCRSmartTagInfoResult_h */
