//
#ifndef _TtP14T1TwitterSwift20T1TagSetViewDelegate__Protocol_h
#define _TtP14T1TwitterSwift20T1TagSetViewDelegate__Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1TwitterSwift.T1TagSetViewDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)tagSetView:(id)view didTapTag:(id)tag;
- (void)tagSetView:(id)view didLongPressTag:(id)tag;
- (void)tagSetViewDidTap:(id)tap;
- (void)tagSetViewDidLongPress:(id)press;

@end

#endif /* _TtP14T1TwitterSwift20T1TagSetViewDelegate__Protocol_h */
