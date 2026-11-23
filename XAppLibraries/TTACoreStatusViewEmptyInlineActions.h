//
#ifndef TTACoreStatusViewEmptyInlineActions_h
#define TTACoreStatusViewEmptyInlineActions_h
@import Foundation;

#include "TTACoreStatusViewInlineActions-Protocol.h"

@class NSObject, NSString, UIView;

@interface TTACoreStatusViewEmptyInlineActions : NSObject <TTACoreStatusViewInlineActions>

@property (readonly, nonatomic) UIView *containerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)viewForInlineActionWithType:(unsigned long long)type;
- (long long)isButtonEnabledForDisabledEngagementEducationForType:(unsigned long long)type;
- (void)enumerateInlineActionsUsingBlock:(id /* block */)block;

@end

#endif /* TTACoreStatusViewEmptyInlineActions_h */
