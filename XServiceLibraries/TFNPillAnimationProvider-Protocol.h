//
#ifndef TFNPillAnimationProvider_Protocol_h
#define TFNPillAnimationProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNPillAnimationProvider <NSObject>

@required

/* required instance methods */
- (void)presentPillControl:(id)control fromView:(id)view animated:(_Bool)animated withOffset:(double)offset autoHideInterval:(double)interval;
- (void)hidePillControl:(id)control animated:(_Bool)animated pillTapped:(_Bool)tapped completion:(id /* block */)completion;
- (void)pillControlIntrinsicContentSizeDidChange:(id)change;
- (void)pillControlScrollViewDidChangeContentOffset:(id)offset;

@optional

@end

#endif /* TFNPillAnimationProvider_Protocol_h */
