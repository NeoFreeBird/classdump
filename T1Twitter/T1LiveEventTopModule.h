//
#ifndef T1LiveEventTopModule_h
#define T1LiveEventTopModule_h
@import Foundation;

@class NSObject;

@interface T1LiveEventTopModule : NSObject

@property (readonly, nonatomic) long long type;

/* class methods */
+ (id)topModuleFromMetadata:(id)metadata;

/* instance methods */
- (id)initWithType:(long long)type;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;
- (_Bool)isEqualToTopModule:(id)module;

@end

#endif /* T1LiveEventTopModule_h */
