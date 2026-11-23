//
#ifndef TTAStatusBodyTextViewDelegate_Protocol_h
#define TTAStatusBodyTextViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TTAStatusBodyTextViewDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)bodyTextView:(id)view didTapActiveTextRange:(id)range;
- (void)bodyTextView:(id)view didTapActiveTextRange:(id)range;
- (void)bodyTextView:(id)view didLongPressActiveTextRange:(id)range;
- (void)bodyTextView:(id)view didLongPressActiveTextRange:(id)range;
- (_Bool)bodyTextView:(id)view shouldRecognizeLongPressOnActiveTextRange:(id)range;
- (_Bool)bodyTextView:(id)view shouldRecognizeLongPressOnActiveTextRange:(id)range;
- (id)bodyTextView:(id)view previewConfigurationForActiveTextRange:(id)range;
- (id)bodyTextView:(id)view previewConfigurationForActiveTextRange:(id)range;
- (void)bodyTextViewDidTapTruncationToken:(id)token;
- (void)bodyTextView:(id)view didCopyText:(id)text;
- (void)bodyTextView:(id)view didSearchText:(id)text;
- (void)bodyTextView:(id)view didMuteText:(id)text;
- (void)bodyTextView:(id)view didAskGrokText:(id)text;
- (_Bool)bodyTextViewTextTapExpansionEnabled;

@end

#endif /* TTAStatusBodyTextViewDelegate_Protocol_h */
