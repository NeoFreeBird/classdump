//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterSticker_h
#define TFSTwitterSticker_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "TFSTwitterStickerImageSet.h"

@class NSDate, NSObject, NSString, UIColor;

@interface TFSTwitterSticker : NSObject <NSCoding, NSCopying>

@property (retain, nonatomic) UIColor *dominantColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) NSString *stickerID;
@property (readonly, nonatomic) unsigned long long stickerType;
@property (readonly, nonatomic) NSString *annotationID;
@property (readonly, nonatomic) NSString *stickerSetAnnotationID;
@property (readonly, nonatomic) NSString *groupAnnotationID;
@property (readonly, nonatomic) TFSTwitterStickerImageSet *imageSource;
@property (readonly, nonatomic) double aspectRatio;
@property (readonly, nonatomic) NSString *authorID;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *displayDescription;
@property (readonly, nonatomic) NSDate *startTime;
@property (readonly, nonatomic) NSDate *endTime;
@property (readonly, nonatomic) _Bool availableForCreation;
@property (readonly, nonatomic) NSString *variantName;

/* class methods */
+ (id)stickerWithJSONDictionary:(id)jsondictionary error:(out id *)error;
+ (unsigned long long)_stickerTypeForString:(id)string;

/* instance methods */
- (id)initWithStickerID:(id)id stickerType:(unsigned long long)type annotationID:(id)id groupAnnotationID:(id)id stickerSetAnnotationID:(id)id imageSource:(id)source aspectRatio:(double)ratio authorID:(id)id displayName:(id)name displayDescription:(id)description startTime:(id)time endTime:(id)time variantName:(id)name;
- (id)init;
- (_Bool)isAvailableForCreation;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })initialTransformForImageAspectRatio:(double)ratio;

@end

#endif /* TFSTwitterSticker_h */
