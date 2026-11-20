//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
