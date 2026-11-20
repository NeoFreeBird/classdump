//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UICollectionViewDelegate_Protocol_h
#define UICollectionViewDelegate_Protocol_h
@import Foundation;

#include "UIScrollViewDelegate-Protocol.h"

@protocol UICollectionViewDelegate <UIScrollViewDelegate>

@required

@optional

/* optional instance methods */
- (_Bool)collectionView:(id)view shouldHighlightItemAtIndexPath:(id)path;
- (_Bool)collectionView:(id)view shouldHighlightItemAtIndexPath:(id)path;
- (void)collectionView:(id)view didHighlightItemAtIndexPath:(id)path;
- (void)collectionView:(id)view didHighlightItemAtIndexPath:(id)path;
- (void)collectionView:(id)view didUnhighlightItemAtIndexPath:(id)path;
- (void)collectionView:(id)view didUnhighlightItemAtIndexPath:(id)path;
- (_Bool)collectionView:(id)view shouldSelectItemAtIndexPath:(id)path;
- (_Bool)collectionView:(id)view shouldSelectItemAtIndexPath:(id)path;
- (_Bool)collectionView:(id)view shouldDeselectItemAtIndexPath:(id)path;
- (_Bool)collectionView:(id)view shouldDeselectItemAtIndexPath:(id)path;
- (void)collectionView:(id)view didSelectItemAtIndexPath:(id)path;
- (void)collectionView:(id)view didSelectItemAtIndexPath:(id)path;
- (void)collectionView:(id)view didDeselectItemAtIndexPath:(id)path;
- (void)collectionView:(id)view didDeselectItemAtIndexPath:(id)path;
- (_Bool)collectionView:(id)view canPerformPrimaryActionForItemAtIndexPath:(id)path;
- (_Bool)collectionView:(id)view canPerformPrimaryActionForItemAtIndexPath:(id)path;
- (void)collectionView:(id)view performPrimaryActionForItemAtIndexPath:(id)path;
- (void)collectionView:(id)view performPrimaryActionForItemAtIndexPath:(id)path;
- (void)collectionView:(id)view willDisplayCell:(id)cell forItemAtIndexPath:(id)path;
- (void)collectionView:(id)view willDisplayCell:(id)cell forItemAtIndexPath:(id)path;
- (void)collectionView:(id)view willDisplaySupplementaryView:(id)view forElementKind:(id)kind atIndexPath:(id)path;
- (void)collectionView:(id)view willDisplaySupplementaryView:(id)view forElementKind:(id)kind atIndexPath:(id)path;
- (void)collectionView:(id)view didEndDisplayingCell:(id)cell forItemAtIndexPath:(id)path;
- (void)collectionView:(id)view didEndDisplayingCell:(id)cell forItemAtIndexPath:(id)path;
- (void)collectionView:(id)view didEndDisplayingSupplementaryView:(id)view forElementOfKind:(id)kind atIndexPath:(id)path;
- (void)collectionView:(id)view didEndDisplayingSupplementaryView:(id)view forElementOfKind:(id)kind atIndexPath:(id)path;
- (_Bool)collectionView:(id)view shouldShowMenuForItemAtIndexPath:(id)path;
- (_Bool)collectionView:(id)view shouldShowMenuForItemAtIndexPath:(id)path;
- (_Bool)collectionView:(id)view canPerformAction:(SEL)action forItemAtIndexPath:(id)path withSender:(id)sender;
- (_Bool)collectionView:(id)view canPerformAction:(SEL)action forItemAtIndexPath:(id)path withSender:(id)sender;
- (void)collectionView:(id)view performAction:(SEL)action forItemAtIndexPath:(id)path withSender:(id)sender;
- (void)collectionView:(id)view performAction:(SEL)action forItemAtIndexPath:(id)path withSender:(id)sender;
- (id)collectionView:(id)view transitionLayoutForOldLayout:(id)layout newLayout:(id)layout;
- (_Bool)collectionView:(id)view canFocusItemAtIndexPath:(id)path;
- (_Bool)collectionView:(id)view canFocusItemAtIndexPath:(id)path;
- (_Bool)collectionView:(id)view shouldUpdateFocusInContext:(id)context;
- (_Bool)collectionView:(id)view shouldUpdateFocusInContext:(id)context;
- (void)collectionView:(id)view didUpdateFocusInContext:(id)context withAnimationCoordinator:(id)coordinator;
- (void)collectionView:(id)view didUpdateFocusInContext:(id)context withAnimationCoordinator:(id)coordinator;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)view;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)view;
- (_Bool)collectionView:(id)view selectionFollowsFocusForItemAtIndexPath:(id)path;
- (_Bool)collectionView:(id)view selectionFollowsFocusForItemAtIndexPath:(id)path;
- (id)collectionView:(id)view targetIndexPathForMoveOfItemFromOriginalIndexPath:(id)path atCurrentIndexPath:(id)path toProposedIndexPath:(id)path;
- (id)collectionView:(id)view targetIndexPathForMoveFromItemAtIndexPath:(id)path toProposedIndexPath:(id)path;
- (id)collectionView:(id)view targetIndexPathForMoveFromItemAtIndexPath:(id)path toProposedIndexPath:(id)path;
- (struct CGPoint { double x0; double x1; })collectionView:(id)view targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })offset;
- (_Bool)collectionView:(id)view canEditItemAtIndexPath:(id)path;
- (_Bool)collectionView:(id)view canEditItemAtIndexPath:(id)path;
- (_Bool)collectionView:(id)view shouldSpringLoadItemAtIndexPath:(id)path withContext:(id)context;
- (_Bool)collectionView:(id)view shouldSpringLoadItemAtIndexPath:(id)path withContext:(id)context;
- (_Bool)collectionView:(id)view shouldBeginMultipleSelectionInteractionAtIndexPath:(id)path;
- (_Bool)collectionView:(id)view shouldBeginMultipleSelectionInteractionAtIndexPath:(id)path;
- (void)collectionView:(id)view didBeginMultipleSelectionInteractionAtIndexPath:(id)path;
- (void)collectionView:(id)view didBeginMultipleSelectionInteractionAtIndexPath:(id)path;
- (void)collectionViewDidEndMultipleSelectionInteraction:(id)interaction;
- (id)collectionView:(id)view contextMenuConfigurationForItemsAtIndexPaths:(id)paths point:(struct CGPoint { double x0; double x1; })point;
- (id)collectionView:(id)view contextMenuConfigurationForItemsAtIndexPaths:(id)paths point:(struct CGPoint { double x0; double x1; })point;
- (id)collectionView:(id)view contextMenuConfiguration:(id)configuration highlightPreviewForItemAtIndexPath:(id)path;
- (id)collectionView:(id)view contextMenuConfiguration:(id)configuration highlightPreviewForItemAtIndexPath:(id)path;
- (id)collectionView:(id)view contextMenuConfiguration:(id)configuration dismissalPreviewForItemAtIndexPath:(id)path;
- (id)collectionView:(id)view contextMenuConfiguration:(id)configuration dismissalPreviewForItemAtIndexPath:(id)path;
- (void)collectionView:(id)view willPerformPreviewActionForMenuWithConfiguration:(id)configuration animator:(id)animator;
- (void)collectionView:(id)view willPerformPreviewActionForMenuWithConfiguration:(id)configuration animator:(id)animator;
- (void)collectionView:(id)view willDisplayContextMenuWithConfiguration:(id)configuration animator:(id)animator;
- (void)collectionView:(id)view willDisplayContextMenuWithConfiguration:(id)configuration animator:(id)animator;
- (void)collectionView:(id)view willEndContextMenuInteractionWithConfiguration:(id)configuration animator:(id)animator;
- (void)collectionView:(id)view willEndContextMenuInteractionWithConfiguration:(id)configuration animator:(id)animator;
- (id)collectionView:(id)view sceneActivationConfigurationForItemAtIndexPath:(id)path point:(struct CGPoint { double x0; double x1; })point;
- (id)collectionView:(id)view sceneActivationConfigurationForItemAtIndexPath:(id)path point:(struct CGPoint { double x0; double x1; })point;
- (id)collectionView:(id)view contextMenuConfigurationForItemAtIndexPath:(id)path point:(struct CGPoint { double x0; double x1; })point;
- (id)collectionView:(id)view contextMenuConfigurationForItemAtIndexPath:(id)path point:(struct CGPoint { double x0; double x1; })point;
- (id)collectionView:(id)view previewForHighlightingContextMenuWithConfiguration:(id)configuration;
- (id)collectionView:(id)view previewForDismissingContextMenuWithConfiguration:(id)configuration;

@end

#endif /* UICollectionViewDelegate_Protocol_h */
