//
#ifndef T1EditProfileWorkFieldAdapter_h
#define T1EditProfileWorkFieldAdapter_h
@import Foundation;

@class TFNItemsDataViewAdapter;

@interface T1EditProfileWorkFieldAdapter : TFNItemsDataViewAdapter

/* instance methods */
- (struct CGSize { double x0; double x1; })dataViewController:(id)controller collectionViewSizeForItem:(id)item constrainedToSize:(struct CGSize { double x0; double x1; })size withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller collectionViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)dataViewController:(id)controller didHighlightItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)dataViewController:(id)controller didUnhighlightItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)_appearanceForController:(id)controller;
- (void)_setHighlighted:(_Bool)highlighted forCellAtIndexPath:(id)path inController:(id)controller;

@end

#endif /* T1EditProfileWorkFieldAdapter_h */
