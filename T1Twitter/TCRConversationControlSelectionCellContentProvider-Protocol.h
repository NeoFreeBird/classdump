//
#ifndef TCRConversationControlSelectionCellContentProvider_Protocol_h
#define TCRConversationControlSelectionCellContentProvider_Protocol_h
@import Foundation;

@protocol TCRConversationControlSelectionCellContentProvider

@required

/* required instance methods */
- (id)conversationControlDisplayTextForType:(unsigned long long)type;
- (id)conversationControlAccessibilityTextForType:(unsigned long long)type;
- (id)conversationControlIconNameForType:(unsigned long long)type;
- (id)conversationControlSubtitleTextForType:(unsigned long long)type;

@optional

@end

#endif /* TCRConversationControlSelectionCellContentProvider_Protocol_h */
