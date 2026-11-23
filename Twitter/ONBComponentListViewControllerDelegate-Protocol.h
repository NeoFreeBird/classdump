//
#ifndef ONBComponentListViewControllerDelegate_Protocol_h
#define ONBComponentListViewControllerDelegate_Protocol_h
@import Foundation;

@protocol ONBComponentListViewControllerDelegate

@required

/* required instance methods */
- (void)componentListViewController:(id)controller didUpdateComponents:(id)components;

@optional

@end

#endif /* ONBComponentListViewControllerDelegate_Protocol_h */
