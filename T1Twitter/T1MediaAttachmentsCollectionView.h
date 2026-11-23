//
#ifndef T1MediaAttachmentsCollectionView_h
#define T1MediaAttachmentsCollectionView_h
@import Foundation;

@class UICollectionView;

@interface T1MediaAttachmentsCollectionView : UICollectionView

@property (nonatomic) struct CGPoint { double x0; double x1; } prevInteractiveMovementTargetPosition;
@property (nonatomic) struct CGPoint { double x0; double x1; } prevInteractiveMovementUpdateTargetPosition;
@property (nonatomic) double distanceRequiredForNextInteractiveMovementUpdate;
@property (nonatomic) _Bool firstInteractiveMovementUpdate;

/* instance methods */
- (_Bool)beginInteractiveMovementForItemAtIndexPath:(id)path;
- (void)updateInteractiveMovementTargetPosition:(struct CGPoint { double x0; double x1; })position;
- (_Bool)isFirstInteractiveMovementUpdate;

@end

#endif /* T1MediaAttachmentsCollectionView_h */
