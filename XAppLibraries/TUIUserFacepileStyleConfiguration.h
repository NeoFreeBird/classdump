//
#ifndef TUIUserFacepileStyleConfiguration_h
#define TUIUserFacepileStyleConfiguration_h
@import Foundation;

@class NSObject;

@interface TUIUserFacepileStyleConfiguration : NSObject

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } defaultAvatarSize;
@property (readonly, nonatomic) double overlapFraction;
@property (readonly, nonatomic) double cascadingImageInset;
@property (readonly, nonatomic) _Bool usesCutoutMask;
@property (readonly, nonatomic) double cutoutGap;
@property (readonly, nonatomic) _Bool insertsSubviewsAtFront;
@property (readonly, nonatomic) _Bool usesCascadingLayout;

/* class methods */
+ (id)configurationForVariant:(long long)variant;

/* instance methods */
- (id)initWithDefaultAvatarSize:(struct CGSize { double x0; double x1; })size overlapFraction:(double)fraction cascadingImageInset:(double)inset usesCutoutMask:(_Bool)mask cutoutGap:(double)gap insertsSubviewsAtFront:(_Bool)front usesCascadingLayout:(_Bool)layout;

@end

#endif /* TUIUserFacepileStyleConfiguration_h */
