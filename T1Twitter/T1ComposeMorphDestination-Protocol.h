//
#ifndef T1ComposeMorphDestination_Protocol_h
#define T1ComposeMorphDestination_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class UIView;

@protocol T1ComposeMorphDestination <NSObject>

@required

@property (nonatomic, readonly) UIView *morphRootView;
@property (nonatomic, readonly) UIView *morphAvatarView;
@property (nonatomic, readonly) UIView *morphTextEditorView;
@property (nonatomic, readonly) UIView *morphReplyContextView;
@property (nonatomic, readonly) UIView *morphGalleryButton;
@property (nonatomic, readonly) UIView *morphGIFButton;
@property (nonatomic, readonly) UIView *morphSendButton;
@property (nonatomic, readonly) UIView *morphCharacterCountView;
@property (nonatomic, readonly) _Bool morphReady;
@property (nonatomic, readonly) _Bool morphReady;

/* required instance methods */
- (_Bool)isMorphReady;
- (_Bool)isMorphReady;
- (id)morphViewForAttachmentAtIndex:(unsigned long long)index;
- (id)morphViewForAttachmentAtIndex:(unsigned long long)index;
- (void)morphStagingDidChange;
- (void)morphLayoutIfNeeded;
- (void)setMorphSharedElementsHidden:(_Bool)hidden;

@optional

@end

#endif /* T1ComposeMorphDestination_Protocol_h */
