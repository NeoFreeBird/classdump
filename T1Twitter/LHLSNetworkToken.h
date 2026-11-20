//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef LHLSNetworkToken_h
#define LHLSNetworkToken_h
@import Foundation;

#include "LHLSNetworkToken-Protocol.h"

@class NSObject, NSString;

@interface LHLSNetworkToken : NSObject <LHLSNetworkToken>

@property (readonly, nonatomic) int value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithValue:(int)value;
- (_Bool)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* LHLSNetworkToken_h */
