//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10XBookmarks43BookmarkStatusPickerContainerViewController_h
#define _TtC10XBookmarks43BookmarkStatusPickerContainerViewController_h
@import Foundation;

@class UIViewController, XBookmarks.XBookmarksStatusAccess _$sSgypc, _$sSo26TFNItemsDataViewControllerC, _$sSo6UIViewC;

@interface XBookmarks.BookmarkStatusPickerContainerViewController : UIViewController { // (Swift)
    /* instance variables */
    __C.TFNItemsDataViewController itemsViewController;
    __C.UIView overlayView;
    XBookmarks.XBookmarksStatusAccess _$sSgypc extractTimelineItemStatus;
    XBookmarks.XBookmarksStatusAccess function type (escaping) selectionBlock;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)handleTap:(id)tap;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC10XBookmarks43BookmarkStatusPickerContainerViewController_h */
