//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef LegacySegmentedViewControllerConfiguration_h
#define LegacySegmentedViewControllerConfiguration_h
@import Foundation;

@class NSObject;

@interface LegacySegmentedViewControllerConfiguration : NSObject // (Swift)

@property (nonatomic, readonly) _Bool attachTabBarToNavigationBarBlur;
@property (nonatomic, readonly) _Bool usesAlternateBackground;
@property (nonatomic, readonly) _Bool adjustsContentInset;

/* instance methods */
- (id)init;
- (id)initWithAttachTabBarToNavigationBarBlur:(_Bool)blur usesAlternateBackground:(_Bool)background adjustsContentInset:(_Bool)inset;

@end

#endif /* LegacySegmentedViewControllerConfiguration_h */
