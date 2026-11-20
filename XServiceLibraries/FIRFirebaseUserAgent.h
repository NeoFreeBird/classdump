//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef FIRFirebaseUserAgent_h
#define FIRFirebaseUserAgent_h
@import Foundation;

@class NSDictionary, NSMutableDictionary, NSObject, NSString;

@interface FIRFirebaseUserAgent : NSObject

@property (readonly, nonatomic) NSMutableDictionary *valuesByComponent;
@property (readonly, nonatomic) NSDictionary *environmentComponents;
@property (readonly, nonatomic) NSString *firebaseUserAgent;

/* class methods */
+ (id)environmentComponents;

/* instance methods */
- (id)init;
- (void)setValue:(id)value forComponent:(id)component;
- (void)reset;

@end

#endif /* FIRFirebaseUserAgent_h */
