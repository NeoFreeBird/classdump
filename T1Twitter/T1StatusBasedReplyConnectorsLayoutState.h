//
#ifndef T1StatusBasedReplyConnectorsLayoutState_h
#define T1StatusBasedReplyConnectorsLayoutState_h
@import Foundation;

#include "TFNTwitterStatusConversationTreeContext-Protocol.h"

@class NSArray, TFNComposableViewLayoutState;

@interface T1StatusBasedReplyConnectorsLayoutState : TFNComposableViewLayoutState

@property (retain, nonatomic) NSArray *ancestorConnectorViewFrames;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } parentConnectorViewFrame;
@property (retain, nonatomic) id <TFNTwitterStatusConversationTreeContext> conversationContext;
@property (nonatomic) double maxAnscestorHeight;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bottomAvatarFrame;

/* instance methods */

@end

#endif /* T1StatusBasedReplyConnectorsLayoutState_h */
