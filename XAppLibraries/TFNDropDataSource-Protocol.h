//
#ifndef TFNDropDataSource_Protocol_h
#define TFNDropDataSource_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol TFNDropDataSource <NSObject>

@required

@property (readonly, nonatomic) unsigned long long maxNumberOfMediaItems;
@property (readonly, copy, nonatomic) NSArray *attachments;
@property (readonly, nonatomic) _Bool hasAttachments;
@property (readonly, copy, nonatomic) NSString *localizedDropIndicationGIFs;
@property (readonly, copy, nonatomic) NSString *localizedDropIndicationImages;
@property (readonly, copy, nonatomic) NSString *localizedDropIndicationStatus;
@property (readonly, copy, nonatomic) NSString *localizedDropIndicationText;
@property (readonly, copy, nonatomic) NSString *localizedDropIndicationURL;
@property (readonly, copy, nonatomic) NSString *localizedDropIndicationVideos;
@property (readonly, copy, nonatomic) NSString *localizedDropIndicationMixedMedia;
@property (readonly, copy, nonatomic) NSString *localizedDropIndicationTooManyGIFs;
@property (readonly, copy, nonatomic) NSString *localizedDropIndicationTooManyImages;
@property (readonly, copy, nonatomic) NSString *localizedDropIndicationTooManyVideos;

/* required instance methods */
- (_Bool)canDropAnimatedGIFsCount:(unsigned long long)count;
- (_Bool)canDropImagesCount:(unsigned long long)count;
- (_Bool)canDropVideosCount:(unsigned long long)count;

@optional

@property (readonly, nonatomic) _Bool hasAnimatedImageAttachments;
@property (readonly, nonatomic) _Bool hasImageOrGIFAttachments;
@property (readonly, nonatomic) _Bool hasPoll;
@property (readonly, nonatomic) _Bool hasVideoAttachments;

@end

#endif /* TFNDropDataSource_Protocol_h */
