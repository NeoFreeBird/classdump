//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVBroadcastMapTableViewCellLayoutSpec_h
#define PTVBroadcastMapTableViewCellLayoutSpec_h
@import Foundation;

@class NSObject;

@interface PTVBroadcastMapTableViewCellLayoutSpec : NSObject

/* class methods */
+ (struct CGSize { double x0; double x1; })LocalTimeLabelSize:(id)size WithFont:(id)font SuperViewSize:(struct CGSize { double x0; double x1; })size;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })FrameForLocalTimeBadgeForLocalTime:(struct CGSize { double x0; double x1; })time TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })FrameForLocalTimeLabelWithLocalTimeLabelSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;

@end

#endif /* PTVBroadcastMapTableViewCellLayoutSpec_h */
