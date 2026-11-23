//
#ifndef T1StatusViewPhotoZoomEventHandler_h
#define T1StatusViewPhotoZoomEventHandler_h
@import Foundation;

@class NSObject;

@interface T1StatusViewPhotoZoomEventHandler : NSObject

/* instance methods */
- (id)handleStatusViewEvent:(id)event controller:(id)controller zoomProvider:(id)provider scribeContext:(id)context;

@end

#endif /* T1StatusViewPhotoZoomEventHandler_h */
