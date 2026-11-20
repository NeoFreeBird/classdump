//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNComposableViewAdapter_T1Tracer_h
#define TFNComposableViewAdapter_T1Tracer_h
@import Foundation;

@interface TFNComposableViewAdapter (T1Tracer)

/* instance methods */
- (id)_t1_viewIdentifierSpanName;
- (id)_t1_spanNameForStringFormat:(id)format;
- (id)layoutSpanName;
- (id)teardownSpanName;
- (id)initializeSpanName;
- (id)unhideSpanName;
- (id)setupStateSpanName;
- (id)configureSpanName;
- (id)hideSpanName;
- (id)deinitializeSpanName;
- (id)prepareForReuseSpanName;
- (id)layoutSubSpanNames;
- (id)teardownSubSpanNames;

@end

#endif /* TFNComposableViewAdapter_T1Tracer_h */
