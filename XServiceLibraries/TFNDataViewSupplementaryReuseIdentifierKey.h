//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNDataViewSupplementaryReuseIdentifierKey_h
#define TFNDataViewSupplementaryReuseIdentifierKey_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSObject, NSString;

@interface TFNDataViewSupplementaryReuseIdentifierKey : NSObject <NSCopying> {
    /* instance variables */
    NSString *_key;
}

/* instance methods */
- (id)initWithReuseIdentifier:(id)identifier forSupplementaryViewOfKind:(id)kind;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TFNDataViewSupplementaryReuseIdentifierKey_h */
