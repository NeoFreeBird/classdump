//
#ifndef T1StatusViewActiveRangePreviewingEventHandler_h
#define T1StatusViewActiveRangePreviewingEventHandler_h
@import Foundation;

@class NSObject;

@interface T1StatusViewActiveRangePreviewingEventHandler : NSObject

/* instance methods */
- (id)handleStatusViewEvent:(id)event controller:(id)controller zoomProvider:(id)provider scribeContext:(id)context;
- (id)_t1_webPreviewConfigurationForEvent:(id)event controller:(id)controller range:(id)range account:(id)account withPreviewViewController:(id)controller;

@end

#endif /* T1StatusViewActiveRangePreviewingEventHandler_h */
