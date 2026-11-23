//
#ifndef TFNComposableViewPrepareForReuseTracer_Protocol_h
#define TFNComposableViewPrepareForReuseTracer_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNComposableViewPrepareForReuseTracer <NSObject>

@required

/* required instance methods */
- (void)composableViewSetPrepareForReuseBegan:(id)began;
- (void)composableViewSet:(id)set adapterPrepareToReuseBegan:(id)began;
- (void)composableViewSet:(id)set adapterPrepareForReuseCompleted:(id)completed;
- (void)composableViewSet:(id)set adapterNotInitialized:(id)initialized;
- (void)composableViewSetPrepareForReuseCompleted:(id)completed;

@optional

@end

#endif /* TFNComposableViewPrepareForReuseTracer_Protocol_h */
