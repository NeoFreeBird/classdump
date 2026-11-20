//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNComposableViewLayoutTracer_Protocol_h
#define TFNComposableViewLayoutTracer_Protocol_h
@import Foundation;

@protocol TFNComposableViewLayoutTracer

@required

/* required instance methods */
- (void)composableViewSetLayoutBegan:(id)began;
- (void)composableViewSet:(id)set adapterConfigurationBegan:(id)began;
- (void)composableViewSet:(id)set adapterLayoutBegan:(id)began;
- (void)composableViewSet:(id)set adapterUnhideBegan:(id)began;
- (void)composableViewSet:(id)set adapterInitializationBegan:(id)began;
- (void)composableViewSet:(id)set adapterSetupStateBegan:(id)began;
- (void)composableViewSet:(id)set adapterTeardownBegan:(id)began;
- (void)composableViewSet:(id)set adapterHideBegan:(id)began;
- (void)composableViewSet:(id)set adapterDeinitializationBegan:(id)began;
- (void)composableViewSet:(id)set adapterLayoutRequiredNoChanges:(id)changes;
- (void)composableViewSet:(id)set adapterConfigurationCompleted:(id)completed;
- (void)composableViewSetLayoutCompleted:(id)completed;

@optional

@end

#endif /* TFNComposableViewLayoutTracer_Protocol_h */
