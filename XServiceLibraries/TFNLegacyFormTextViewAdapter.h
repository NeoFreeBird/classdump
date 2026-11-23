//
#ifndef TFNLegacyFormTextViewAdapter_h
#define TFNLegacyFormTextViewAdapter_h
@import Foundation;

#include "TFNViewDataViewAdapter.h"

@interface TFNLegacyFormTextViewAdapter : TFNViewDataViewAdapter

/* instance methods */
- (struct CGSize { double x0; double x1; })dataViewController:(id)controller collectionViewSizeForItem:(id)item constrainedToSize:(struct CGSize { double x0; double x1; })size withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller collectionViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller calculatedLayoutMetricsForItem:(id)item withOptions:(id)options atIndexPath:(id)path;

@end

#endif /* TFNLegacyFormTextViewAdapter_h */
