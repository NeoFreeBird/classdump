//
#ifndef GADMediationServerConfiguration_h
#define GADMediationServerConfiguration_h
@import Foundation;

@class NSArray, NSMutableArray, NSObject;

@interface GADMediationServerConfiguration : NSObject

@property (readonly, nonatomic) NSArray *credentials;

/* instance methods */
- (id)init;
- (id)initWithDictionary:(id)dictionary;

@end

#endif /* GADMediationServerConfiguration_h */
