//
#ifndef _TtC14T1TwitterSwift23RestoreButtonRowAdapter_h
#define _TtC14T1TwitterSwift23RestoreButtonRowAdapter_h
@import Foundation;

@class T1TwitterSwift.RestoreButtonRowAdapterDelegate ?, TFNItemsDataViewAdapter, __C.UIEdgeInsets;

@interface T1TwitterSwift.RestoreButtonRowAdapter : TFNItemsDataViewAdapter { // (Swift)
    /* instance variables */
    __C.UIEdgeInsets sectionInsets;
    T1TwitterSwift.RestoreButtonRowAdapterDelegate ? delegate;
}

/* instance methods */
- (id)dataViewController:(id)controller collectionViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (struct CGSize { double x0; double x1; })dataViewController:(id)controller collectionViewSizeForItem:(id)item constrainedToSize:(struct CGSize { double x0; double x1; })size withOptions:(id)options atIndexPath:(id)path;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift23RestoreButtonRowAdapter_h */
