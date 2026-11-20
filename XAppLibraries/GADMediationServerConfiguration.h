//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
