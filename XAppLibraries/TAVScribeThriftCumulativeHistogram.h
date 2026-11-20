//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
