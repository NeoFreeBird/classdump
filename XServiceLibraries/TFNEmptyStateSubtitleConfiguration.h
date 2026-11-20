//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNEmptyStateSubtitleConfiguration_h
#define TFNEmptyStateSubtitleConfiguration_h
@import Foundation;

@class NSArray, NSObject, NSString;

@interface TFNEmptyStateSubtitleConfiguration : NSObject // (Swift)

@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSArray *links;
@property (nonatomic, copy) NSArray *boldRanges;
@property (nonatomic, copy) id /* block */ linkTapHandler;

/* instance methods */
- (id)initWithText:(id)text;
- (id)init;

@end

#endif /* TFNEmptyStateSubtitleConfiguration_h */
