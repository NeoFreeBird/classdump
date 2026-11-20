//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNLegacyFormFieldValidity_h
#define TFNLegacyFormFieldValidity_h
@import Foundation;

@class NSObject, NSString;

@interface TFNLegacyFormFieldValidity : NSObject

@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) NSString *errorMessage;

/* class methods */
+ (id)validityWithState:(unsigned long long)state;
+ (id)validityWithState:(unsigned long long)state errorMessage:(id)message;
+ (id)validityWithErrorMessage:(id)message;

/* instance methods */
- (_Bool)isEqual:(id)equal;

@end

#endif /* TFNLegacyFormFieldValidity_h */
