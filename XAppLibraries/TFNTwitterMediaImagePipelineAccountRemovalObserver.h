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
