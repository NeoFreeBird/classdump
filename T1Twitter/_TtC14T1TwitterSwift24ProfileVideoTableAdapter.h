//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift24ProfileVideoTableAdapter_h
#define _TtC14T1TwitterSwift24ProfileVideoTableAdapter_h
@import Foundation;

#include "TTAStatusBodyTextViewDelegate-Protocol.h"

@class TFNItemsTableRowAdapter, _$sSo17TFNTwitterAccountC, _$sSo21TFNDataViewControllerCSgXw;

@interface T1TwitterSwift.ProfileVideoTableAdapter : TFNItemsTableRowAdapter <TTAStatusBodyTextViewDelegate> { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    weak __C.TFNDataViewController? hostController;
}

/* instance methods */
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)dataViewController:(id)controller willDisplayCell:(id)cell forItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)dataViewController:(id)controller didEndDisplayingCell:(id)cell forItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)dataViewController:(id)controller didSelectItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)bodyTextView:(id)view didTapActiveTextRange:(id)range;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift24ProfileVideoTableAdapter_h */
