//
#ifndef TFSTwitterEditPerspective_h
#define TFSTwitterEditPerspective_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSObject;

@interface TFSTwitterEditPerspective : NSObject <NSSecureCoding, NSCopying> // (Swift)

@property (nonatomic, readonly) _Bool favorited;
@property (nonatomic, readonly) _Bool retweeted;

/* class methods */
+ (_Bool)supportsSecureCoding;

/* instance methods */
- (id)initWithFavorited:(_Bool)favorited retweeted:(_Bool)retweeted;
- (_Bool)isEqual:(id)equal;
- (id)copyWithZone:(void *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)init;

@end

#endif /* TFSTwitterEditPerspective_h */
