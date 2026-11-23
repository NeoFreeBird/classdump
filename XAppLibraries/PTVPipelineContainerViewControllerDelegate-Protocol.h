//
#ifndef PTVPipelineContainerViewControllerDelegate_Protocol_h
#define PTVPipelineContainerViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVPipelineContainerViewControllerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)pipelineContainerViewControllerPublishingStateDidChange:(id)change;
- (void)pipelineContainerViewControllerAudioPresentStateDidChange:(id)change;
- (void)onCameraTypeChange:(long long)change;
- (void)didChangeLocalAudioSource:(_Bool)source isUsingHeadphones:(_Bool)headphones;
- (_Bool)pipelineContainerViewControllerDefaultsInFrontPosition;

@end

#endif /* PTVPipelineContainerViewControllerDelegate_Protocol_h */
