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
