//
#ifndef TFNItemsDataViewDelegate_Protocol_h
#define TFNItemsDataViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNItemsDataViewDelegate <NSObject>

@required

/* required instance methods */
- (id)dataViewAdapterForItem:(id)item atIndexPath:(id)path;
- (id)dataViewAdapterOptionsForItem:(id)item atIndexPath:(id)path;
- (double)tableViewHeightForItem:(id)item atIndexPath:(id)path;
- (double)estimatedTableViewHeightForItem:(id)item atIndexPath:(id)path;
- (id)tableViewCellForItem:(id)item atIndexPath:(id)path;
- (struct CGSize { double x0; double x1; })collectionViewSizeForItem:(id)item constrainedToSize:(struct CGSize { double x0; double x1; })size atIndexPath:(id)path;
- (id)collectionViewCellForItem:(id)item atIndexPath:(id)path;
- (void)willDisplayCell:(id)cell forItem:(id)item atIndexPath:(id)path;
- (void)didEndDisplayingCell:(id)cell forItem:(id)item atIndexPath:(id)path inDataViewController:(id)controller withPreviousDataViewAdapter:(id)adapter options:(id)options;
- (_Bool)shouldHighlightItem:(id)item atIndexPath:(id)path;
- (void)didHighlightItem:(id)item atIndexPath:(id)path;
- (void)didUnhighlightItem:(id)item atIndexPath:(id)path;
- (_Bool)shouldSelectItem:(id)item atIndexPath:(id)path;
- (void)didSelectItem:(id)item atIndexPath:(id)path;
- (_Bool)shouldDeselectItem:(id)item atIndexPath:(id)path;
- (void)didDeselectItem:(id)item atIndexPath:(id)path;
- (_Bool)dismissItem:(id)item withInfo:(id)info atIndexPath:(id)path;
- (_Bool)canEditItem:(id)item atIndexPath:(id)path;
- (long long)editingStyleForItem:(id)item atIndexPath:(id)path;
- (void)willBeginEditingItem:(id)item atIndexPath:(id)path;
- (id)previewConfigurationForItem:(id)item location:(struct CGPoint { double x0; double x1; })location inCell:(id)cell atIndexPath:(id)path;
- (id)highlightPreviewForItem:(id)item location:(struct CGPoint { double x0; double x1; })location inCell:(id)cell atIndexPath:(id)path;
- (id)dismissalPreviewForItem:(id)item location:(struct CGPoint { double x0; double x1; })location inCell:(id)cell atIndexPath:(id)path;
- (void)commitPreviewingViewController:(id)controller forItem:(id)item atIndexPath:(id)path inDataViewController:(id)controller withPreviousDataViewAdapter:(id)adapter options:(id)options;
- (id)cellLayoutForItem:(id)item withPreviousLayout:(id)layout atIndexPath:(id)path;
- (id)cellLayoutObjectIdentifierForItem:(id)item atIndexPath:(id)path;
- (unsigned long long)sectionBreaksForItem:(id)item atIndexPath:(id)path;
- (id)calculatedLayoutMetricsForItem:(id)item atIndexPath:(id)path;
- (id)dragItemForItem:(id)item atIndexPath:(id)path;

@optional

@end

#endif /* TFNItemsDataViewDelegate_Protocol_h */
