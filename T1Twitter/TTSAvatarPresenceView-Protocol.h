//
#ifndef TTSAvatarPresenceView_Protocol_h
#define TTSAvatarPresenceView_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class TIPImagePipeline;

@protocol TTSAvatarPresenceView <NSObject>

@required

@property (nonatomic, retain) TIPImagePipeline *imagePipeline;

/* required instance methods */
- (void)setAsUndecorratedItemForUser:(id)user;
- (void)setAsUndecorratedItemForUser:(id)user;
- (void)setAsBasicVoiceItemForUser:(id)user showLiveNestedBorders:(_Bool)borders;
- (void)setAsBasicVoiceItemForUser:(id)user showLiveNestedBorders:(_Bool)borders;
- (void)setAsLiveItemForUser:(id)user showLiveNestedBorders:(_Bool)borders;
- (void)setAsLiveItemForUser:(id)user showLiveNestedBorders:(_Bool)borders;

@optional

@end

#endif /* TTSAvatarPresenceView_Protocol_h */
