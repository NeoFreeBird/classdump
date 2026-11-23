//
#ifndef TFNBadgesImageGenerator_h
#define TFNBadgesImageGenerator_h
@import Foundation;

#include "TIPImagePipeline.h"

@class NSObject;

@interface TFNBadgesImageGenerator : NSObject // (Swift)

@property (nonatomic, retain) TIPImagePipeline *imagePipeline;

/* instance methods */
- (id)imageWithBadges:(id)badges;
- (id)imageWithBadges:(id)badges onDark:(_Bool)dark;
- (id)imageWithBadges:(id)badges onDark:(_Bool)dark badgeCustomSize:(struct CGSize { double x0; double x1; })size;
- (id)imageWithBadges:(id)badges completion:(id /* block */)completion;
- (id)imageWithBadges:(id)badges onDark:(_Bool)dark completion:(id /* block */)completion;
- (id)imageWithBadges:(id)badges onDark:(_Bool)dark badgeCustomSize:(struct CGSize { double x0; double x1; })size completion:(id /* block */)completion;
- (id)init;

@end

#endif /* TFNBadgesImageGenerator_h */
