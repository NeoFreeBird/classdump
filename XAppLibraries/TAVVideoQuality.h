//
#ifndef TAVVideoQuality_h
#define TAVVideoQuality_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSObject, NSString;

@interface TAVVideoQuality : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *qualityType;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } resolution;

/* instance methods */
- (id)initWithResolution:(struct CGSize { double x0; double x1; })resolution;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;

@end

#endif /* TAVVideoQuality_h */
