//
#ifndef GADMediationCredentials_h
#define GADMediationCredentials_h
@import Foundation;

@class NSDictionary, NSObject;

@interface GADMediationCredentials : NSObject

@property (readonly, nonatomic) NSDictionary *settings;
@property (readonly, nonatomic) long long format;

/* instance methods */
- (id)initWithAdFormat:(long long)format credentials:(id)credentials;
- (id)initWithDictionary:(id)dictionary;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;

@end

#endif /* GADMediationCredentials_h */
