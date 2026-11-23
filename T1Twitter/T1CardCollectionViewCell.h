//
#ifndef T1CardCollectionViewCell_h
#define T1CardCollectionViewCell_h
@import Foundation;

#include "T1CardContainerView.h"
#include "T1CardItem.h"
#include "TUICardViewDelegate-Protocol.h"

@class NSString, TFNCollectionViewCell, TFNDataViewController;

@interface T1CardCollectionViewCell : TFNCollectionViewCell <TUICardViewDelegate> {
    /* instance variables */
    T1CardItem *_item;
}

@property (readonly, nonatomic) T1CardContainerView *cardContainerView;
@property (copy, nonatomic) id /* block */ cardCellActionBlock;
@property (copy, nonatomic) id /* block */ layoutMetricsDidChangeBlock;
@property (weak, nonatomic) TFNDataViewController *controller;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)cellLayoutFromCardContext:(id)context displayMode:(long long)mode account:(id)account layoutMetrics:(id)metrics withPreviousLayout:(id)layout;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)configureCellWithCardContext:(id)context contentEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (void)prepareForReuse;
- (id)layoutMetricsForCardView:(id)view;
- (id)cardView:(id)view didFireViewEvent:(id)event;

@end

#endif /* T1CardCollectionViewCell_h */
