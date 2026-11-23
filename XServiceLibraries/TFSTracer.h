//
#ifndef TFSTracer_h
#define TFSTracer_h
@import Foundation;

@class NSObject;

@interface TFSTracer : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 spanQueue;
    B24@0:8@"NSString"16 spanBuilder;
    B24@0:8@"NSString"16 traceReporter;
    B24@0:8@"NSString"16 traceBackgrounder;
    B24@0:8@"NSString"16 traceValueProvider;
    B24@0:8@"NSString"16 traceTimestampAligner;
}

/* class methods */
+ (id)shared;
+ (id)mainQueueOnly;
+ (void)setMainQueueOnly:(id)only;
+ (id)loggingChannel;

/* instance methods */
- (void)measuredWithTraceName:(id)name samplingPolicy:(id)policy workToMeasure:(id /* block */)measure;
- (void)measuredAsyncWithTraceName:(id)name samplingPolicy:(id)policy asyncWorkToMeasure:(id /* block */)measure;
- (void)measuredWithSpanName:(id)name inParentContext:(id)context workToMeasure:(id /* block */)measure;
- (void)measuredWithSpanName:(id)name inParentContext:(id)context childSpanNames:(id)names workToMeasure:(id /* block */)measure;
- (id)startTraceWithConfiguration:(id)configuration;
- (id)startTraceWithConfiguration:(id)configuration childSpanNames:(id)names;
- (void)allowReportingOfTraceWithRootSpan:(id)span;
- (id)startSpanNamed:(id)named inParentContext:(id)context;
- (id)startSpanNamed:(id)named inParentContext:(id)context childSpanNames:(id)names;
- (_Bool)stopSpan:(id)span;
- (void)cancelSpan:(id)span;
- (void)cancelSpanNamed:(id)named inParentSpanContext:(id)context;
- (void)abortTraceWithRootSpan:(id)span reason:(id)reason;
- (id)createFactoryForSpanNamed:(id)named inParentSpanContext:(id)context;
- (void)addAnnotationNamed:(id)named toSpanContext:(id)context;
- (void)attachMetadata:(id)metadata toSpanContext:(id)context;
- (id)describeTraceContainingSpanContext:(id)context;
- (id)init;

@end

#endif /* TFSTracer_h */
