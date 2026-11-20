//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterCompositionPartialUser_h
#define TFNTwitterCompositionPartialUser_h
@import Foundation;

#include "NSCoding-Protocol.h"

@class NSObject, TFSTwitterUserReference;

@interface TFNTwitterCompositionPartialUser : NSObject <NSCoding>

@property (readonly, nonatomic) TFSTwitterUserReference *userReference;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;

@end

#endif /* TFNTwitterCompositionPartialUser_h */
