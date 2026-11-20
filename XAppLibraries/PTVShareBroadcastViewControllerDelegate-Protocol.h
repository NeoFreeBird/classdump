//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
