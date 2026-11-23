//
#ifndef TTSUserBadgesImageView_Protocol_h
#define TTSUserBadgesImageView_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class TIPImagePipeline;

@protocol TTSUserBadgesImageView <NSObject>

@required

@property (nonatomic, retain) TIPImagePipeline *imagePipeline;

/* required instance methods */
- (void)updateViewModelForUser:(id)user featureSwitches:(id)switches onDark:(_Bool)dark badgeCustomSize:(struct CGSize { double x0; double x1; })size;
- (void)updateViewModelForUser:(id)user featureSwitches:(id)switches onDark:(_Bool)dark badgeCustomSize:(struct CGSize { double x0; double x1; })size;
- (void)updateViewModelForBadges:(id)badges onDark:(_Bool)dark badgeCustomSize:(struct CGSize { double x0; double x1; })size;
- (void)updateViewModelForBadges:(id)badges onDark:(_Bool)dark badgeCustomSize:(struct CGSize { double x0; double x1; })size;
- (void)nullifyViewModel;

@optional

@end

#endif /* TTSUserBadgesImageView_Protocol_h */
