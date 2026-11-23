//
#ifndef TFSTwitterOneFactorAuthorizationFactor_h
#define TFSTwitterOneFactorAuthorizationFactor_h
@import Foundation;

@class NSObject, NSString;

@interface TFSTwitterOneFactorAuthorizationFactor : NSObject

@property (readonly, nonatomic) unsigned long long factorType;
@property (readonly, copy, nonatomic) NSString *obfuscatedDestination;

/* instance methods */
- (id)initWithFactorType:(unsigned long long)type obfuscatedDestination:(id)destination;
- (id)initWithJSONDictionary:(id)jsondictionary;

@end

#endif /* TFSTwitterOneFactorAuthorizationFactor_h */
