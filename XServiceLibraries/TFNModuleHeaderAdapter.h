//
#ifndef TFNModuleHeaderAdapter_h
#define TFNModuleHeaderAdapter_h
@import Foundation;

#include "TFNItemsDataViewAdapter.h"

@class UIFont;

@interface TFNModuleHeaderAdapter : TFNItemsDataViewAdapter

@property (readonly, nonatomic) _Bool requiresIntrinsicSpacingBeforeHeaders;
@property (retain, nonatomic) UIFont *headerFont;

/* instance methods */
- (id)initWithRequiresIntrinsicSpacingBeforeHeaders:(_Bool)headers;
- (unsigned long long)dataViewController:(id)controller sectionBreaksForIndexPath:(id)path;
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (_Bool)dataViewController:(id)controller shouldHighlightItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (struct CGSize { double x0; double x1; })dataViewController:(id)controller collectionViewSizeForItem:(id)item constrainedToSize:(struct CGSize { double x0; double x1; })size withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller collectionViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)_tfn_intrinsicSpacingToApplyForController:(id)controller;

@end

#endif /* TFNModuleHeaderAdapter_h */
