//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVBroadcastThumbnailViewLayoutSpec_h
#define PTVBroadcastThumbnailViewLayoutSpec_h
@import Foundation;

@class NSObject;

@interface PTVBroadcastThumbnailViewLayoutSpec : NSObject

/* class methods */
+ (double)GuestViewsOuterPadding;
+ (struct CGSize { double x0; double x1; })OneGuestViewSize;
+ (struct CGSize { double x0; double x1; })MultipleGuestViewsSizeWithConstrainingSize:(struct CGSize { double x0; double x1; })size;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })LTRThumbnailFrameWithConstrainingSize:(struct CGSize { double x0; double x1; })size NumberOfGuestImages:(unsigned long long)images;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })LTRSafeFrameWithConstrainingSize:(struct CGSize { double x0; double x1; })size NumberOfGuestImages:(unsigned long long)images;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })ThumbnailFrameWithConstrainingSize:(struct CGSize { double x0; double x1; })size NumberOfGuestImages:(unsigned long long)images;
+ (id)ThumbnailMaskWithConstrainingSize:(struct CGSize { double x0; double x1; })size CornerRadius:(double)radius NumberOfGuestImages:(unsigned long long)images;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })GuestsProfileImagesStackViewFrameWithConstrainingSize:(struct CGSize { double x0; double x1; })size NumberOfGuestImages:(unsigned long long)images;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })LTRGuestsProfileImagesStackViewFrameWithConstrainingSize:(struct CGSize { double x0; double x1; })size NumberOfGuestImages:(unsigned long long)images;

@end

#endif /* PTVBroadcastThumbnailViewLayoutSpec_h */
