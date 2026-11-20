//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNBridgingItemsDataViewAdapter_h
#define TFNBridgingItemsDataViewAdapter_h
@import Foundation;

#include "TFNItemsDataViewAdapter.h"

@interface TFNBridgingItemsDataViewAdapter : TFNItemsDataViewAdapter { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 objectIdentifier;
    B24@0:8@"NSString"16 shouldHighlight;
    B24@0:8@"NSString"16 didHighlight;
    B24@0:8@"NSString"16 didUnhighlight;
    B24@0:8@"NSString"16 shouldSelect;
    B24@0:8@"NSString"16 didSelect;
    B24@0:8@"NSString"16 shouldDeselect;
    B24@0:8@"NSString"16 didDeselect;
    B24@0:8@"NSString"16 canEdit;
    B24@0:8@"NSString"16 dismiss;
    B24@0:8@"NSString"16 commitPreviewingController;
    B24@0:8@"NSString"16 cellLayoutObjectIdentifier;
    B24@0:8@"NSString"16 calculatedLayoutMetrics;
    B24@0:8@"NSString"16 sectionBreaks;
    B24@0:8@"NSString"16 dragItem;
    B24@0:8@"NSString"16 addDirectlyOwnedViewControllers;
    B24@0:8@"NSString"16 prefetchItem;
    B24@0:8@"NSString"16 tableViewHeight;
    B24@0:8@"NSString"16 estimatedTableViewHeight;
    B24@0:8@"NSString"16 tableViewCell;
    B24@0:8@"NSString"16 editingStyle;
    B24@0:8@"NSString"16 willBeginEditing;
    B24@0:8@"NSString"16 totalContentEdgeInsets;
    B24@0:8@"NSString"16 applyOptions;
    B24@0:8@"NSString"16 collectionViewSize;
    B24@0:8@"NSString"16 collectionViewCell;
    B24@0:8@"NSString"16 cellLayout;
    B24@0:8@"NSString"16 willDisplayCell;
    B24@0:8@"NSString"16 didEndDisplayingCell;
    B24@0:8@"NSString"16 previewConfiguration;
    B24@0:8@"NSString"16 highlightPreview;
    B24@0:8@"NSString"16 dismissalPreview;
    B24@0:8@"NSString"16 typedAdapter;
}

/* instance methods */
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
- (long long)dataViewController:(id)controller editingStyleForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)dataViewController:(id)controller willBeginEditingItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)dataViewController:(id)controller prefetchItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller previewConfigurationForItem:(id)item withOptions:(id)options location:(struct CGPoint { double x0; double x1; })location inCell:(id)cell atIndexPath:(id)path;
- (id)dataViewController:(id)controller highlightPreviewForItem:(id)item withOptions:(id)options location:(struct CGPoint { double x0; double x1; })location inCell:(id)cell atIndexPath:(id)path;
- (id)dataViewController:(id)controller dismissalPreviewForItem:(id)item withOptions:(id)options location:(struct CGPoint { double x0; double x1; })location inCell:(id)cell atIndexPath:(id)path;
- (void)dataViewController:(id)controller commitPreviewingViewController:(id)controller forItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller calculatedLayoutMetricsForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (unsigned long long)dataViewController:(id)controller sectionBreaksForIndexPath:(id)path;
- (_Bool)dataViewController:(id)controller dismissItem:(id)item withInfo:(id)info options:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller dragItemForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })totalContentEdgeInsetsForOptions:(id)options withDefaultAccessoryType:(long long)type layoutMetrics:(id)metrics;
- (void)applyOptions:(id)options toCell:(id)cell withDefaultAccessoryType:(long long)type;
- (void)dataViewController:(id)controller addDirectlyOwnedViewControllersToMutableArray:(id)array forItems:(id)items;
- (id)init;

@end

#endif /* TFNBridgingItemsDataViewAdapter_h */
