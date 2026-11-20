//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterMediaImagePipelineAccountRemovalObserver_h
#define TFNTwitterMediaImagePipelineAccountRemovalObserver_h
@import Foundation;

@class NSObject;

@interface TFNTwitterMediaImagePipelineAccountRemovalObserver : NSObject

/* instance methods */
- (id)init;
- (void)accountWasRemoved:(id)removed;

@end

#endif /* TFNTwitterMediaImagePipelineAccountRemovalObserver_h */
