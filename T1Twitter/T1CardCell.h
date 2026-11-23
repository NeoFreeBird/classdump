//
#ifndef T1CardCell_h
#define T1CardCell_h
@import Foundation;

#include "T1AutoplayableContainer-Protocol.h"
#include "T1CardContainerView.h"
#include "T1CardItem.h"
#include "TAVAutoplayViewContainer-Protocol.h"
#include "TFNLayoutMetricsEnvironment-Protocol.h"
#include "TUICardViewDelegate-Protocol.h"
#include "TVPPlayerSessionSource-Protocol.h"

@class NSString, TFNDataViewController, TFNTableViewCell, UIImage, UIView;

@interface T1CardCell : TFNTableViewCell <TUICardViewDelegate, TFNLayoutMetricsEnvironment, TAVAutoplayViewContainer, T1AutoplayableContainer>

@property (retain, nonatomic) T1CardItem *item;
@property (retain, nonatomic) T1CardContainerView *cardContainerView;
@property (copy, nonatomic) id /* block */ cardCellActionBlock;
@property (copy, nonatomic) id /* block */ presentPlayerBlock;
@property (copy, nonatomic) id /* block */ layoutMetricsDidChangeBlock;
@property (weak, nonatomic) TFNDataViewController *controller;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id <TVPPlayerSessionSource> playerSessionSource;
@property (readonly, nonatomic) UIView *playerContainerView;
@property (readonly, nonatomic) UIImage *playerPreviewImage;

/* class methods */
+ (id)cellLayoutForCardItem:(id)item account:(id)account layoutMetrics:(id)metrics withPreviousLayout:(id)layout;
+ (id)cellLayoutFromCardContext:(id)context displayMode:(long long)mode account:(id)account layoutMetrics:(id)metrics withPreviousLayout:(id)layout;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (void)configureCellWithCardItem:(id)item contentEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (void)configureCellWithCardContext:(id)context contentEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (id)_t1_playerViewContainer;
- (void)setCellLayout:(id)layout;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)layoutMetricsDidChange:(id)change to:(id)to;
- (id)layoutMetricsForCardView:(id)view;
- (id)cardView:(id)view didFireViewEvent:(id)event;
- (void)cardView:(id)view presentFullscreenPlayerFromMediaView:(id)view withPreviewImage:(id)image;
- (id)autoplayable;

@end

#endif /* T1CardCell_h */
