//
#ifndef TFSTwitterMediaColorPalette_h
#define TFSTwitterMediaColorPalette_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSObject, NSString, UIColor;

@interface TFSTwitterMediaColorPalette : NSObject <NSCoding, NSCopying> // (Swift)

@property (nonatomic, readonly) UIColor *dominantColor;
@property (nonatomic, readonly) UIColor *darkDominantColor;
@property (nonatomic, readonly) NSArray *paletteColors;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

/* class methods */
+ (double)dominantColorMinBrightness;
+ (double)dominantColorMaxBrightness;
+ (double)dominantColorMinSaturation;
+ (double)dominantColorMaxSaturation;

/* instance methods */
- (id)initWithPaletteColors:(id)colors;
- (_Bool)isEqual:(id)equal;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(void *)zone;
- (id)init;

@end

#endif /* TFSTwitterMediaColorPalette_h */
