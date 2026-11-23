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
