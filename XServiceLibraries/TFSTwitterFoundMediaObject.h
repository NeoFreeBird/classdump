//
#ifndef TFSTwitterFoundMediaObject_h
#define TFSTwitterFoundMediaObject_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "TFSTwitterFoundMediaGroup.h"
#include "TFSTwitterFoundMediaImage.h"

@class NSObject, NSString;

@interface TFSTwitterFoundMediaObject : NSObject <NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) TFSTwitterFoundMediaImage *primaryImage;
@property (readonly, nonatomic) TFSTwitterFoundMediaGroup *parentGroup;
@property (copy, nonatomic) NSString *altText;

/* instance methods */
- (id)init;
- (id)initWithIdentifier:(id)identifier primaryImage:(id)image altText:(id)text parentGroup:(id)group;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;

@end

#endif /* TFSTwitterFoundMediaObject_h */
