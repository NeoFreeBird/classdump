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
