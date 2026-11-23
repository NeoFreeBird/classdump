//
#ifndef T1FoundMediaSavedItem_h
#define T1FoundMediaSavedItem_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSDate, NSObject, TFSTwitterFoundMediaItem;

@interface T1FoundMediaSavedItem : NSObject <NSCopying, NSCoding>

@property (copy, nonatomic) TFSTwitterFoundMediaItem *foundMediaItem;
@property (nonatomic) unsigned long long usedCount;
@property (retain, nonatomic) NSDate *lastUsedTimeStamp;

/* instance methods */
- (id)init;
- (id)initWithFoundMediaItem:(id)item;
- (id)initWithFoundMediaItem:(id)item usedCount:(unsigned long long)count lastUsedTimeStamp:(id)stamp;
- (void)incrementUsedCount;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (_Bool)isEqual:(id)equal;
- (id)description;

@end

#endif /* T1FoundMediaSavedItem_h */
