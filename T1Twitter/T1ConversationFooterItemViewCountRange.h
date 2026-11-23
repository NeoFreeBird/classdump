//
#ifndef T1ConversationFooterItemViewCountRange_h
#define T1ConversationFooterItemViewCountRange_h
@import Foundation;

@class NSString, TFSFlavoredRange;

@interface T1ConversationFooterItemViewCountRange : TFSFlavoredRange

@property (retain, nonatomic) NSString *accessibilityViewCounts;

/* instance methods */
- (id)accessibilityText;
- (id)accessibilityHint;

@end

#endif /* T1ConversationFooterItemViewCountRange_h */
