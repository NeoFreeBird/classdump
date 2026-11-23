//
#ifndef TFNTextSizingCacheKey_h
#define TFNTextSizingCacheKey_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSNumber, NSObject, NSString, UIFont;

@interface TFNTextSizingCacheKey : NSObject <NSCopying> {
    /* instance variables */
    NSString *_text;
    UIFont *_font;
    NSNumber *_width;
    NSNumber *_lineBreakMode;
    NSNumber *_multiline;
    NSNumber *_truncatedText;
}

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TFNTextSizingCacheKey_h */
