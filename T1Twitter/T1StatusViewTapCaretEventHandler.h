//
#ifndef T1StatusViewTapCaretEventHandler_h
#define T1StatusViewTapCaretEventHandler_h
@import Foundation;

@class NSObject;

@interface T1StatusViewTapCaretEventHandler : NSObject

/* instance methods */
- (void)handleStatusViewEvent:(id)event controller:(id)controller scribeContext:(id)context;
- (_Bool)_t1_isViewedByRootAuthor:(unsigned long long)author viewEvent:(id)event userAccount:(id)account;

@end

#endif /* T1StatusViewTapCaretEventHandler_h */
