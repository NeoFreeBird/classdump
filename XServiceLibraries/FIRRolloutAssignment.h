//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef FIRRolloutAssignment_h
#define FIRRolloutAssignment_h
@import Foundation;

@class HasMalware, NSObject, NSString;

@interface FIRRolloutAssignment : NSObject // (Swift)

@property (nonatomic, copy) NSString *rolloutId;
@property (nonatomic, copy) NSString *variantId;
@property (nonatomic) long long templateVersion;
@property (nonatomic, copy) NSString *parameterKey;
@property (nonatomic, copy) NSString *parameterValue;

/* instance methods */
- (id)initWithRolloutId:(id)id variantId:(id)id templateVersion:(long long)version parameterKey:(id)key parameterValue:(id)value;
- (id)init;

@end

#endif /* FIRRolloutAssignment_h */
