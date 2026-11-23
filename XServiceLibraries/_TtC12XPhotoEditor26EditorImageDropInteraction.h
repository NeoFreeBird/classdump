//
#ifndef _TtC12XPhotoEditor26EditorImageDropInteraction_h
#define _TtC12XPhotoEditor26EditorImageDropInteraction_h
@import Foundation;

#include "UIDropInteractionDelegate-Protocol.h"

@class NSObject, XPhotoEditor.EditorImageDropInteraction.Availability _$syc, _$sSo17UIDropInteractionCSg, _$sySaySo7UIImageCG_ __C.CGPoint _$stc;

@interface XPhotoEditor.EditorImageDropInteraction : NSObject <UIDropInteractionDelegate> { // (Swift)
    /* instance variables */
    XPhotoEditor.EditorImageDropInteraction.Availability _$syc availability;
     empty-list [__C.UIImage] first-element-marker  __C.CGPoint _$stc onDrop;
    __C.UIDropInteraction? $__lazy_storage_$_interaction;
}

/* instance methods */
- (_Bool)dropInteraction:(id)interaction canHandleSession:(id)session;
- (id)dropInteraction:(id)interaction sessionDidUpdate:(id)update;
- (void)dropInteraction:(id)interaction performDrop:(id)drop;
- (id)init;

@end

#endif /* _TtC12XPhotoEditor26EditorImageDropInteraction_h */
