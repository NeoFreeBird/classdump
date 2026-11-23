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
