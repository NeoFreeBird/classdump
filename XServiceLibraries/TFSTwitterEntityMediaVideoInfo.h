//
#ifndef TFSTwitterEntityMediaVideoInfo_h
#define TFSTwitterEntityMediaVideoInfo_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "TFSTwitterEntityMediaVideoVariant.h"

@class NSArray, NSObject, NSString, NSURL;

@interface TFSTwitterEntityMediaVideoInfo : NSObject <NSSecureCoding, NSCopying> // (Swift)

@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) float aspectRatio;
@property (nonatomic, readonly) float numerator;
@property (nonatomic, readonly) float denominator;
@property (nonatomic, readonly) NSArray *variants;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *primaryUrl;
@property (nonatomic, readonly) TFSTwitterEntityMediaVideoVariant *preferredVariant;
@property (nonatomic, readonly) NSURL *highestBitrateMP4VariantURL;

/* class methods */
+ (_Bool)supportsSecureCoding;

/* instance methods */
- (id)initWithDuration:(double)duration numerator:(float)numerator denominator:(float)denominator variants:(id)variants;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (_Bool)isEqual:(id)equal;
- (id)copyWithZone:(void *)zone;
- (id)highestBitrateVideoVariantURLWithContentType:(id)type andMaximumBitrate:(long long)bitrate;
- (id)alternativeVideoVariantURLsWithContentType:(id)type andBitrateAbove:(long long)above;
- (id)init;

@end

#endif /* TFSTwitterEntityMediaVideoInfo_h */
