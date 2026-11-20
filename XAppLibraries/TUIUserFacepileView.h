//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUIUserFacepileView_h
#define TUIUserFacepileView_h
@import Foundation;

#include "TFNLayoutMetricsEnvironment-Protocol.h"
#include "TUIUserFacepileStyleConfiguration.h"

@class NSArray, NSMutableArray, NSString, TIPImagePipeline, UIColor, UIView;

@interface TUIUserFacepileView : UIView <TFNLayoutMetricsEnvironment>

@property (readonly, nonatomic) NSMutableArray *avatarViews;
@property (readonly, nonatomic) NSMutableArray *avatarContainerViews;
@property (retain, nonatomic) TUIUserFacepileStyleConfiguration *styleConfiguration;
@property (nonatomic) long long maxAvatarsCount;
@property (retain, nonatomic) TIPImagePipeline *imagePipeline;
@property (nonatomic) _Bool isRTL;
@property (nonatomic) _Bool scalesWithTextSize;
@property (nonatomic) _Bool usesTotalAvatarCount;
@property (nonatomic) struct CGSize { double x0; double x1; } defaultAvatarSizeOverride;
@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) long long avatarSizeClass;
@property (nonatomic) _Bool borderHidden;
@property (nonatomic) long long variant;
@property (copy, nonatomic) NSArray *avatarViewModels;
@property (copy, nonatomic) id /* block */ avatarTappedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (struct CGSize { double x0; double x1; })sizeForAvatarViewModels:(id)models variant:(long long)variant scalesWithTextSize:(_Bool)size layoutMetrics:(id)metrics avatarSizeClass:(long long)_class usesTotalAvatarCount:(_Bool)count maxAvatarsCount:(long long)count defaultAvatarSizeOverride:(struct CGSize { double x0; double x1; })override;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)private_commonInit;
- (void)_restackAvatarContainerViews;
- (void)setAvatarImageViewModels:(id)models;
- (struct CGSize { double x0; double x1; })avatarSize;
- (long long)overlayForAvatarViewModel:(id)model;
- (void)layoutSubviews;
- (void)_applyCutoutMasksForCascading;
- (void)_avatarImageViewTapped:(id)tapped;
- (id)avatarViewAtPoint:(struct CGPoint { double x0; double x1; })point;
- (long long)indexForAvatarAtPoint:(struct CGPoint { double x0; double x1; })point;

@end

#endif /* TUIUserFacepileView_h */
