//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSModelMemoryCacheObserver_Protocol_h
#define TFSModelMemoryCacheObserver_Protocol_h
@import Foundation;

@protocol TFSModelMemoryCacheObserver

@required

/* required instance methods */
- (void)memoryCacheDidSetRecord:(id)record;
- (void)memoryCacheDidRemoveRecord:(id)record;

@optional

@end

#endif /* TFSModelMemoryCacheObserver_Protocol_h */
