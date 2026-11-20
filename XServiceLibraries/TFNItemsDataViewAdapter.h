//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNItemsDataViewAdapter_h
#define TFNItemsDataViewAdapter_h
@import Foundation;

@class NSNumber, NSObject;

@interface TFNItemsDataViewAdapter : NSObject

@property (nonatomic) long long accessoryType;
@property (nonatomic) long long accessoryVerticalAlignment;
@property (nonatomic) long long separatorType;
@property (nonatomic) long long borderType;

/* instance methods */
- (void)dataViewController:(id)controller addDirectlyOwnedViewControllersToMutableArray:(id)array forItems:(id)items;
- (id)dataViewController:(id)controller objectIdentifierForItem:(id)item withOptions:(id)options;
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller estimatedTableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (struct CGSize { double x0; double x1; })dataViewController:(id)controller collectionViewSizeForItem:(id)item constrainedToSize:(struct CGSize { double x0; double x1; })size withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller collectionViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller cellLayoutForItem:(id)item withOptions:(id)options previousLayout:(id)layout atIndexPath:(id)path;
- (id)dataViewController:(id)controller cellLayoutObjectIdentifierForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)dataViewController:(id)controller willDisplayCell:(id)cell forItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)dataViewController:(id)controller didEndDisplayingCell:(id)cell forItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (_Bool)dataViewController:(id)controller shouldHighlightItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)dataViewController:(id)controller didHighlightItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)dataViewController:(id)controller didUnhighlightItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (_Bool)dataViewController:(id)controller shouldSelectItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)dataViewController:(id)controller didSelectItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (_Bool)dataViewController:(id)controller shouldDeselectItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)dataViewController:(id)controller didDeselectItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (_Bool)dataViewController:(id)controller canEditItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)dataViewController:(id)controller prefetchItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (long long)dataViewController:(id)controller editingStyleForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)dataViewController:(id)controller willBeginEditingItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)dataViewController:(id)controller didScrollScrollView:(id)view;
- (id)dataViewController:(id)controller previewConfigurationForItem:(id)item withOptions:(id)options location:(struct CGPoint { double x0; double x1; })location inCell:(id)cell atIndexPath:(id)path;
- (id)dataViewController:(id)controller highlightPreviewForItem:(id)item withOptions:(id)options location:(struct CGPoint { double x0; double x1; })location inCell:(id)cell atIndexPath:(id)path;
- (id)dataViewController:(id)controller dismissalPreviewForItem:(id)item withOptions:(id)options location:(struct CGPoint { double x0; double x1; })location inCell:(id)cell atIndexPath:(id)path;
- (void)dataViewController:(id)controller commitPreviewingViewController:(id)controller forItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (_Bool)tfn_isDataViewAdapter;
- (id)accessoryTypeForOptions:(id)options;
- (id)accessoryVerticalAlignmentForOptions:(id)options;
- (id)separatorTypeForOptions:(id)options;
- (id)borderTypeForOptions:(id)options;
- (long long)highlightStyleForOptions:(id)options;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })totalContentEdgeInsetsForOptions:(id)options withDefaultAccessoryType:(long long)type layoutMetrics:(id)metrics;
- (void)applyOptions:(id)options toCell:(id)cell withDefaultAccessoryType:(long long)type;
- (unsigned long long)dataViewController:(id)controller sectionBreaksForIndexPath:(id)path;
- (_Bool)dataViewController:(id)controller dismissItem:(id)item withInfo:(id)info options:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller calculatedLayoutMetricsForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller dragItemForItem:(id)item withOptions:(id)options atIndexPath:(id)path;

@end

#endif /* TFNItemsDataViewAdapter_h */
