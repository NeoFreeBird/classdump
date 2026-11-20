//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterStatusTextRangeSet_h
#define TFNTwitterStatusTextRangeSet_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"

@class NSObject;

@interface TFNTwitterStatusTextRangeSet : NSObject <NSCoding, NSCopying, NSMutableCopying>

@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } displayTextRange;

/* instance methods */
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)initWithJSONDictionary:(id)jsondictionary;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)equal;
- (_Bool)isEqualToStatusTextSet:(id)set;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (id)_copyWithZone:(struct _NSZone *)zone usingClass:(Class)_class;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_initializeRangeWithJSONDictionary:(id)jsondictionary forKey:(id)key;

@end

#endif /* TFNTwitterStatusTextRangeSet_h */
