//
#ifndef T1URTViewControllerAwareAdapter_Protocol_h
#define T1URTViewControllerAwareAdapter_Protocol_h
@import Foundation;

@protocol T1URTViewControllerAwareAdapter

@required

/* required instance methods */
- (void)adapterWasUsedByURTViewController:(id)controller;

@optional

@end

#endif /* T1URTViewControllerAwareAdapter_Protocol_h */
