//
#ifndef _TtC12XVideoEditor29VideoClipStreamFrameGenerator_h
#define _TtC12XVideoEditor29VideoClipStreamFrameGenerator_h
@import Foundation;

@class XVideoEditor.VideoClipStreamFrameGenerator.DeliveredFrame ?, _$sScTyyt _$ss5NeverOMn ?, _$sSo12AVPlayerItemC, _$sSo23AVPlayerItemVideoOutputC, _$sSo7NSCacheCySo8NSStringCSo7UIImageCG, _$sSo8AVPlayerC, _$sSo9CIContextC, _TtCs12_SwiftObject;

@interface XVideoEditor.VideoClipStreamFrameGenerator : Swift._SwiftObject { // (Swift)
    /* instance variables */
    __C.AVPlayer player;
    __C.AVPlayerItem playerItem;
    __C.AVPlayerItemVideoOutput videoOutput;
    __C.CIContext imageContext;
    __C.NSCache<__C.NSString, __C.UIImage> frames;
    XVideoEditor.VideoClipStreamFrameGenerator.DeliveredFrame ? lastDeliveredFrame;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? generationTask;
}

@end

#endif /* _TtC12XVideoEditor29VideoClipStreamFrameGenerator_h */
