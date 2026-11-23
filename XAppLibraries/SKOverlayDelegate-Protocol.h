//
#ifndef SKOverlayDelegate_Protocol_h
#define SKOverlayDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol SKOverlayDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)storeOverlay:(id)overlay didFailToLoadWithError:(id)error;
- (void)storeOverlay:(id)overlay willStartPresentation:(id)presentation;
- (void)storeOverlay:(id)overlay didFinishPresentation:(id)presentation;
- (void)storeOverlay:(id)overlay willStartDismissal:(id)dismissal;
- (void)storeOverlay:(id)overlay didFinishDismissal:(id)dismissal;

@end

#endif /* SKOverlayDelegate_Protocol_h */
