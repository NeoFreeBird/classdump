//
#ifndef PTVShareBroadcastViewControllerDelegate_Protocol_h
#define PTVShareBroadcastViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVShareBroadcastViewControllerDelegate <NSObject>

@required

/* required instance methods */
- (void)shareBroadcastViewControllerDidSelectShareURL:(id)url fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect inView:(id)view;
- (void)shareBroadcastViewControllerDidSelectComposeTweet:(id)tweet fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect inView:(id)view;
- (void)shareBroadcastViewControllerDidSelectComposeDirectMessage:(id)message fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect inView:(id)view;
- (void)shareBroadcastViewControllerDidTapToDismiss:(id)dismiss;

@optional

@end

#endif /* PTVShareBroadcastViewControllerDelegate_Protocol_h */
