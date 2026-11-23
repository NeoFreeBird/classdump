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
