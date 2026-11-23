//
#ifndef TUCPlayableDestinationHandlerHelper_Protocol_h
#define TUCPlayableDestinationHandlerHelper_Protocol_h
@import Foundation;

@class TFSTwitterEntityMedia, TIPImagePipeline;

@protocol TUCPlayableDestinationHandlerHelper

@required

@property (nonatomic, readonly) TIPImagePipeline *imagePipeline;
@property (nonatomic, readonly) TFSTwitterEntityMedia *profileImage;

/* required instance methods */
- (id)webViewControllerFactoryFor:(id)_for destination:(id)destination playableEventHandler:(id)handler;
- (id)playableEventHandlerFor:(id)_for;

@optional

@end

#endif /* TUCPlayableDestinationHandlerHelper_Protocol_h */
