//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVFoundationMediaSelectionGroup_h
#define TAVFoundationMediaSelectionGroup_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class AVMediaSelectionOption, NSArray, NSObject;

@interface TAVFoundationMediaSelectionGroup : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *options;
@property (copy, nonatomic) AVMediaSelectionOption *selectedOption;

/* instance methods */
- (id)initWithOptions:(id)options selectedOption:(id)option;
- (id)copyWithZone:(struct _NSZone *)zone;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;

@end

#endif /* TAVFoundationMediaSelectionGroup_h */
