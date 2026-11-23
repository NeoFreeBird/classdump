//
#ifndef T1UserViewLayoutParameters_Protocol_h
#define T1UserViewLayoutParameters_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "T1UserViewOptions-Protocol.h"

@class TFNCachedTextSizing;

@protocol T1UserViewLayoutParameters <NSObject>

@required

@property (readonly, nonatomic) _Bool estimated;
@property (readonly, nonatomic) id <T1UserViewOptions> options;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } initialAvatarSize;
@property (readonly, nonatomic) double actionControlColumnWidth;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } caretSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } muteBadgeSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } userBadgeSize;
@property (readonly, nonatomic) Class layoutDelegateClass;
@property (readonly, nonatomic) TFNCachedTextSizing *cachedTextSizing;

/* required instance methods */
- (struct CGSize { double x0; double x1; })sizeForComponent:(long long)component withSize:(struct CGSize { double x0; double x1; })size layoutMetrics:(id)metrics;

@optional

@end

#endif /* T1UserViewLayoutParameters_Protocol_h */
