//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADPAIDIdentifier_h
#define GADPAIDIdentifier_h
@import Foundation;

@class NSDate, NSObject, NSString;

@interface GADPAIDIdentifier : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSDate *timestamp;

/* instance methods */
- (id)init;
- (id)initWithIdentifier:(id)identifier timestamp:(id)timestamp;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;

@end

#endif /* GADPAIDIdentifier_h */
