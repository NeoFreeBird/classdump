//
#ifndef TAVSeekCursor_h
#define TAVSeekCursor_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSObject;

@interface TAVSeekCursor : NSObject <NSCopying, NSCoding>

@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } time;

/* instance methods */
- (id)init;
- (id)initWithTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
- (id)description;
- (_Bool)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;

@end

#endif /* TAVSeekCursor_h */
