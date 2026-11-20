//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
