//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10JetfuelSDK14StoryComponent_h
#define _TtC10JetfuelSDK14StoryComponent_h
@import Foundation;

#include "UICollectionViewDelegate-Protocol.h"

@class JetfuelSDK.StoriesViewModel ?, JetfuelSDK.StoryComponent.Props ?, JetfuelSDK.StoryComponent.StoryView, JetfuelSDK.VDOMRenderer ?, JetfuelSDK.VDOMRendererStore, JetfuelSDK.ViewContext, NSObject, Swift.Bool, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSi, _$sSo11UIStackViewC, _$sSo22UITapGestureRecognizerCSg;

@interface JetfuelSDK.StoryComponent : NSObject <UICollectionViewDelegate> { // (Swift)
    /* instance variables */
    Swift.Int numItemsToPrefetch;
    JetfuelSDK.ViewContext context;
    JetfuelSDK.StoriesViewModel ? model;
    JetfuelSDK.StoryComponent.StoryView root;
    __C.UIStackView progressStack;
    JetfuelSDK.VDOMRendererStore rendererStore;
    JetfuelSDK.VDOMRenderer ? currentItemRenderer;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
    JetfuelSDK.StoryComponent.Props ? props;
    Swift.Int storyIndex;
    Swift.Bool isVisible;
    __C.UITapGestureRecognizer? $__lazy_storage_$_tapGestureRecognizer;
}

/* instance methods */
- (void)handleTap:(id)tap;
- (id)init;

@end

#endif /* _TtC10JetfuelSDK14StoryComponent_h */
