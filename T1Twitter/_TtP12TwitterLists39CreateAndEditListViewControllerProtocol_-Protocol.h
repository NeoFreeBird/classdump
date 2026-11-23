//
#ifndef _TtP12TwitterLists39CreateAndEditListViewControllerProtocol__Protocol_h
#define _TtP12TwitterLists39CreateAndEditListViewControllerProtocol__Protocol_h
@import Foundation;

#include "_TtP12TwitterLists39CreateAndEditListViewControllerDelegate_-Protocol.h"

@protocol TwitterLists.CreateAndEditListViewControllerProtocol

@required

@property (nonatomic, retain) id <TwitterLists.CreateAndEditListViewControllerDelegate> delegate;

/* required instance methods */
- (void)tfn_dismissAnimated:(_Bool)animated completion:(id /* block */)completion;

@optional

@end

#endif /* _TtP12TwitterLists39CreateAndEditListViewControllerProtocol__Protocol_h */
