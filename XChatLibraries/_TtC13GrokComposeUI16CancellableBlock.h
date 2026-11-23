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
