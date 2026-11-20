//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift34PostComposerFullComposerTransition_h
#define _TtC14T1TwitterSwift34PostComposerFullComposerTransition_h
@import Foundation;

#include "T1ComposeMorphContainer-Protocol.h"
#include "T1ComposeMorphTransition-Protocol.h"

@class NSObject, T1TwitterSwift.PostComposerTransitionDestination ?, UIViewController, _$s13QuickComposer0aB16ExpansionContextCMn;

@interface T1TwitterSwift.PostComposerFullComposerTransition : NSObject <T1ComposeMorphTransition> { // (Swift)
    /* instance variables */
    nominal type descriptor for QuickComposer.QuickComposerExpansionContext context;
    T1TwitterSwift.PostComposerTransitionDestination ? destination;
}

@property (nonatomic, readonly) _Bool morphing;
@property (nonatomic, readonly) UIViewController<T1ComposeMorphContainer> *preparedComposerViewController;

/* instance methods */
- (_Bool)isMorphing;
- (void)attachComposer:(id)composer;
- (void)cancel;
- (void)finishWithDismissal:(id /* block */)dismissal;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift34PostComposerFullComposerTransition_h */
