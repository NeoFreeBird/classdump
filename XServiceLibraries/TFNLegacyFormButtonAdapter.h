//
#ifndef TFNLegacyFormButtonAdapter_h
#define TFNLegacyFormButtonAdapter_h
@import Foundation;

#include "TFNButtonDataViewAdapter.h"

@interface TFNLegacyFormButtonAdapter : TFNButtonDataViewAdapter

/* instance methods */
- (struct CGSize { double x0; double x1; })dataViewController:(id)controller collectionViewSizeForItem:(id)item constrainedToSize:(struct CGSize { double x0; double x1; })size withOptions:(id)options atIndexPath:(id)path;

@end

#endif /* TFNLegacyFormButtonAdapter_h */
