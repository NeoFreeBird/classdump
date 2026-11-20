//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
