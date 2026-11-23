//
#ifndef TFNInlineTooltipImageConfiguration_h
#define TFNInlineTooltipImageConfiguration_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSObject;

@interface TFNInlineTooltipImageConfiguration : NSObject <NSCopying> { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 image;
    B24@0:8@"NSString"16 imageType;
    B24@0:8@"NSString"16 imageViewUpdater;
}

@property (nonatomic, readonly) long long hash;

/* class methods */
+ (id)vectorImageWithName:(id)name;
+ (id)vectorImageWithName:(id)name imageHeight:(double)height;
+ (id)illustrationImage:(id)image imageViewUpdater:(id /* block */)updater;

/* instance methods */
- (id)copyWithZone:(void *)zone;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TFNInlineTooltipImageConfiguration_h */
