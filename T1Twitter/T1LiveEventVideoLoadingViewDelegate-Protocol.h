//
#ifndef T1LiveEventVideoLoadingViewDelegate_Protocol_h
#define T1LiveEventVideoLoadingViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1LiveEventVideoLoadingViewDelegate <NSObject>

@required

/* required instance methods */
- (void)loadingViewDidTapPlayButton:(id)button;

@optional

@end

#endif /* T1LiveEventVideoLoadingViewDelegate_Protocol_h */
