//
#ifndef _TtC18TwitterAudiospaces31VoiceRoomGradientBackgroundView_h
#define _TtC18TwitterAudiospaces31VoiceRoomGradientBackgroundView_h
@import Foundation;

@class Swift.Bool, UIView, _$s12CoreGraphics7CGFloatVMn, _$sSa -> TwitterAudiospaces.SpaceBlob, _$sSaySo7UIColorCG, _$sSi, _$sSo11UIImageViewC, _$sSo7UIColorC;

@interface TwitterAudiospaces.VoiceRoomGradientBackgroundView : UIView { // (Swift)
    /* instance variables */
    Swift.Int blobCount;
    Swift.Array -> TwitterAudiospaces.SpaceBlob blobs;
    __C.UIImageView noiseOverlay;
    nominal type descriptor for CoreGraphics.CGFloat speed;
    Swift.Bool showsNoise;
    [__C.UIColor] blobColors;
    __C.UIColor defaultBackgroundColor;
    [__C.UIColor] defaultBlobColors;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC18TwitterAudiospaces31VoiceRoomGradientBackgroundView_h */
