//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
