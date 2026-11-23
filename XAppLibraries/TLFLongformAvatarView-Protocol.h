//
#ifndef TLFLongformAvatarView_Protocol_h
#define TLFLongformAvatarView_Protocol_h
@import Foundation;

@class TIPImagePipeline;

@protocol TLFLongformAvatarView

@required

@property (nonatomic, retain) TIPImagePipeline *imagePipeline;

/* required instance methods */
- (void)setAvatarImageURL:(id)url;

@optional

@end

#endif /* TLFLongformAvatarView_Protocol_h */
