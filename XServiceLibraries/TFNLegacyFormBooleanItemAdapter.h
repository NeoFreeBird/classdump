//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNLegacyFormBooleanItemAdapter_h
#define TFNLegacyFormBooleanItemAdapter_h
@import Foundation;

#include "TFNItemsCollectionItemAdapter.h"
#include "TFNLegacyFormViewAdapterAppearanceProvider-Protocol.h"

@interface TFNLegacyFormBooleanItemAdapter : TFNItemsCollectionItemAdapter {
    /* instance variables */
    id <TFNLegacyFormViewAdapterAppearanceProvider> _appearanceProvider;
}

/* instance methods */
- (id)initWithAppearanceProvider:(id)provider;
- (struct CGSize { double x0; double x1; })dataViewController:(id)controller collectionViewSizeForItem:(id)item constrainedToSize:(struct CGSize { double x0; double x1; })size withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller collectionViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)dataViewController:(id)controller didSelectItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id /* block */)private_updateActionForItem:(id)item inDataViewController:(id)controller withOptions:(id)options atIndexPath:(id)path;

@end

#endif /* TFNLegacyFormBooleanItemAdapter_h */
