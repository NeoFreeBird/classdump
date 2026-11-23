//
#ifndef T1ComposableViewPrepareForReuseTracer_h
#define T1ComposableViewPrepareForReuseTracer_h
@import Foundation;

#include "TFNComposableViewPrepareForReuseTracer-Protocol.h"

@class NSObject, NSString, TFNComposableViewAdapter, TFNComposableViewSet, TFSSpanContext, TFSTraceConfiguration, TFSTraceSamplingPolicy, TFSTracer;

@interface T1ComposableViewPrepareForReuseTracer : NSObject <TFNComposableViewPrepareForReuseTracer> {
    /* instance variables */
    _Bool _shouldReportTrace;
    TFNComposableViewSet *_composableViewSet;
    TFNComposableViewAdapter *_composableViewAdapter;
    TFSTracer *_tracer;
    TFSTraceSamplingPolicy *_samplingPolicy;
    TFSTraceConfiguration *_tracerConfiguration;
    TFSSpanContext *_composableViewSetSpan;
    TFSSpanContext *_composableViewAdapterSpan;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithTraceName:(id)name samplingPolicy:(id)policy;
- (void)composableViewSetPrepareForReuseBegan:(id)began;
- (void)composableViewSet:(id)set adapterPrepareToReuseBegan:(id)began;
- (void)composableViewSet:(id)set adapterPrepareForReuseCompleted:(id)completed;
- (void)composableViewSet:(id)set adapterNotInitialized:(id)initialized;
- (void)composableViewSetPrepareForReuseCompleted:(id)completed;

@end

#endif /* T1ComposableViewPrepareForReuseTracer_h */
