//
#ifndef TFNModalSheetViewControllerDelegate_Protocol_h
#define TFNModalSheetViewControllerDelegate_Protocol_h
@import Foundation;

#include "TFNModalContainerViewControllerDelegate-Protocol.h"

@protocol TFNModalSheetViewControllerDelegate <TFNModalContainerViewControllerDelegate>

@required

@optional

/* optional instance methods */
- (void)modalSheetViewController:(id)controller willTransitionToLayoutMode:(long long)mode withTransitionCoordinator:(id)coordinator;
- (void)modalSheetViewController:(id)controller didPanToCurrentHeight:(double)height preferredHeight:(double)height maximumHeight:(double)height mode:(long long)mode;
- (void)modalSheetViewControllerWillDismiss:(id)dismiss fromGesture:(_Bool)gesture;
- (void)modalSheetViewControllerDidDismiss:(id)dismiss fromGesture:(_Bool)gesture;
- (_Bool)modalSheetViewControllerShouldDismissWithGesture:(id)gesture;

@end

#endif /* TFNModalSheetViewControllerDelegate_Protocol_h */
