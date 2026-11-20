//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10XGifPicker30GifPickerContentViewController_h
#define _TtC10XGifPicker30GifPickerContentViewController_h
@import Foundation;

#include "UIAdaptivePresentationControllerDelegate-Protocol.h"
#include "UISearchBarDelegate-Protocol.h"
#include "UISearchResultsUpdating-Protocol.h"

@class UIViewController, XGifPicker.Gif _$sSgc ->, XGifPicker.GifPickerContentView ?, XGifPicker.GifPickerViewModel, XGifPicker.SearchFocus, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo18UISearchControllerCSg;

@interface XGifPicker.GifPickerContentViewController : UIViewController <UIAdaptivePresentationControllerDelegate, UISearchBarDelegate, UISearchResultsUpdating> { // (Swift)
    /* instance variables */
    XGifPicker.Gif _$sSgc -> didSelectGif;
    XGifPicker.SearchFocus searchFocus;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
    XGifPicker.GifPickerViewModel viewModel;
    XGifPicker.GifPickerContentView ? $__lazy_storage_$_contentView;
    __C.UISearchController? $__lazy_storage_$_searchController;
}

/* instance methods */
- (void)presentationControllerDidDismiss:(id)dismiss;
- (_Bool)searchBarShouldBeginEditing:(id)editing;
- (_Bool)searchBarShouldEndEditing:(id)editing;
- (void)updateSearchResultsForSearchController:(id)controller;
- (id)initWithCoder:(id)coder;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewDidDisappear:(_Bool)disappear;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC10XGifPicker30GifPickerContentViewController_h */
