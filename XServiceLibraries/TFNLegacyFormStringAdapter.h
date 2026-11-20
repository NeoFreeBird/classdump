//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNLegacyFormStringAdapter_h
#define TFNLegacyFormStringAdapter_h
@import Foundation;

#include "TFNStringDataViewAdapter.h"

@interface TFNLegacyFormStringAdapter : TFNStringDataViewAdapter

/* instance methods */
- (struct CGSize { double x0; double x1; })dataViewController:(id)controller collectionViewSizeForItem:(id)item constrainedToSize:(struct CGSize { double x0; double x1; })size withOptions:(id)options atIndexPath:(id)path;

@end

#endif /* TFNLegacyFormStringAdapter_h */
