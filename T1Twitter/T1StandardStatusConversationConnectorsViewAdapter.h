//
#ifndef T1StandardStatusConversationConnectorsViewAdapter_h
#define T1StandardStatusConversationConnectorsViewAdapter_h
@import Foundation;

@class TFNComposableViewAdapter;

@interface T1StandardStatusConversationConnectorsViewAdapter : TFNComposableViewAdapter

@property (readonly, nonatomic) unsigned long long displayType;
@property (retain, nonatomic) TFNComposableViewAdapter *tweetstormIndicatorAdapter;
@property (nonatomic) unsigned long long conversationConnectorType;

/* instance methods */
- (id)initWithViewIdentifier:(long long)identifier displayType:(unsigned long long)type;
- (void)layoutConversationConnectors:(id)connectors;
- (_Bool)shouldBeVisibleForViewModel:(id)model;
- (id)initializeView;
- (void)viewModel:(id)model didUpdateWithInfo:(id)info forView:(id)view;
- (void)_t1_updateConversationConnectorsForView:(id)view viewModel:(id)model;

@end

#endif /* T1StandardStatusConversationConnectorsViewAdapter_h */
