//
#ifndef PTVTitleSubtitleModalViewDelegate_Protocol_h
#define PTVTitleSubtitleModalViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVTitleSubtitleModalViewDelegate <NSObject>

@required

/* required instance methods */
- (void)titleSubtitleModalViewDidSelectMainAction:(id)action;
- (void)titleSubtitleModalViewDidSelectSecondaryAction:(id)action;
- (void)titleSubtitleModalViewDidSelectDismiss:(id)dismiss;

@optional

@end

#endif /* PTVTitleSubtitleModalViewDelegate_Protocol_h */
