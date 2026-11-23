//
#ifndef T1TweetComposeContextStatusViewLayoutState_h
#define T1TweetComposeContextStatusViewLayoutState_h
@import Foundation;

#include "TTACoreStatusViewLayoutState-Protocol.h"

@class NSString, TFNComposableViewLayoutStateSet, TFNStackLayout;

@interface T1TweetComposeContextStatusViewLayoutState : TFNComposableViewLayoutStateSet <TTACoreStatusViewLayoutState>

@property (retain, nonatomic) TFNStackLayout *layout;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } avatarFrame;
@property (nonatomic) _Bool hideMultiPhotoAltTextBadge;
@property (nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (_Bool)isValidAfterStatusUpdate:(id)update;
- (_Bool)isValidAfterExternalUpdateOfType:(long long)type;
- (_Bool)_t1_main_isValidAfterUpdateWithViewModel:(id)model;

@end

#endif /* T1TweetComposeContextStatusViewLayoutState_h */
