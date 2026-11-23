//
#ifndef T1ConversationFooterItemEditedRange_h
#define T1ConversationFooterItemEditedRange_h
@import Foundation;

@class NSString, TFSFlavoredRange;

@interface T1ConversationFooterItemEditedRange : TFSFlavoredRange

@property (retain, nonatomic) NSString *accessibilityEditedTimestamp;

/* instance methods */
- (id)accessibilityText;
- (id)accessibilityHint;

@end

#endif /* T1ConversationFooterItemEditedRange_h */
