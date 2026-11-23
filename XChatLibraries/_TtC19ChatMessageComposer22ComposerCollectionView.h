//
#ifndef _TtC19ChatMessageComposer22ComposerCollectionView_h
#define _TtC19ChatMessageComposer22ComposerCollectionView_h
@import Foundation;

@class UICollectionView;

@interface ChatMessageComposer.ComposerCollectionView : UICollectionView // (Swift)

@property (nonatomic) struct CGSize { double x0; double x1; } contentSize;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame collectionViewLayout:(id)layout;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (_Bool)touchesShouldCancelInContentView:(id)view;

@end

#endif /* _TtC19ChatMessageComposer22ComposerCollectionView_h */
