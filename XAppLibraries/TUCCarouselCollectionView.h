//
#ifndef TUCCarouselCollectionView_h
#define TUCCarouselCollectionView_h
@import Foundation;

@class TFNCollectionView;

@interface TUCCarouselCollectionView : TFNCollectionView // (Swift)

/* instance methods */
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (id)initWithDataViewController:(id)controller collectionViewLayout:(id)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame collectionViewLayout:(id)layout;
- (id)initWithCoder:(id)coder;

@end

#endif /* TUCCarouselCollectionView_h */
