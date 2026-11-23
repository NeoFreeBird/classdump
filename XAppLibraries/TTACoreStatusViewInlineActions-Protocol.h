//
#ifndef TTACoreStatusViewInlineActions_Protocol_h
#define TTACoreStatusViewInlineActions_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class UIView;

@protocol TTACoreStatusViewInlineActions <NSObject>

@required

@property (readonly, nonatomic) UIView *containerView;

/* required instance methods */
- (id)viewForInlineActionWithType:(unsigned long long)type;
- (long long)isButtonEnabledForDisabledEngagementEducationForType:(unsigned long long)type;
- (void)enumerateInlineActionsUsingBlock:(id /* block */)block;

@optional

@end

#endif /* TTACoreStatusViewInlineActions_Protocol_h */
