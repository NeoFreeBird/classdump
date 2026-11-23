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
