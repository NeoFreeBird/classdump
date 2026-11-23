//
#ifndef _TtCO16TwitterAdFormats19BrandedLikePreviews18LandingItemAdapter_h
#define _TtCO16TwitterAdFormats19BrandedLikePreviews18LandingItemAdapter_h
@import Foundation;

@class TFNItemsDataViewAdapter;

@interface TwitterAdFormats.BrandedLikePreviews.LandingItemAdapter : TFNItemsDataViewAdapter // (Swift)

/* instance methods */
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller estimatedTableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)init;

@end

#endif /* _TtCO16TwitterAdFormats19BrandedLikePreviews18LandingItemAdapter_h */
