//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC13GrokComposeUI16CancellableBlock_h
#define _TtC13GrokComposeUI16CancellableBlock_h
@import Foundation;

@class Swift.Bool, _$syyc, _$syycSg, _TtCs12_SwiftObject;

@interface GrokComposeUI.CancellableBlock : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Bool isCancelled;
    () -> () workBlock;
    (() -> ())? cancelBlock;
}

@end

#endif /* _TtC13GrokComposeUI16CancellableBlock_h */
