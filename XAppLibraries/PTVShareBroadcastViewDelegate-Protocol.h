//
#ifndef PTVShareBroadcastViewDelegate_Protocol_h
#define PTVShareBroadcastViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVShareBroadcastViewDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)shareBroadcastViewDidSelectShareURL:(id)url fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect inView:(id)view;
- (void)shareBroadcastViewDidSelectComposeTweet:(id)tweet fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect inView:(id)view;
- (void)shareBroadcastViewDidSelectComposeDirectMessage:(id)message fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect inView:(id)view;
- (void)shareBroadcastViewDidTapEmptySpace:(id)space;

@end

#endif /* PTVShareBroadcastViewDelegate_Protocol_h */
