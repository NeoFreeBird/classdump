//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNFlexibleSpaceDataViewAdapter_h
#define TFNFlexibleSpaceDataViewAdapter_h
@import Foundation;

#include "TFNFlexibleSpaceHelper.h"
#include "TFNItemsDataViewAdapter.h"

@interface TFNFlexibleSpaceDataViewAdapter : TFNItemsDataViewAdapter {
    /* instance variables */
    _Bool _isCalculatingFlexibleHeight;
    TFNFlexibleSpaceHelper *_helper;
}

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)_tfn_keyboardChanged:(id)changed;
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (struct CGSize { double x0; double x1; })dataViewController:(id)controller collectionViewSizeForItem:(id)item constrainedToSize:(struct CGSize { double x0; double x1; })size withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller collectionViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (_Bool)dataViewController:(id)controller shouldSelectItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)private_heightForItem:(id)item inDataViewController:(id)controller atIndexPath:(id)path withSectionCount:(long long)count numberOfItemsInSectionBlock:(id /* block */)block itemHeightBlock:(id /* block */)block additionalItemHeightBlock:(id /* block */)block emptySectionHeightBlock:(id /* block */)block;

@end

#endif /* TFNFlexibleSpaceDataViewAdapter_h */
