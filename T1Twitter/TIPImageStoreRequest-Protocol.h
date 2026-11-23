//
#ifndef TIPImageStoreRequest_Protocol_h
#define TIPImageStoreRequest_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSArray, NSData, NSDictionary, NSString, NSURL, UIImage;
@protocol TIPImageStoreRequestHydrater;

@protocol TIPImageStoreRequest <NSObject>

@required

@property (readonly, nonatomic) NSURL *imageURL;

@optional

@property (readonly, copy, nonatomic) NSString *imageIdentifier;
@property (readonly, nonatomic) double timeToLive;
@property (readonly, nonatomic) long long options;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) NSData *imageData;
@property (readonly, copy, nonatomic) NSString *imageFilePath;
@property (readonly, copy, nonatomic) NSString *imageType;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } imageDimensions;
@property (readonly, nonatomic) unsigned long long animationLoopCount;
@property (readonly, copy, nonatomic) NSArray *animationFrameDurations;
@property (readonly, nonatomic) id <TIPImageStoreRequestHydrater> hydrater;
@property (readonly, copy, nonatomic) NSDictionary *decoderConfigMap;

@end

#endif /* TIPImageStoreRequest_Protocol_h */
