//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterFoundMediaItem_h
#define TFSTwitterFoundMediaItem_h
@import Foundation;

#include "TFSTwitterFoundMediaImage.h"
#include "TFSTwitterFoundMediaObject.h"
#include "TFSTwitterFoundMediaProvider.h"

@class NSDictionary, NSString;

@interface TFSTwitterFoundMediaItem : TFSTwitterFoundMediaObject

@property (readonly, copy, nonatomic) NSDictionary *originDictionary;
@property (readonly, copy, nonatomic) NSString *URLString;
@property (readonly, nonatomic) TFSTwitterFoundMediaProvider *provider;
@property (readonly, nonatomic) TFSTwitterFoundMediaImage *originalImage;
@property (readonly, nonatomic) TFSTwitterFoundMediaImage *previewImage;

/* instance methods */
- (id)initWithIdentifier:(id)identifier primaryImage:(id)image altText:(id)text parentGroup:(id)group;
- (id)initWithIdentifier:(id)identifier originDictionary:(id)dictionary URLString:(id)urlstring provider:(id)provider originalImage:(id)image previewImage:(id)image primaryImage:(id)image altText:(id)text parentGroup:(id)group;
- (id)initWithJSONDictionary:(id)jsondictionary;
- (id)initWithJSONDictionary:(id)jsondictionary parentGroup:(id)group;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (_Bool)isEqual:(id)equal;
- (_Bool)isEqualToFoundMediaItem:(id)item;
- (unsigned long long)hash;

@end

#endif /* TFSTwitterFoundMediaItem_h */
