//
#ifndef T1StatusViewPlayerPreviewingEventHandler_h
#define T1StatusViewPlayerPreviewingEventHandler_h
@import Foundation;

@class NSObject;

@interface T1StatusViewPlayerPreviewingEventHandler : NSObject

/* instance methods */
- (id)handleStatusViewEvent:(id)event controller:(id)controller mediaHandler:(id)handler zoomProvider:(id)provider scribeContext:(id)context;

@end

#endif /* T1StatusViewPlayerPreviewingEventHandler_h */
