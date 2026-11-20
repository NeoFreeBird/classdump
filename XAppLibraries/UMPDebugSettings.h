//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UMPDebugSettings_h
#define UMPDebugSettings_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSArray, NSObject;

@interface UMPDebugSettings : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *testDeviceIdentifiers;
@property (nonatomic) long long geography;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* UMPDebugSettings_h */
