//
#ifndef UICollectionViewDragDelegate_Protocol_h
#define UICollectionViewDragDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol UICollectionViewDragDelegate <NSObject>

@required

/* required instance methods */
- (id)collectionView:(id)view itemsForBeginningDragSession:(id)session atIndexPath:(id)path;
- (id)collectionView:(id)view itemsForBeginningDragSession:(id)session atIndexPath:(id)path;

@optional

/* optional instance methods */
- (id)collectionView:(id)view itemsForAddingToDragSession:(id)session atIndexPath:(id)path point:(struct CGPoint { double x0; double x1; })point;
- (id)collectionView:(id)view itemsForAddingToDragSession:(id)session atIndexPath:(id)path point:(struct CGPoint { double x0; double x1; })point;
- (id)collectionView:(id)view dragPreviewParametersForItemAtIndexPath:(id)path;
- (id)collectionView:(id)view dragPreviewParametersForItemAtIndexPath:(id)path;
- (void)collectionView:(id)view dragSessionWillBegin:(id)begin;
- (void)collectionView:(id)view dragSessionDidEnd:(id)end;
- (_Bool)collectionView:(id)view dragSessionAllowsMoveOperation:(id)operation;
- (_Bool)collectionView:(id)view dragSessionIsRestrictedToDraggingApplication:(id)application;

@end

#endif /* UICollectionViewDragDelegate_Protocol_h */
