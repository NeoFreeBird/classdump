//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
