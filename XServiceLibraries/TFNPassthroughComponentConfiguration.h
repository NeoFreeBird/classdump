//
#ifndef TFNPassthroughComponentConfiguration_h
#define TFNPassthroughComponentConfiguration_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSObject;

@interface TFNPassthroughComponentConfiguration : NSObject <NSCopying>

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)copyToObject:(id)object;
- (void)copyFromComponent:(id)component;

@end

#endif /* TFNPassthroughComponentConfiguration_h */
