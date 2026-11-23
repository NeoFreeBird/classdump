//
#ifndef TFNProgrammaticScrollViewDelegate_Protocol_h
#define TFNProgrammaticScrollViewDelegate_Protocol_h
@import Foundation;

#include "UIScrollViewDelegate-Protocol.h"

@protocol TFNProgrammaticScrollViewDelegate <UIScrollViewDelegate>

@required

@optional

/* optional instance methods */
- (_Bool)scrollViewShouldProgrammaticallyScrollToTop:(id)top;
- (_Bool)scrollViewShouldProgrammaticallyScrollToTop:(id)top;
- (void)scrollViewWillProgrammaticallyScrollToTop:(id)top;
- (void)scrollViewWillProgrammaticallyScrollToTop:(id)top;
- (void)scrollViewWillProgrammaticallyScrollToBottom:(id)bottom;
- (void)scrollViewWillProgrammaticallyScrollToBottom:(id)bottom;
- (void)scrollViewDidProgrammaticallyScrollToBottom:(id)bottom;
- (void)scrollViewDidProgrammaticallyScrollToBottom:(id)bottom;
- (void)scrollViewWillScrollProgrammatically:(id)programmatically animated:(_Bool)animated;
- (void)scrollViewDidScrollProgrammatically:(id)programmatically animated:(_Bool)animated;

@end

#endif /* TFNProgrammaticScrollViewDelegate_Protocol_h */
