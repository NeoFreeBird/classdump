//
#ifndef TAVUIAutoplayable_Protocol_h
#define TAVUIAutoplayable_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class UIView;

@protocol TAVUIAutoplayable <NSObject>

@required

@property (readonly, nonatomic) UIView *autoplayableView;
@property (readonly, nonatomic) long long autoplayableType;

/* required instance methods */
- (void)didBecomeActiveAutoplayableWithManager:(id)manager;
- (void)willResignAsActiveAutoplayableWithManager:(id)manager;

@optional

@end

#endif /* TAVUIAutoplayable_Protocol_h */
