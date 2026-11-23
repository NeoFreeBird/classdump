//
#ifndef TFSTwitterRects_h
#define TFSTwitterRects_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSObject, NSString;

@interface TFSTwitterRects : NSObject <NSCoding, NSCopying> // (Swift)

@property (nonatomic, readonly) NSArray *rects;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

/* instance methods */
- (id)initWithRects:(id)rects;
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(void *)zone;
- (_Bool)isEqual:(id)equal;

@end

#endif /* TFSTwitterRects_h */
