//
#ifndef TTSSearchTypeaheadViewControllerDelegate_Protocol_h
#define TTSSearchTypeaheadViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TTSSearchTypeaheadViewControllerDelegate <NSObject>

@required

/* required instance methods */
- (void)searchTypeaheadViewController:(id)controller didSelectUser:(id)user;
- (void)searchTypeaheadViewController:(id)controller didSelectRecentSearch:(id)search;
- (void)searchTypeaheadViewController:(id)controller didSelectTopic:(id)topic;
- (void)searchTypeaheadViewController:(id)controller didSelectTopic:(id)topic;
- (void)searchTypeaheadViewController:(id)controller didSelectEvent:(id)event;
- (void)searchTypeaheadViewController:(id)controller didSelectEvent:(id)event;
- (void)searchTypeaheadViewController:(id)controller didTapAheadWithTerm:(id)term;
- (void)searchTypeaheadViewController:(id)controller didSelectCashtag:(id)cashtag;
- (void)searchTypeaheadViewController:(id)controller didSelectCashtag:(id)cashtag;

@optional

/* optional instance methods */
- (void)searchTypeaheadViewControllerViewWillBeginDragging:(id)dragging;
- (void)searchTypeaheadViewController:(id)controller didSelectMessageForUser:(id)user;
- (void)searchTypeaheadViewController:(id)controller didSelectMessageForUser:(id)user;

@end

#endif /* TTSSearchTypeaheadViewControllerDelegate_Protocol_h */
