//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
