//
#ifndef T1StatusViewTombstoneTapEventHandler_h
#define T1StatusViewTombstoneTapEventHandler_h
@import Foundation;

@class NSObject;

@interface T1StatusViewTombstoneTapEventHandler : NSObject

/* instance methods */
- (void)handleStatusViewEvent:(id)event controller:(id)controller scribeContext:(id)context;
- (id)_callToActionURLWith:(id)urlwith;

@end

#endif /* T1StatusViewTombstoneTapEventHandler_h */
