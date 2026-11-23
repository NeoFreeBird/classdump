//
#ifndef T1StatusViewPhotoPreviewingEventHandler_h
#define T1StatusViewPhotoPreviewingEventHandler_h
@import Foundation;

@class NSObject;

@interface T1StatusViewPhotoPreviewingEventHandler : NSObject

/* instance methods */
- (id)handleStatusViewEvent:(id)event controller:(id)controller zoomProvider:(id)provider scribeContext:(id)context;

@end

#endif /* T1StatusViewPhotoPreviewingEventHandler_h */
