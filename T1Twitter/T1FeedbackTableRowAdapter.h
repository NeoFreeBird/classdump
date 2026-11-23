//
#ifndef T1FeedbackTableRowAdapter_h
#define T1FeedbackTableRowAdapter_h
@import Foundation;

#include "UIScrollViewDelegate-Protocol.h"

@class NSMapTable, NSString, TFNItemsTableRowAdapter, TFNTwitterAccount;

@interface T1FeedbackTableRowAdapter : TFNItemsTableRowAdapter <UIScrollViewDelegate>

@property (readonly, nonatomic) TFNTwitterAccount *account;
@property (retain, nonatomic) NSMapTable *dataViewControllerMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAccount:(id)account;
- (id)init;
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)dataViewController:(id)controller didSelectItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)scrollViewDidEndDragging:(id)dragging willDecelerate:(_Bool)decelerate;
- (void)scrollViewDidEndDecelerating:(id)decelerating;
- (void)scrollViewDidScrollToTop:(id)top;
- (void)scrollViewDidEndScrollingAnimation:(id)animation;
- (void)_removeFeedbackItemsFromDataViewControllerIfNecessary:(id)necessary;
- (id)_dismissingFeedbackSectionControllersInDataViewController:(id)controller;
- (void)_removeDismissibleItem:(id)item fromDataViewController:(id)controller;
- (id)_representedStreamObjectForItem:(id)item inStream:(id)stream;
- (void)_startObservingScrollingInDataViewController:(id)controller;
- (void)_stopObservingScrollingInDataViewControllerIfNecessary:(id)necessary;
- (void)_scrollingDidEnd:(id)end;
- (void)_undoDismissOfItem:(id)item inController:(id)controller;
- (id)_scribeParametersForDismissibleItem:(id)item;
- (void)_scribeFeedbackForDismissibleItem:(id)item inController:(id)controller;
- (void)_scribeUndoDismissalOfDismissibleItem:(id)item inDataViewController:(id)controller;
- (void)_scribeRemovalOfDismissibleItem:(id)item fromDataViewController:(id)controller;
- (unsigned long long)dataViewController:(id)controller sectionBreaksForIndexPath:(id)path;

@end

#endif /* T1FeedbackTableRowAdapter_h */
