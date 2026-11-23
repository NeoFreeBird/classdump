//
#ifndef TSFExclusiveSpaceModel_Protocol_h
#define TSFExclusiveSpaceModel_Protocol_h
@import Foundation;

@class NSString, TFSTwitterUserReference, TIPImagePipeline, TUIAvatarImageViewModel;

@protocol TSFExclusiveSpaceModel

@required

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) TFSTwitterUserReference *creatorUserReference;
@property (nonatomic, readonly) TUIAvatarImageViewModel *creatorAvatarViewModel;
@property (nonatomic, readonly) TIPImagePipeline *imagePipeline;
@property (nonatomic, readonly) long long numberOfListeners;

@optional

@end

#endif /* TSFExclusiveSpaceModel_Protocol_h */
