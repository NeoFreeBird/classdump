//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef StickerCatalog_h
#define StickerCatalog_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "StickerCategory.h"

@class NSArray, NSObject;

@interface StickerCatalog : NSObject <NSCopying, NSCoding>

@property (readonly, nonatomic) StickerCategory *featured;
@property (readonly, nonatomic) StickerCategory *recents;
@property (readonly, nonatomic) NSArray *categories;
@property (readonly, nonatomic) NSArray *allAvailableCategories;

/* instance methods */
- (id)init;
- (id)initWithFeatured:(id)featured recents:(id)recents categories:(id)categories;
- (id)stickerCatalogByReplacingRecents:(id)recents shouldFilterForValidRecents:(_Bool)recents;
- (id)stickerCatalogWithEmptyFeaturedSection;
- (id)_ttm_recentStickersFromArray:(id)array remainingInCategories:(id)categories featured:(id)featured;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;

@end

#endif /* StickerCatalog_h */
