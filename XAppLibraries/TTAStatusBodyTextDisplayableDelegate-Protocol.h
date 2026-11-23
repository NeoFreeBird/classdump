//
#ifndef TTAStatusBodyTextDisplayableDelegate_Protocol_h
#define TTAStatusBodyTextDisplayableDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TTAStatusBodyTextDisplayableDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)bodyTextDisplayable:(id)displayable didTapRange:(id)range;
- (void)bodyTextDisplayable:(id)displayable didLongPressRange:(id)range;
- (_Bool)bodyTextDisplayable:(id)displayable shouldRecognizeLongPressOnRange:(id)range;
- (void)bodyTextDisplayableDidTapTruncationToken:(id)token;
- (void)bodyTextDisplayable:(id)displayable didCopyText:(id)text;
- (void)bodyTextDisplayable:(id)displayable didSearchText:(id)text;
- (void)bodyTextDisplayable:(id)displayable didMuteText:(id)text;
- (void)bodyTextDisplayable:(id)displayable didAskGrokText:(id)text;
- (_Bool)bodyTextDisplayableTextTapExpansionEnabled;

@end

#endif /* TTAStatusBodyTextDisplayableDelegate_Protocol_h */
