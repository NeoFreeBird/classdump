//
#ifndef TFSTwitterMediaColorPaletteColor_h
#define TFSTwitterMediaColorPaletteColor_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSObject, NSString;

@interface TFSTwitterMediaColorPaletteColor : NSObject <NSCoding, NSCopying> // (Swift)

@property (nonatomic, readonly) unsigned int color;
@property (nonatomic, readonly) float percentage;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

/* instance methods */
- (id)initWithColor:(unsigned int)color percentage:(float)percentage;
- (_Bool)isEqual:(id)equal;
- (id)copyWithZone:(void *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)init;

@end

#endif /* TFSTwitterMediaColorPaletteColor_h */
