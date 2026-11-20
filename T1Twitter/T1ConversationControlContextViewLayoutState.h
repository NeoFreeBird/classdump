//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1ConversationControlContextViewLayoutState_h
#define T1ConversationControlContextViewLayoutState_h
@import Foundation;

@class NSAttributedString, TFNComposableViewLayoutState, TFSURTRichText;

@interface T1ConversationControlContextViewLayoutState : TFNComposableViewLayoutState

@property (retain, nonatomic) TFSURTRichText *richText;
@property (retain, nonatomic) NSAttributedString *attributedText;

/* instance methods */

@end

#endif /* T1ConversationControlContextViewLayoutState_h */
