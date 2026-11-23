//
#ifndef ONBUserTileGroupCell_h
#define ONBUserTileGroupCell_h
@import Foundation;

#include "ONBUserTileGroup.h"
#include "ONBUserTileGroupCellDelegate-Protocol.h"
#include "ONBUserTileGroupObserver-Protocol.h"
#include "TFNLayoutMetricsSizing-Protocol.h"
#include "TPSFeatureSwitchesAccess-Protocol.h"

@class NSString, TFNButton, TFNFlexibleLayoutView, TFNTableViewCell, TIPImagePipeline;

@interface ONBUserTileGroupCell : TFNTableViewCell <ONBUserTileGroupObserver, TFNLayoutMetricsSizing> {
    /* instance variables */
    TFNFlexibleLayoutView *_containerView;
    TFNFlexibleLayoutView *_outerContainerView;
    TFNButton *_followAllButton;
}

@property (retain, nonatomic) ONBUserTileGroup *userTileGroup;
@property (retain, nonatomic) TIPImagePipeline *imagePipeline;
@property (retain, nonatomic) id <TPSFeatureSwitchesAccess> featureSwitches;
@property (weak, nonatomic) id <ONBUserTileGroupCellDelegate> delegate;
@property (readonly, nonatomic) id /* block */ lingerImpressionSubrectIdentifierBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (void)dealloc;
- (void)prepareForReuse;
- (void)private_dynamicColorsDidReload;
- (id)private_headerViewWithHeaderText:(id)text subHeaderText:(id)text;
- (id)private_followAllButton;
- (void)private_followAllTapAction;
- (id)private_headerTextViewWithHeaderText:(id)text subHeaderText:(id)text;
- (struct CGSize { double x0; double x1; })sizeWithLayoutMetrics:(id)metrics;
- (void)userTileGroup:(id)group didUpdateSelectedUserIDs:(id)ids;
- (void)private_updateStateForFollowAllButtonWithSelectedUserIDs:(id)ids;
- (void)private_buttonTapped:(id)tapped;

@end

#endif /* ONBUserTileGroupCell_h */
