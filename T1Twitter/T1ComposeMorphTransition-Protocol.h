//
#ifndef T1ComposeMorphTransition_Protocol_h
#define T1ComposeMorphTransition_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "T1ComposeMorphContainer-Protocol.h"

@class UIViewController;

@protocol T1ComposeMorphTransition <NSObject>

@required

@property (nonatomic, readonly) _Bool morphing;
@property (nonatomic, readonly) _Bool morphing;
@property (nonatomic, readonly) UIViewController<T1ComposeMorphContainer> *preparedComposerViewController;

/* required instance methods */
- (_Bool)isMorphing;
- (_Bool)isMorphing;
- (void)attachComposer:(id)composer;
- (void)cancel;
- (void)finishWithDismissal:(id /* block */)dismissal;
- (void)finishWithDismissal:(id /* block */)dismissal;

@optional

@end

#endif /* T1ComposeMorphTransition_Protocol_h */
