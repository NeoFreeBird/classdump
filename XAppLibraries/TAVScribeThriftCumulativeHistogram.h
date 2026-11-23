//
#ifndef TAVScribeThriftCumulativeHistogram_h
#define TAVScribeThriftCumulativeHistogram_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSDictionary, NSObject;

@interface TAVScribeThriftCumulativeHistogram : NSObject <NSCopying>

@property (copy, nonatomic) NSDictionary *histogram;

/* instance methods */
- (id)initWithHistogram:(id)histogram;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)marshallerDictionary;

@end

#endif /* TAVScribeThriftCumulativeHistogram_h */
