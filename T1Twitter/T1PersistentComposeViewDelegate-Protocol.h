//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1PersistentComposeViewDelegate_Protocol_h
#define T1PersistentComposeViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1PersistentComposeViewDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)persistentComposeViewDidTap:(id)tap;
- (void)persistentComposeView:(id)view didTapAvatarWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)persistentComposeViewDidTapAccountView:(id)view fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)persistentComposeViewDidTapAccountView:(id)view fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)persistentComposeView:(id)view didSelectAccount:(id)account;
- (void)persistentComposeView:(id)view didSelectAccount:(id)account;
- (void)persistentComposeView:(id)view didRequestFullComposeWithTrigger:(long long)trigger;
- (void)persistentComposeView:(id)view didRequestFullComposeWithTrigger:(long long)trigger;
- (void)persistentComposeView:(id)view didRequestFullComposeWithTrigger:(long long)trigger morphTransition:(id)transition;
- (void)persistentComposeView:(id)view didRequestFullComposeWithTrigger:(long long)trigger morphTransition:(id)transition;
- (id)persistentComposeViewPrepareFullComposer:(id)composer;
- (void)persistentComposeViewDidTapAddMedia:(id)media;
- (void)persistentComposeViewDidTapReplySocialContext:(id)context;
- (void)persistentComposeViewDidTapProtectedReplyTutorialLink:(id)link;
- (void)persistentComposeViewDidRequestReplyRecipients:(id)recipients;
- (void)persistentComposeViewDidPresentReplyRecipients:(id)recipients;
- (void)persistentComposeView:(id)view didSetReplyRecipient:(long long)recipient included:(_Bool)included;
- (void)persistentComposeView:(id)view didTapRemoveAttachment:(id)attachment;
- (void)persistentComposeView:(id)view didTapAttachment:(id)attachment;
- (_Bool)persistentComposeView:(id)view canEditAttachment:(id)attachment;
- (void)persistentComposeView:(id)view didSelectAutocompleteItem:(id)item;
- (void)persistentComposeViewDidDismissAutocomplete:(id)autocomplete;

@end

#endif /* T1PersistentComposeViewDelegate_Protocol_h */
