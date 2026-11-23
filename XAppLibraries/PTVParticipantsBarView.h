//
#ifndef PTVParticipantsBarView_h
#define PTVParticipantsBarView_h
@import Foundation;

#include "PTVParticipantsBarMaskView.h"

@class UIButton, UICollectionView;

@interface PTVParticipantsBarView : UIButton

@property (readonly, nonatomic) PTVParticipantsBarMaskView *collectionContainerView;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentInsets;
@property (readonly, nonatomic) UICollectionView *collectionView;

/* instance methods */
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)insertParticipantsAtIndexes:(id)indexes removeParticipantsAtIndexes:(id)indexes inSection:(long long)section animations:(id /* block */)animations completion:(id /* block */)completion;
- (void)insertParticipantsAtIndexPaths:(id)paths removeParticipantsAtIndexPaths:(id)paths moveItemsAtIndexPaths:(id)paths toIndexPaths:(id)paths animations:(id /* block */)animations completion:(id /* block */)completion;
- (id)indexPathsForIndexes:(id)indexes inSection:(long long)section;
- (id)setupCollectionView;
- (id)setupCollectionViewLayout;

@end

#endif /* PTVParticipantsBarView_h */
