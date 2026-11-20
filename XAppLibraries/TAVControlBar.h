//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVControlBar_h
#define TAVControlBar_h
@import Foundation;

#include "TAVPlayerView-Protocol.h"

@class NSMutableDictionary, NSOrderedSet, UIStackView, UIView;
@protocol TAVControlBarDelegate;

@interface TAVControlBar : UIView

@property (retain, nonatomic) NSMutableDictionary *itemForIdentifier;
@property (retain, nonatomic) UIStackView *stackView;
@property (copy, nonatomic) NSOrderedSet *itemIdentifiers;
@property (weak, nonatomic) id <TAVControlBarDelegate> delegate;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentLayoutMargins;
@property (nonatomic) double contentSpacing;
@property (weak, nonatomic) id <TAVPlayerView> playerView;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)prepareForInterfaceBuilder;
- (void)private_commonInit;
- (id)description;
- (id)itemForIdentifier:(id)identifier;
- (id)private_itemForIdentifier:(id)identifier;
- (void)didMoveToSuperview;
- (void)private_updateItemLayout;

@end

#endif /* TAVControlBar_h */
