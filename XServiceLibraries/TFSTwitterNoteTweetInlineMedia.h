//
#ifndef TFSTwitterNoteTweetInlineMedia_h
#define TFSTwitterNoteTweetInlineMedia_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "TFSTwitterTextRange-Protocol.h"

@class NSObject, NSString;

@interface TFSTwitterNoteTweetInlineMedia : NSObject <NSCopying, TFSTwitterTextRange> // (Swift)

@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } range;
@property (nonatomic, readonly) NSString *mediaId;
@property (nonatomic, readonly) long long hash;

/* instance methods */
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range mediaId:(id)id;
- (id)initWithIndex:(long long)index mediaId:(id)id;
- (_Bool)isEqual:(id)equal;
- (id)copyWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)copyWithZone:(void *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWith:(id)with;
- (id)init;

@end

#endif /* TFSTwitterNoteTweetInlineMedia_h */
