//
#ifndef TFSTwitterMediaInfo_h
#define TFSTwitterMediaInfo_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "TFSTwitterEntityMedia.h"
#include "TFSTwitterEntityMediaFeatureSet.h"
#include "TFSTwitterEntityMediaVideoInfo.h"
#include "TFSTwitterEntityURL.h"
#include "TFSTwitterMediaColorPalette.h"
#include "TFSTwitterTagSet.h"

@class NSNumber, NSObject, NSString, NSURL;

@interface TFSTwitterMediaInfo : NSObject <NSCopying> // (Swift)

@property (nonatomic, copy) NSString *imageURLString;
@property (nonatomic) struct CGSize { double x0; double x1; } imageDimensions;
@property (nonatomic, retain) TFSTwitterEntityMediaFeatureSet *imageFeatures;
@property (nonatomic, retain) TFSTwitterEntityURL *entityURL;
@property (nonatomic, retain) TFSTwitterEntityMedia *mediaEntity;
@property (nonatomic, readonly) TFSTwitterTagSet *tagSet;
@property (nonatomic, readonly) TFSTwitterMediaColorPalette *mediaPalette;
@property (nonatomic, readonly) TFSTwitterEntityMediaVideoInfo *videoInfo;
@property (nonatomic, readonly) NSString *altText;
@property (nonatomic, copy) NSURL *imageURL;
@property (nonatomic, retain) NSNumber *videoViewCount;
@property (nonatomic, readonly) long long hash;

/* instance methods */
- (id)initWithEntityMedia:(id)media;
- (_Bool)isEqual:(id)equal;
- (id)copyWithZone:(void *)zone;
- (id)init;

@end

#endif /* TFSTwitterMediaInfo_h */
