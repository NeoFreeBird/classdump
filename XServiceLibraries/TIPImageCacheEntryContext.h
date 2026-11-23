//
#ifndef TIPImageCacheEntryContext_h
#define TIPImageCacheEntryContext_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSDate, NSObject, NSURL;

@interface TIPImageCacheEntryContext : NSObject <NSCopying> {
    /* instance variables */
    _Bool _updateExpiryOnAccess;
    _Bool _treatAsPlaceholder;
    _Bool _animated;
    double _TTL;
    NSURL *_URL;
    NSDate *_lastAccess;
    struct CGSize { double width; double height; } _dimensions;
}

/* instance methods */
- (id)initWithCacheEntryContext:(id)context;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TIPImageCacheEntryContext_h */
