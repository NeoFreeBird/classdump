//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1ConversationFocalStatusViewLayoutState_h
#define T1ConversationFocalStatusViewLayoutState_h
@import Foundation;

#include "TTACoreStatusViewLayoutState-Protocol.h"

@class NSString, TFNComposableViewLayoutStateSet, TFNVerticalLayout;

@interface T1ConversationFocalStatusViewLayoutState : TFNComposableViewLayoutStateSet <TTACoreStatusViewLayoutState>

@property (retain, nonatomic) TFNVerticalLayout *verticalLayout;
@property (nonatomic) struct CGSize { double x0; double x1; } size;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } avatarFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (_Bool)isValidAfterStatusUpdate:(id)update;
- (_Bool)isValidAfterExternalUpdateOfType:(long long)type;
- (_Bool)_t1_isValidAfterUpdateWithViewModel:(id)model;

@end

#endif /* T1ConversationFocalStatusViewLayoutState_h */
