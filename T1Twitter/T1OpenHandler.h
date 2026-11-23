//
#ifndef T1OpenHandler_h
#define T1OpenHandler_h
@import Foundation;

@class NSObject;

@interface T1OpenHandler : NSObject

@property (readonly, copy, nonatomic) id /* block */ openInViewController;
@property (readonly, copy, nonatomic) id /* block */ openAction;
@property (readonly, nonatomic) _Bool canOpen;
@property (nonatomic) _Bool didOpenExternalURL;

/* instance methods */
- (id)initWithOpenInViewControllerAction:(id /* block */)action;
- (id)initWithOpenAction:(id /* block */)action;
- (id)initWithOpenHandler:(id)handler viewControllerAction:(id /* block */)action;
- (id)initWithOpenAction:(id /* block */)action openInViewControllerAction:(id /* block */)action;
- (void)open:(id /* block */)open;

@end

#endif /* T1OpenHandler_h */
