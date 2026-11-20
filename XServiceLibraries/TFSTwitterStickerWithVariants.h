//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterStickerWithVariants_h
#define TFSTwitterStickerWithVariants_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "TFSTwitterSticker.h"

@class NSArray, NSObject;

@interface TFSTwitterStickerWithVariants : NSObject <NSCoding, NSCopying>

@property (readonly, nonatomic) TFSTwitterSticker *sticker;
@property (readonly, nonatomic) NSArray *variants;

/* class methods */
+ (id)stickersWithVariantsWithJSONArray:(id)jsonarray error:(out id *)error;

/* instance methods */
- (id)initWithSticker:(id)sticker variants:(id)variants;
- (id)init;
- (id)variantNamed:(id)named;
- (id)variantWithID:(id)id;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;

@end

#endif /* TFSTwitterStickerWithVariants_h */
