//
#ifndef _TtC12XVideoEditor20ProjectRenderContext_h
#define _TtC12XVideoEditor20ProjectRenderContext_h
@import Foundation;

@class Swift.Bool, XVideoEditor.ProjectFrameRenderer, XVideoEditor.RenderObserver ?, _$sSi, _$sSo28TAVTVideoFilterExecutionGate_pSg, _$sSo6NSLockC, _TtCs12_SwiftObject;

@interface XVideoEditor.ProjectRenderContext : Swift._SwiftObject { // (Swift)
    /* instance variables */
    XVideoEditor.ProjectFrameRenderer renderer;
    Swift.Int maxInFlight;
    __C.TAVTVideoFilterExecutionGate? gate;
    XVideoEditor.RenderObserver ? observer;
    __C.NSLock lock;
    Swift.Bool cancelled;
}

@end

#endif /* _TtC12XVideoEditor20ProjectRenderContext_h */
