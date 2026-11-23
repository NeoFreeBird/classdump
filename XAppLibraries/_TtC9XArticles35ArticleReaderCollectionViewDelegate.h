//
#ifndef _TtC9XArticles35ArticleReaderCollectionViewDelegate_h
#define _TtC9XArticles35ArticleReaderCollectionViewDelegate_h
@import Foundation;

#include "UICollectionViewDelegate-Protocol.h"

@class NSObject, Swift.Bool _$s10Foundation9IndexPathVMn _$scSg, _$s10Foundation9IndexPathVMn _$scSg ->, _$syycSg;

@interface XArticles.ArticleReaderCollectionViewDelegate : NSObject <UICollectionViewDelegate> { // (Swift)
    /* instance variables */
    (() -> ())? onWillBeginDragging;
    (() -> ())? onDidScroll;
    (() -> ())? onDidEndDragging;
    (() -> ())? onDidEndDecelerating;
    Swift.Bool nominal type descriptor for Foundation.IndexPath _$scSg isSelectable;
    nominal type descriptor for Foundation.IndexPath _$scSg -> onSelect;
}

/* instance methods */
- (void)scrollViewWillBeginDragging:(id)dragging;
- (void)scrollViewDidScroll:(id)scroll;
- (void)scrollViewDidEndDragging:(id)dragging willDecelerate:(_Bool)decelerate;
- (void)scrollViewDidEndDecelerating:(id)decelerating;
- (_Bool)collectionView:(id)view shouldHighlightItemAtIndexPath:(id)path;
- (_Bool)collectionView:(id)view shouldSelectItemAtIndexPath:(id)path;
- (void)collectionView:(id)view didSelectItemAtIndexPath:(id)path;
- (id)init;

@end

#endif /* _TtC9XArticles35ArticleReaderCollectionViewDelegate_h */
