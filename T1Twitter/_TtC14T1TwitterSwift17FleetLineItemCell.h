//
#ifndef _TtC14T1TwitterSwift17FleetLineItemCell_h
#define _TtC14T1TwitterSwift17FleetLineItemCell_h
@import Foundation;

@class Swift.Bool, T1TwitterSwift.AvatarPresenceViewLoadingState, T1TwitterSwift.FeatureHighlightsFleetlineItemView ?, T1TwitterSwift.FleetLineGameItemView ?, T1TwitterSwift.FleetLineItemCell.PressFeedback, T1TwitterSwift.FleetLineItemCellDelegate ?, T1TwitterSwift.FleetLineItemView ?, T1TwitterSwift.FleetLineItemViewModel ?, T1TwitterSwift.FleetLineItemViewModel.AccessoryType ?, T1TwitterSwift.FleetLineItemViewModel.ViewState, UICollectionViewCell, _$s18TwitterCommunities14CommunityModelCMn ?, _$s7Combine14AnyCancellableCMn ?, _$sSSSg, _$sSa -> T1TwitterSwift.FleetLineItemCell.SpaceSecondaryInfoType, _$sSi, _$sSo16TIPImagePipelineCSg, _$sSo29TFNLongPressGestureRecognizerCSg, _$syXlSg;

@interface T1TwitterSwift.FleetLineItemCell : UICollectionViewCell { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.AnyCancellable ? draftStateCancellable;
    T1TwitterSwift.FleetLineItemViewModel.ViewState viewState;
    T1TwitterSwift.FleetLineItemCell.PressFeedback pressFeedback;
    T1TwitterSwift.FleetLineItemViewModel.AccessoryType ? accessoryType;
    T1TwitterSwift.FleetLineItemView ? fleetLineItemView;
    T1TwitterSwift.FeatureHighlightsFleetlineItemView ? featureHighlightsItemView;
    T1TwitterSwift.FleetLineGameItemView ? gameItemView;
    __C.TFNLongPressGestureRecognizer? longPressRecognizer;
    __C.TIPImagePipeline? imagePipeline;
    T1TwitterSwift.FleetLineItemCellDelegate ? delegate;
    T1TwitterSwift.AvatarPresenceViewLoadingState state;
    Swift.Array -> T1TwitterSwift.FleetLineItemCell.SpaceSecondaryInfoType spaceSecondaryInfoDisplayOrder;
    Swift.Int spaceSecondaryInfoDisplayOrderIndex;
    Swift.Bool spaceSecondaryInfoLoading;
    Swift.AnyObject? communityModelObserver;
    nominal type descriptor for TwitterCommunities.CommunityModel ? community;
    T1TwitterSwift.FleetLineItemViewModel ? viewModel;
    Swift.String? lastBoundItemID;
}

@property (nonatomic) _Bool highlighted;

/* instance methods */
- (_Bool)isHighlighted;
- (void)layoutSubviews;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (void)handleLongPress:(id)press;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC14T1TwitterSwift17FleetLineItemCell_h */
