//
#ifndef ONBActionListViewControllerDelegate_Protocol_h
#define ONBActionListViewControllerDelegate_Protocol_h
@import Foundation;

@protocol ONBActionListViewControllerDelegate

@required

/* required instance methods */
- (void)actionListViewControllerDidTapNext:(id)next;
- (void)actionListViewControllerDidTapSkip:(id)skip;
- (void)actionListViewController:(id)controller didTapItemNavigationLink:(id)link;
- (id)actionListViewController:(id)controller expandedRichText:(id)text;

@optional

@end

#endif /* ONBActionListViewControllerDelegate_Protocol_h */
