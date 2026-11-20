//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTMAssetImageStoreRequest_h
#define TTMAssetImageStoreRequest_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "TIPImageStoreRequest-Protocol.h"
#include "TIPImageStoreRequestHydrater-Protocol.h"
#include "TTMAsset.h"

@class NSArray, NSData, NSDictionary, NSObject, NSString, NSURL, UIImage;

@interface TTMAssetImageStoreRequest : NSObject <TIPImageStoreRequest, NSCopying>

@property (readonly, nonatomic) NSURL *imageURL;
@property (readonly, copy, nonatomic) NSString *imageIdentifier;
@property (nonatomic) double timeToLive;
@property (nonatomic) long long options;
@property (copy, nonatomic) NSString *imageType;
@property (retain, nonatomic) TTMAsset *asset;
@property (retain, nonatomic) NSData *imageData;
@property (retain, nonatomic) UIImage *image;
@property (readonly, nonatomic) id <TIPImageStoreRequestHydrater> hydrater;
@property (readonly, copy, nonatomic) NSString *imageFilePath;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } imageDimensions;
@property (readonly, nonatomic) unsigned long long animationLoopCount;
@property (readonly, copy, nonatomic) NSArray *animationFrameDurations;
@property (readonly, copy, nonatomic) NSDictionary *decoderConfigMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)setImageURLString:(id)urlstring;
- (id)copyWithHydrater:(id)hydrater;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TTMAssetImageStoreRequest_h */
