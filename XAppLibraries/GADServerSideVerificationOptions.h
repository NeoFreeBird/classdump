//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADServerSideVerificationOptions_h
#define GADServerSideVerificationOptions_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSObject, NSString;

@interface GADServerSideVerificationOptions : NSObject <NSCopying>

@property (copy, nonatomic) NSString *userIdentifier;
@property (copy, nonatomic) NSString *customRewardString;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* GADServerSideVerificationOptions_h */
