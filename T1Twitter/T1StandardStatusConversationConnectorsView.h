//
#ifndef T1StandardStatusConversationConnectorsView_h
#define T1StandardStatusConversationConnectorsView_h
@import Foundation;

@class ConversationConnectorView, UIView;

@interface T1StandardStatusConversationConnectorsView : UIView

@property (retain, nonatomic) ConversationConnectorView *topConnectorView;
@property (retain, nonatomic) ConversationConnectorView *bottomConnectorView;
@property (retain, nonatomic) ConversationConnectorView *tweetstormConnectorView;

/* instance methods */

@end

#endif /* T1StandardStatusConversationConnectorsView_h */
